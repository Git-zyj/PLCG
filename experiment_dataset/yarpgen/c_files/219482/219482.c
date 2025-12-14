/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((165733987 / var_3) * var_3)) > (((var_9 || var_6) % var_9))));
    var_14 = (((max((0 + var_5), ((max(65534, 65529))))) ^ (((((min(-2147483636, 34376)) > (31159 > 16140901064495857664)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (((~(((arr_0 [10]) << (var_7 - 8275572555634816995))))));
                                var_16 = ((~(((((min(2615737725229021651, -306545422)) + 9223372036854775807)) >> ((((306545422 ? 8191 : var_1)) - 8185))))));
                                var_17 = ((((arr_7 [i_0] [i_2 - 2] [i_2 + 2]) && ((min(-151276582, 28672))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_5] [12] [i_1] [i_6] = (((var_4 ? var_4 : var_8)));
                                var_18 = ((-((0 - (arr_7 [i_5] [17] [i_6 - 1])))));
                                var_19 = (max(var_19, (((((min((arr_10 [i_0] [i_0] [8] [i_0] [1] [8]), ((var_5 >> (var_6 - 54408)))))) ? (((arr_3 [i_6 + 1] [i_2 - 2]) ? (arr_16 [5]) : (((arr_14 [i_0] [i_2] [i_5] [i_5]) - var_1)))) : (min((arr_14 [i_1] [17] [i_2 + 1] [i_1]), var_8)))))));
                                arr_22 [i_0] [1] [i_2 + 1] [i_5] [i_6] [i_6] = ((((arr_19 [19] [18] [i_6 - 1] [i_2 - 2] [i_2 + 1]) & var_8)) | (~306545443));
                            }
                        }
                    }
                }
            }
        }
        var_20 = 40222;
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((((arr_10 [i_7 - 1] [8] [8] [i_8 - 1] [i_8 - 1] [i_10 - 2]) + -306545422)) << 1)))));
                                var_22 += var_6;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_23 = (min(var_23, ((min(65534, -306545416)))));
                        var_24 = ((~((var_3 ? (arr_8 [i_0]) : var_0))));
                        arr_36 [6] [18] [6] [i_8] [i_11] = ((~var_6) - (arr_25 [i_7 + 1] [i_7 - 4] [i_7 + 1] [i_8 - 1]));
                        var_25 = (min(var_25, (34376 && -151276582)));
                    }
                    var_26 = 1;
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        var_27 = (min(((max((arr_13 [10] [i_12 + 2] [10]), (arr_13 [16] [i_12 + 2] [16])))), (min((2147483647 - var_6), (var_9 / var_5)))));
        var_28 = (((-(arr_7 [12] [i_12 + 1] [i_12 - 1]))));
    }
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        var_29 = (((-(var_8 < var_6))));
        arr_42 [i_13] = (var_12 || var_11);
        var_30 = (min(var_30, ((((1 / -306545419) << (((((~1) ? 31161 : var_5)) - 31141)))))));
    }
    var_31 = var_1;
    #pragma endscop
}
