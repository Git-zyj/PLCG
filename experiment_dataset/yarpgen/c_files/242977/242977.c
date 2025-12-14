/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [0] [i_1] [i_2] [i_3] [i_4] = -5496;
                                var_10 = (!-5496);
                                var_11 = (((max(13388, 1))) ? 1 : ((44196 ? 9777767632196113020 : 3665468147)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            arr_22 [i_0] [9] [i_1] [i_5] [i_2] [11] [i_1] = -112;
                            arr_23 [i_0 - 1] [i_1] [i_2 + 2] [i_5] [i_6] [i_2] [i_6] = 812288447;
                        }
                        arr_24 [i_5] [i_2] [i_2] [5] = 810549015;
                        arr_25 [i_2] [i_1] [i_2] [12] [i_5] = (~1);
                        arr_26 [i_0] [i_1] [i_2] [i_2] [i_2 + 1] [i_5] = 44196;
                        var_12 = ((21339 ? 7994542670096710365 : -3417397777481899315));
                    }
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_13 = 1;

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_14 = 810549015;
                            arr_34 [i_0] [i_2] [6] [i_2] = -31580;
                            var_15 = (min(var_15, 21340));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            arr_38 [i_0] [14] [i_2] [8] [i_9] &= 13389;
                            var_16 = ((((min(0, 113))) ? 31579 : ((1097961034638923113 ? -13403 : -5494))));
                        }
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = (max(((-5496 ? 1 : 0)), (~255)));
                    }
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        arr_43 [10] [i_1] [i_2] [10] |= 1;
                        arr_44 [i_2 - 1] [1] [i_2] [i_2] = ((254 ? (~255) : 31));
                        arr_45 [i_2] [i_2] [i_2] = 1;
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_48 [i_11] [4] [i_2] [i_1] [i_0 - 1] = 2048;
                        var_17 = 2147483647;
                        var_18 = (min(var_18, ((min((~127), -22725)))));
                        arr_49 [i_0 - 1] [0] [i_2] [i_11] [i_2] = ((-(max(1, 1))));
                        var_19 = -6;
                    }
                    var_20 += ((1097961034638923113 ? ((255 ? 1 : 4)) : 0));
                }
            }
        }
    }
    var_21 = var_0;
    var_22 |= 2048;
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            {
                var_23 = 1;
                arr_56 [18] [i_13] = ((((min(100, -100))) ? (((~1) ? (min((-9223372036854775807 - 1), (-32767 - 1))) : ((750000034 ? (-9223372036854775807 - 1) : (-32767 - 1))))) : 20717));
            }
        }
    }
    #pragma endscop
}
