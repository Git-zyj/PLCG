/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    var_16 += (max(((((var_11 / var_7) || (!2147483647)))), var_4));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = var_5;
                var_17 = (~127);
            }
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                var_18 = (var_4 / -var_14);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_19 = (--46);
                            var_20 = (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2]);
                            arr_21 [i_0 + 1] [i_1] [i_3 + 1] [i_3] [i_4] [i_3] [i_5] = 59;
                            arr_22 [i_0] [i_0] [i_0] [i_4] [i_3] = ((arr_20 [i_3] [i_1] [i_3]) * (((!(arr_8 [i_4])))));
                        }
                    }
                }
            }
            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_21 = ((var_2 ? -1203531467 : var_7));

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 = (arr_11 [i_1]);
                    var_23 = ((~((1 ? 1394379268 : 8))));
                }
            }
            for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0 + 1] [4] [i_8 + 2] [4] [1] = ((-1394379285 + 2147483647) >> (1436695201 - 1436695178));
                    var_24 = (-7 ? 0 : -114);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_25 = (((((-(arr_11 [i_1])))) - var_13));
                        arr_40 [i_0] [i_0] [i_8] [i_10] [i_8] &= ((2147483628 ? var_7 : var_13));
                        arr_41 [i_0] [i_8] [i_10] [i_11] = (~-2090095022);
                        arr_42 [i_1] [i_1] [i_0 + 1] = var_8;
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        var_26 = (((arr_11 [i_1]) >= (arr_11 [i_1])));
                        var_27 = (max(var_27, (var_14 & 1)));
                    }

                    for (int i_13 = 2; i_13 < 23;i_13 += 1)
                    {
                        var_28 = var_13;
                        var_29 = (max(var_29, -47));
                        arr_49 [i_1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_0 - 1] = var_5;
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        var_30 = (((arr_1 [i_10]) || -1394379291));
                        arr_53 [i_14] [1] [i_0] [i_0] [i_0] = (!var_5);
                    }
                    var_31 = var_3;
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        var_32 = -471203447;
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] = (!8);
                        arr_60 [i_0 - 1] [i_15] [i_16] = -897933556;
                        var_33 ^= ((-2147483647 - 1) ? var_7 : (-930574544 * 1));
                    }
                    for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
                    {
                        arr_65 [4] [i_17] = var_10;
                        var_34 = ((746686240 ? (arr_0 [i_0 - 1] [i_8 - 1]) : var_11));
                        arr_66 [i_8] [i_15] [i_17] = (0 * 4294967274);
                        var_35 = ((1 >> (345686320 - 345686299)));
                        var_36 = -930574557;
                    }
                    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
                    {
                        var_37 = 1;
                        arr_69 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_18] [i_0] = (-(((arr_8 [i_1]) ? 1 : 421673407)));
                    }
                    var_38 ^= (var_1 ? (arr_34 [i_0 - 1] [i_8 + 2]) : (((arr_37 [i_15] [i_0 - 1] [i_1] [i_0 - 1] [i_0]) ? -119909926 : 1)));
                }
                var_39 = -474819872;
            }
            var_40 &= (((arr_61 [i_0] [i_1] [23]) / ((1198716477 ? var_9 : 3836481554))));
            arr_70 [i_0] = (~var_4);
            var_41 = var_4;
        }
        var_42 = (min(var_42, var_11));
        arr_71 [i_0] [i_0] = arr_32 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 + 1];
    }
    #pragma endscop
}
