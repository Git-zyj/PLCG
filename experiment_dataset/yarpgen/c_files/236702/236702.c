/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((((min((arr_3 [i_0]), (1 > var_4)))) <= (((arr_2 [i_0]) ? ((var_7 ? var_3 : 1)) : 15))));
                var_12 = (max(var_12, (((var_8 ^ (((arr_2 [i_1]) ? ((30082 ? 15 : 112)) : ((var_1 ? var_10 : (arr_2 [i_1]))))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] = (arr_8 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4]);
                                var_13 = (max((((((1 ? 1 : var_0))) ? ((var_1 * (arr_1 [i_0]))) : 1)), ((var_2 | (arr_8 [i_3 - 1] [i_3] [i_0] [i_3 - 1] [i_3 + 4] [i_3 - 1])))));
                                var_14 = (min(var_14, (((+((1 ? (arr_4 [i_2] [i_2 + 1] [i_3 + 3]) : (arr_4 [4] [i_2 + 1] [i_3 + 3]))))))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] = (((((arr_7 [1] [i_0] [1] [i_3] [i_2 + 2] [i_3 + 4]) ? (arr_7 [i_0] [i_0] [i_0] [i_3] [i_2 - 2] [i_3 - 1]) : (arr_6 [i_2 + 3] [i_0] [i_3 + 1]))) > (var_6 >= 20)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (1 ^ var_6);
    var_16 = 27;
    #pragma endscop
}
