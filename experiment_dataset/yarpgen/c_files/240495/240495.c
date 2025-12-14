/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!62);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((-((min(10320, (arr_2 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, 63488));
                    arr_7 [i_0] [i_1] [i_2] = (-9 / var_11);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((((!((!(arr_2 [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_17 = ((+((var_6 ? (arr_2 [i_1]) : 262143))));
                        var_18 = (((arr_11 [i_0 + 1] [i_1 + 1] [i_3] [i_3]) ? (arr_3 [i_0 - 1] [i_1 + 1]) : 29));
                        var_19 *= -29;
                        var_20 = ((var_0 ? -7016 : (var_6 & 194)));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_21 = (((min(var_2, 425)) * ((min(25582, (((arr_9 [i_4] [i_2] [i_1] [i_0]) / 1)))))));
                        var_22 = -15;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_23 = 588690951;

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_24 = ((!(!var_1)));
                            var_25 = (((arr_1 [i_0 + 1]) / var_5));
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            var_26 = (var_4 % 3718618667);
                            arr_23 [i_0] [i_1] [i_5] = (((arr_18 [i_7 + 2]) + var_7));
                        }
                        var_27 = (min(var_27, var_11));
                    }
                    var_28 = (min(var_28, var_13));
                }
            }
        }
        arr_24 [i_0] [i_0] = ((var_9 ? var_1 : ((29037 ? var_4 : 11711))));
        var_29 = ((56674 % ((47 ? 201 : -11704))));
    }
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        var_30 = (min(var_30, ((((((max(11590207654563067118, (-2147483647 - 1)) < (arr_17 [i_8] [i_8 - 3] [i_8] [i_8])))))))));
        var_31 = (min(var_31, (arr_11 [i_8] [i_8] [1] [i_8])));
        arr_29 [i_8] = (((!var_9) ? (((arr_9 [i_8] [i_8] [i_8 - 2] [i_8]) ? 15420526290051647660 : (arr_9 [i_8] [i_8] [i_8 - 2] [i_8]))) : ((((5401369185022426048 ^ -754) ? (arr_13 [i_8 - 1] [i_8 - 2]) : (1 | var_4))))));
        arr_30 [i_8] = (min((((((5401369185022426066 ? -3074194576050017468 : 7587408592385515130))) ? (5401369185022426066 & 18446744073709551615) : (var_10 >= 3812195708))), 124));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] [i_9] = var_11;
                    var_32 = ((+((((!798664350) && (((var_5 ? var_6 : (arr_5 [i_9] [i_10])))))))));
                    var_33 = ((((((9 ? -29024 : 235)) + 2147483647)) >> (((arr_21 [i_8] [i_8] [i_8] [i_8] [i_8 + 2]) - 2271787851))));
                }
            }
        }
    }
    #pragma endscop
}
