/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (min((var_11 % 37), (((((37 ? 9223372036854775787 : -61)) <= 65531)))))));
    var_14 &= ((33155 ? -61 : 37));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, 17874495441191954530));
                            var_16 = (max(var_16, ((((max(((var_3 ? (arr_9 [i_0] [i_1]) : (arr_0 [i_1] [i_2]))), (min(9223372036854775801, (arr_0 [i_3] [i_1]))))) & ((~((var_4 ? var_10 : (arr_10 [i_0] [i_1]))))))))));
                        }
                    }
                }
                var_17 = (min(var_17, (((((min((arr_6 [i_1] [i_1 - 2]), var_0))) ? ((max((arr_6 [i_1] [i_1 + 2]), (arr_6 [11] [i_1 + 1])))) : (arr_6 [i_1] [i_1 + 2]))))));
                arr_14 [i_0] [i_0] = (min((((arr_4 [i_1] [i_1 + 2] [i_1 + 2]) ^ (arr_7 [i_0] [i_1 + 1] [i_1 + 2]))), (((arr_7 [i_0] [i_1 - 1] [i_1 + 1]) ? (arr_4 [i_1] [i_1 - 1] [i_1 - 2]) : (arr_5 [i_1] [i_1 - 1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
