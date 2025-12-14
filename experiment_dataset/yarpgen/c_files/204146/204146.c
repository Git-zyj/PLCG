/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-1417717686);
    var_17 += (var_10 != var_12);

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = -25;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_10 [5] [i_2 - 1] [i_3] = (((((!-2139080337) < -99)) ? (((arr_7 [i_0 - 3]) ? ((var_10 - (arr_1 [16] [2]))) : var_5)) : 0));
                        var_19 += 9223372036854775807;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_15 [i_0 - 3] [i_1] [i_3] [i_3] = (arr_0 [i_0 + 1]);
                            arr_16 [i_0 - 2] [i_1] [11] [i_3] [i_4] = (32760 - -108);
                            arr_17 [i_3] [i_1] [4] [i_1] [4] = 153;
                            var_20 += ((-(((1 < (arr_11 [9] [0]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_21 [i_5] [i_3] [i_2] [i_2 + 1] [i_1] [i_3] [i_0 - 2] = ((((arr_19 [i_1] [i_2] [i_1] [i_0] [i_3]) ? var_3 : var_12)));
                            arr_22 [i_5] [i_3] [i_3] [i_0] [i_3] [i_0] = ((-(arr_5 [1] [1] [i_2 - 1])));
                            var_21 = arr_11 [i_0 - 2] [i_2 - 1];
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_22 -= (!39446);
                            var_23 += ((+((((arr_23 [i_1] [i_2 + 1] [i_6] [i_6] [i_6]) <= (arr_5 [i_0] [i_1] [i_0]))))));
                        }
                        var_24 = ((+(((~9074630804978407359) ^ (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1])))));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_25 = (max(((((min(16, 5))) & (arr_0 [i_2 + 1]))), (((max(1, 174))))));
                        arr_29 [23] [i_7] [1] [i_7] = ((((((min(var_1, var_7)))) ^ ((var_13 ? (arr_8 [i_7] [i_1] [i_7] [i_7]) : 16222529447588203795)))));
                        var_26 = (12716227009779931207 != 1282519526);
                        arr_30 [i_7] [i_7] [i_2] [i_1] [i_7] = ((((arr_8 [i_0 + 1] [0] [i_2] [i_2 - 1]) ? ((1 ? 23148 : var_13)) : var_0)) < ((((-9223372036854775807 - 1) ^ var_10))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_27 -= min(((((max(63, -30))) ? 0 : 495679532)), (((arr_6 [0] [i_0] [i_0] [0]) ? 32 : var_7)));
                        var_28 += (((!(arr_6 [i_8] [i_1] [i_1] [i_8]))));
                        var_29 = ((((-43 ? 66 : -2811488509020877507))) ? (arr_9 [i_0]) : ((9074630804978407374 ^ (arr_7 [i_0 - 3]))));
                        arr_33 [1] [i_1] = (~173);
                    }

                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        arr_38 [i_9] [1] [1] [i_1] [1] [1] = var_6;
                        var_30 = ((-((~(arr_7 [13])))));
                        arr_39 [i_9] [i_1] [5] [i_9] [i_2] = (arr_32 [i_9] [19] [i_9] [i_2 + 1] [i_0 - 3] [i_0 - 3]);
                    }
                    var_31 -= min((max((arr_3 [i_2 - 1]), ((((arr_5 [i_1] [i_1] [i_1]) & 255))))), (((-(arr_27 [i_1] [i_2 + 1] [i_2 + 1] [14])))));
                    var_32 = (((-1376634463983668960 != 757534098949143057) ? (((~(arr_9 [i_0 - 1])))) : (((arr_34 [i_0 - 1]) ? (arr_34 [i_0 - 1]) : var_15))));
                }
            }
        }
        var_33 = (-(arr_36 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [5]));
        arr_40 [1] = ((2909854073 && (((arr_4 [i_0]) < var_12))));
    }
    #pragma endscop
}
