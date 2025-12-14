/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((var_0 + 2147483647) << (((max((~var_12), (var_1 <= var_1))) - 1145464266254293989)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_4 + 1] [i_3] [i_2] [i_1] [i_0] = (1 ^ var_10);
                                var_18 |= (max((((arr_2 [i_1 + 1]) << (((arr_2 [i_1 + 1]) - 32594)))), 1));
                                var_19 = (((var_15 * var_10) && ((((((arr_0 [i_1 + 1]) + 2147483647)) << (1 - 1))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        var_20 = arr_5 [i_0] [i_0] [i_2] [i_5 - 2];
                        var_21 = (arr_2 [i_0]);
                        var_22 *= ((~((((var_14 || (arr_10 [i_0] [i_1 - 1] [i_2] [i_5 + 1] [i_2]))) ? -var_5 : var_14))));
                    }

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            arr_20 [i_0] [i_6] [i_2] [i_6 - 1] [i_2] [i_7 + 1] = (max(((((var_5 ? var_0 : var_11)) ^ var_15)), 9));
                            arr_21 [i_6] [i_1] [i_1] [i_1] [i_7 - 1] [i_1] [i_1] = (arr_7 [i_1] [i_1]);
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((+(((arr_19 [i_7] [i_6 - 1] [i_0] [i_0] [i_0]) & var_5))));
                            arr_23 [i_0] [i_0] [i_2] [i_2] [i_6] = (var_2 / 251);
                        }
                        var_23 = max((arr_8 [i_6] [i_6 - 1] [i_2] [i_1 - 1] [i_0] [i_0]), (arr_12 [i_1 - 1] [i_6 - 1]));
                    }
                }
            }
        }
    }
    var_24 -= var_5;
    #pragma endscop
}
