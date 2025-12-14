/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] [i_1] = ((((min((arr_4 [i_3] [i_0] [i_0] [i_0]), var_3))) ? (((1 != (~1)))) : var_3));
                        var_17 = (~8945);
                    }
                    var_18 ^= (arr_8 [i_1]);

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_19 = 47298;
                        var_20 = (max(var_20, ((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_4]) <= (arr_9 [i_1]))))));
                        var_21 ^= (((((arr_0 [i_4] [i_0]) < (arr_0 [i_2] [i_1]))) ? (((((var_3 / (arr_0 [i_0] [i_4]))) <= ((-(arr_4 [i_0] [i_0] [i_0] [i_0])))))) : (arr_3 [11])));
                    }
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        var_22 -= var_15;
                        arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = arr_13 [i_0] [i_2] [i_0] [i_0] [i_0];
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_2] [i_0] = 4058581403;
                        var_23 -= 13377713624270978118;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_28 [i_2] [i_1] [i_1] [i_2] [i_7] [i_8] = (max((((1 ? (arr_18 [i_0] [i_0] [i_0]) : (~var_15)))), (min(-844864072, 17457767847374588546))));
                            arr_29 [i_0] [i_0] [11] [i_2] [i_0] = -38;
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_24 = (max(var_24, (((0 ? (arr_8 [i_1]) : (arr_12 [i_1] [i_7] [i_2] [i_1] [i_1]))))));
                            arr_32 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((((arr_17 [i_0] [i_1] [i_2] [i_2] [i_7] [i_9]) ? (arr_27 [i_0] [9] [i_2] [i_2] [i_7] [i_2]) : var_9)));
                            var_25 = ((-(arr_4 [i_0] [i_1] [i_2] [i_7])));
                            arr_33 [i_2] [i_1] [i_2] [i_7] = -351540493;
                        }
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_26 += var_13;
                            var_27 = var_7;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_28 *= (((var_8 ? var_3 : (arr_34 [i_1] [i_0]))));
                            arr_39 [i_0] [i_1] [i_2] [i_2] [i_0] = (max((arr_7 [i_1]), (arr_2 [i_1] [i_11])));
                            var_29 = -8700877271803822952;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_30 = var_7;
                            var_31 *= (!236385892);
                            var_32 += (((arr_6 [i_1]) - (!-119)));
                            var_33 = (min(var_33, 159));
                        }
                        var_34 *= (1 | var_1);
                    }
                    arr_42 [i_0] [i_0] [i_0] [i_2] = var_11;
                }
            }
        }
        arr_43 [i_0] [4] = ((arr_37 [4] [i_0] [i_0] [i_0]) ? (((((arr_19 [i_0] [i_0] [i_0] [i_0]) <= var_15)) ? 2190844500581883094 : (arr_11 [i_0] [10] [i_0] [10] [i_0]))) : ((var_1 ? (arr_13 [i_0] [0] [i_0] [i_0] [i_0]) : ((1151922279 ? (arr_16 [i_0]) : 236385906)))));
    }
    var_35 = ((((var_15 & ((var_13 ? 4258436436 : var_11))))) ? (var_0 / 707054986) : (min((~var_16), (max(86, 13377713624270978101)))));
    var_36 = var_2;
    var_37 = (max(var_9, var_12));
    var_38 = var_6;
    #pragma endscop
}
