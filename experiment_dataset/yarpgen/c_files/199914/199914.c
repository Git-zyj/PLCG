/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 6682144928304577183;
    var_19 = (4048 && -6682144928304577183);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_0, var_15));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 -= 9767272756698464268;

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_22 = var_6;
                            arr_15 [20] [i_1] [20] |= var_5;
                            arr_16 [i_4] [i_3] [1] [1] [i_3] [i_0] = (!6682144928304577183);
                            var_23 += -var_6;
                        }
                    }
                }
                arr_17 [10] [i_1] [i_0] = (!var_15);
            }
            for (int i_5 = 3; i_5 < 22;i_5 += 1)
            {
                var_24 = (!var_0);
                arr_20 [i_0] [i_0] [i_0] [i_0] = ((-((var_16 >> (var_12 - 53)))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_25 = (~var_12);
                var_26 -= var_1;
            }
            var_27 = var_5;
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            var_28 = -var_11;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        arr_32 [i_7] [7] [i_8] [i_9] = ((~(~var_17)));
                        var_29 -= ((-((var_1 ^ (var_0 | var_9)))));
                        arr_33 [14] [i_9] [i_7] [i_7] [10] [12] = var_10;
                        var_30 = (~var_13);
                    }
                }
            }
            var_31 = (max((var_8 / var_1), (var_17 % var_13)));
        }
        arr_34 [16] [16] = (114 || 1);
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_39 [i_10] [i_11] [i_10] = -var_12;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        arr_46 [2] [i_11] = 1;
                        arr_47 [i_10] [3] [7] [i_13] |= (!var_2);
                    }
                }
            }
        }
        var_32 = (max(var_32, -var_9));

        for (int i_14 = 4; i_14 < 20;i_14 += 1)
        {
            arr_50 [i_14 - 1] [i_10] [i_10 - 1] = (~var_5);
            arr_51 [i_10] = -var_7;
            var_33 = (!var_14);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            var_34 = (~7630544618651285990);
                            arr_62 [i_10 - 1] [i_10] [i_10 - 2] [i_10 - 1] [7] = (~var_3);
                            var_35 = var_0;
                            var_36 -= (((var_7 + 9223372036854775807) << (var_5 - 60151)));
                            arr_63 [18] [18] [i_15] [i_10] [i_17] [i_17] = -var_4;
                        }
                    }
                }
            }
            var_37 = var_1;
        }
    }
    /* vectorizable */
    for (int i_18 = 3; i_18 < 10;i_18 += 1)
    {

        for (int i_19 = 4; i_19 < 13;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 14;i_22 += 1)
                    {
                        {
                            arr_79 [i_18] [3] [3] [3] [i_18] = var_0;
                            arr_80 [i_20] [i_18] [i_20] = (!0);
                        }
                    }
                }
            }
            arr_81 [i_18] = -var_16;
            var_38 ^= 1721402666;
        }
        for (int i_23 = 2; i_23 < 12;i_23 += 1) /* same iter space */
        {
            arr_86 [i_18] = (!var_10);
            arr_87 [i_18] = -var_17;
        }
        for (int i_24 = 2; i_24 < 12;i_24 += 1) /* same iter space */
        {
            var_39 = var_10;
            arr_91 [i_18] [i_24] = var_6;
            var_40 = (var_11 | var_15);
        }
        arr_92 [i_18] = var_3;
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 14;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    {
                        var_41 = -var_7;
                        var_42 = var_14;
                        arr_102 [1] [i_25] [i_18] = (~var_13);

                        for (int i_28 = 0; i_28 < 14;i_28 += 1)
                        {
                            arr_105 [2] [2] &= var_2;
                            arr_106 [i_18] [6] [1] [i_26] [13] [i_27] [i_18] = (!var_8);
                            arr_107 [i_18] [12] [i_26] [9] [i_18] = (!var_10);
                        }
                    }
                }
            }
        }
        arr_108 [i_18] = (var_13 != var_11);
        var_43 = -var_12;
    }
    #pragma endscop
}
