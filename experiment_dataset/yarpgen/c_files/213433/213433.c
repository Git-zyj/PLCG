/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [8] = var_15;
        var_19 = (arr_0 [i_0] [i_0 + 1]);
        var_20 = var_3;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((~(arr_0 [i_0 + 1] [i_0]))));
            arr_7 [i_0] [11] [i_0] = var_15;
            var_21 = max(8670376115625536388, 112);
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            var_22 = (arr_3 [11] [i_0] [6]);
            var_23 = 4738121238198791506;
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_24 = -8670376115625536409;
                    var_25 = (arr_17 [i_3] [i_3] [i_3] [i_3]);

                    for (int i_6 = 4; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_3] = var_17;
                        arr_22 [i_3] [12] [12] [i_3] [i_3] = var_11;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_25 [i_3] = (max(var_3, ((min((arr_24 [i_3] [i_3]), var_0)))));
                        arr_26 [i_5] [i_3] = var_10;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_3] [1] [i_3] = -8670376115625536372;
                        arr_30 [i_3] = (arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]);
                    }
                }
            }
        }
        arr_31 [i_3] = ((-((min(var_14, var_7)))));
        arr_32 [i_3] [i_3] = (~var_8);
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        arr_36 [i_9] = var_13;

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                arr_41 [i_9] [i_9] [i_11] = (min(var_6, (arr_17 [i_9] [i_11] [i_11] [i_9])));
                var_26 = var_14;

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_27 = (~var_12);
                    var_28 = (max(var_13, -8670376115625536409));
                    var_29 = (max(var_3, (((min(var_0, 135))))));
                }
                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    var_30 = var_4;
                    arr_49 [i_9] [i_9] [i_11 - 1] [i_9] = -3818152137852867697;
                    var_31 = var_11;
                    var_32 = var_16;

                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        var_33 = ((~(max(8670376115625536427, (arr_14 [i_13 - 2] [i_9] [i_13 - 2])))));
                        var_34 = ((!(~var_8)));
                    }
                }
            }
            arr_53 [i_9] = var_6;
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_35 = ((min((arr_11 [i_9]), (arr_45 [i_9]))));
                            arr_65 [i_9] [i_10] [i_10] [i_9] [i_17] = min(var_0, (arr_18 [i_9] [i_16] [i_16] [i_16 - 1]));
                            var_36 = 0;
                        }
                    }
                }
            }
            arr_66 [i_10] [i_9] [i_9] = var_11;
        }
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_37 = var_4;
            var_38 = 142;
            arr_69 [i_9] [i_18] = ((-(arr_15 [i_9] [i_9] [i_9])));
            arr_70 [i_9] [i_9] = -var_1;
            arr_71 [i_9] [i_9] [i_18] = ((!((max(var_13, var_5)))));
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_39 = (max(var_9, var_11));
            var_40 = (arr_43 [i_9] [1] [i_9] [i_19]);

            /* vectorizable */
            for (int i_20 = 2; i_20 < 18;i_20 += 1)
            {
                arr_78 [7] [i_9] = (arr_50 [i_19] [i_9] [i_20 + 2]);

                for (int i_21 = 1; i_21 < 18;i_21 += 1)
                {
                    var_41 = var_8;
                    arr_81 [i_9] [i_21] = (arr_40 [i_20 + 2] [i_20 + 2] [i_20 + 2]);
                }
                arr_82 [i_9] [i_9] [i_9] [17] = ((-(arr_60 [i_20 - 2] [i_20 - 2])));
            }

            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                var_42 = var_12;
                var_43 = 12;
                arr_86 [i_9] [5] [i_9] = ((!(arr_10 [i_19])));
            }
            for (int i_23 = 4; i_23 < 16;i_23 += 1)
            {
                var_44 = (~var_8);
                var_45 = var_8;
            }
        }
        var_46 = var_9;
        arr_89 [i_9] = -8670376115625536409;
    }
    var_47 = 140;
    var_48 = 87;
    var_49 = ((~((max(9, var_1)))));
    #pragma endscop
}
