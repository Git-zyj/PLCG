/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((((1 ^ (arr_4 [13]))) ? (((arr_2 [i_0] [i_0]) ? (arr_0 [1] [1]) : (arr_1 [i_1] [i_1]))) : ((-9952 ^ (arr_4 [i_1]))))));
                var_14 = (max(var_14, ((((((65535 ? 3575670380 : 20))) ? (((((((-(arr_3 [i_0] [i_1 + 2])))) != -var_2)))) : (((((arr_2 [i_1] [i_1]) && var_0)) ? ((((var_4 <= (arr_2 [i_1 - 4] [i_1 - 4]))))) : (min(var_7, (arr_0 [i_0] [i_0]))))))))));
                arr_5 [i_1] = (((((arr_3 [i_0] [i_1 + 1]) * (arr_3 [i_1] [i_1 - 1]))) >> ((((arr_0 [i_1] [i_1 - 1]) > (arr_0 [i_0] [i_1 - 4]))))));
                var_15 = ((!(((((var_4 <= (arr_4 [i_0])))) != (arr_0 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] = ((~(((arr_7 [i_1 + 1] [i_1 + 3] [i_1]) << (var_6 + 22930)))));
                            arr_11 [i_0] [i_1] [i_2] [i_0] &= (((((var_9 & 1622875787) ? 2097148 : (arr_6 [i_1 - 2] [i_1 - 4] [i_1]))) > (max((arr_4 [i_0]), (((arr_4 [i_0]) ? 1 : (arr_9 [i_3])))))));
                            var_16 = ((((((arr_3 [i_0] [i_2]) & (arr_1 [i_0] [i_1 - 4])))) ? var_8 : ((~(((arr_9 [i_3]) / (arr_2 [i_2] [i_1])))))));
                            var_17 ^= (((var_2 + 9223372036854775807) >> ((((var_9 ? 16150153609859521997 : (arr_1 [i_1 + 2] [i_1]))) + 70))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, (((((min((0 * 0), var_5))) ? ((((var_0 == var_0) <= 1152921229728940032))) : (((var_6 ^ var_1) ? (var_2 > var_5) : (var_1 * var_4))))))));
    #pragma endscop
}
