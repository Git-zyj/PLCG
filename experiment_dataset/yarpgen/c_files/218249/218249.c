/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_8 || 79) ? (((var_8 ? var_3 : 176))) : (-4718960578772705536 ^ var_9))));
    var_14 = ((min(50, var_12)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((var_2 ? var_8 : var_8)));
                    arr_11 [1] [i_1] [7] &= ((var_7 ? (((176 << (var_3 - 2761992810)))) : ((2814 ? var_4 : 9223372036854775807))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_18 [1] [i_1] [i_1] [i_2] [6] [i_4] = (var_8 ^ var_1);
                            var_16 = -38;
                        }
                        var_17 = ((51 ? (-9223372036854775807 - 1) : var_9));
                        var_18 = (min(var_18, var_6));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 = (((var_1 + var_5) ? (var_4 == 2064148083) : 18446744073709551607));
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = var_1;
                                arr_24 [i_0] [i_1] [i_6] [i_5] [i_6 - 2] [i_6] = ((74 ? ((var_5 ? 191 : -2814)) : (((var_1 >= (-127 - 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 8964855332652467425;
    #pragma endscop
}
