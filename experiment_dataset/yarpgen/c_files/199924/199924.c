/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 *= (arr_4 [22]);
                    var_18 += ((!(((arr_3 [i_1 + 1] [i_2 - 1] [i_2 - 1]) < (max((arr_2 [i_0] [i_0]), var_16))))));
                    var_19 = ((+(max((max((arr_4 [i_0]), (arr_2 [i_2 - 1] [i_1]))), (arr_5 [i_1 - 3] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 *= (max((((arr_8 [6] [i_1 - 3]) ? (arr_8 [i_1 - 2] [i_1 + 1]) : var_4)), ((-(arr_8 [i_1] [i_1 - 1])))));
                                var_21 = (max(var_21, (((~((~((min(1, 4639))))))))));
                                var_22 = (i_0 % 2 == 0) ? (((-(((arr_5 [i_0] [i_0]) >> (((arr_12 [i_0] [i_0] [i_0]) - 2605910563))))))) : (((-(((arr_5 [i_0] [i_0]) >> (((((arr_12 [i_0] [i_0] [i_0]) - 2605910563)) - 4144056946)))))));
                                arr_13 [i_0] [i_0] [16] [i_0] [i_0] &= (arr_1 [12] [12]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_1;
    var_24 *= ((((max((max(var_4, var_11)), var_14))) ? var_13 : ((var_14 ? var_12 : var_6))));
    #pragma endscop
}
