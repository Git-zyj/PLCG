/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -5305770376370050808;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 *= 9746;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = 70;
                                var_20 += ((~(((arr_13 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]) ? -5305770376370050825 : ((var_4 ? var_3 : var_14))))));
                                var_21 = ((((((arr_2 [i_0]) ? (arr_9 [i_3] [i_2 - 1] [i_1] [i_0]) : ((var_8 ? 18391296088348916722 : (arr_8 [i_0] [i_0])))))) ? ((-(arr_6 [i_1] [i_2]))) : 115));
                                var_22 = (min(var_22, 92));
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = var_5;
        var_23 = (min(var_23, (((((min((min(var_0, var_9)), 55447985360634901))) ? ((-((var_0 ? var_0 : var_4)))) : (((~(arr_10 [0])))))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_24 = (~var_14);

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_29 [i_5] [i_8] [i_7] [i_6] [i_5] = 55447985360634893;
                            var_25 = (min(var_25, (arr_23 [i_6] [i_6] [i_9])));
                        }
                    }
                }
                arr_30 [i_5] [i_6] [i_6] [i_5] = (((arr_21 [i_6] [i_7 + 1] [i_7 + 1]) ? (arr_21 [i_6] [i_7 + 1] [12]) : (arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                var_26 -= (~-92);
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    var_27 = (min(var_27, 18391296088348916723));
                    var_28 = ((var_7 ? var_15 : (!18391296088348916730)));
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_29 = (((((-30615 + 2147483647) << (5305770376370050802 - 5305770376370050802))) * (((!(arr_21 [i_6] [i_10] [i_10]))))));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_30 -= ((-5305770376370050803 ? (arr_33 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 2]) : 1));
                        var_31 = (!-30600);
                        var_32 *= (((!var_3) * (~var_6)));
                        arr_39 [i_13] [i_5] [i_5] = (var_12 * 4400975971886053767);
                    }
                    for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
                    {
                        var_33 = (max(var_33, 15158643763180035348));
                        arr_42 [1] [i_6] [i_10] [i_12 + 1] [i_6] &= ((-30615 ? 58172 : var_4));
                    }
                    for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
                    {
                        var_34 ^= ((1141020663 ? var_3 : (arr_28 [i_12 + 2] [6] [6] [i_15 + 1])));
                        var_35 = (max(var_35, (((((-26382 ? 87 : 58169)) / ((var_3 ? 17353 : var_15)))))));
                        var_36 = (max(var_36, var_6));
                        var_37 *= 7363;
                        arr_46 [i_5] [i_5] [4] [4] [i_5] [4] [i_5] = ((-(arr_16 [i_5])));
                    }
                }
                for (int i_16 = 1; i_16 < 20;i_16 += 1) /* same iter space */
                {
                    var_38 = (178 / var_8);
                    var_39 = (min(var_39, (arr_47 [16] [i_6] [i_6] [16])));
                }
                for (int i_17 = 3; i_17 < 20;i_17 += 1)
                {
                    var_40 = (--58163);
                    var_41 = ((-(~36831)));
                    var_42 = ((~(arr_49 [i_17] [i_5])));
                    var_43 = 77;
                }
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 20;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 0;i_19 += 1)
                    {
                        {
                            var_44 *= ((arr_50 [i_5] [i_6] [i_10] [i_18 + 1] [i_19 + 1]) / (arr_18 [2]));
                            arr_60 [i_5] [i_5] [i_18] [i_5] [20] = (~58161);
                            arr_61 [i_19] [i_19] [i_5] [i_5] [i_6] [i_5] = 53;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 1; i_21 < 21;i_21 += 1)
                    {
                        {
                            var_45 = (arr_18 [i_5]);
                            arr_67 [i_5] [i_6] = -95;
                            arr_68 [i_5] [20] [i_5] [i_5] [i_5] |= var_1;
                        }
                    }
                }
            }
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_46 ^= ((((7373 ? var_7 : var_14)) << ((((~(arr_44 [i_5] [i_23] [i_22] [i_5] [i_24]))) + 116))));
                            var_47 = var_8;
                            var_48 = (((arr_74 [i_24 - 1] [i_24 - 1] [14] [i_24 - 1] [i_24 - 1]) ? var_0 : (arr_62 [i_24 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24 - 1])));
                            var_49 = var_7;
                            var_50 = 5837;
                        }
                    }
                }
                var_51 = ((~(arr_35 [i_5] [i_6] [i_5])));
            }
        }
        for (int i_25 = 2; i_25 < 21;i_25 += 1)
        {
            var_52 -= 7363;
            var_53 = (((min(var_3, (arr_24 [i_5] [i_5] [i_25 + 1] [i_25 - 2]))) << ((((max((arr_24 [i_25 - 1] [i_5] [i_5] [i_5]), 230))) - 218))));
        }
        for (int i_26 = 3; i_26 < 20;i_26 += 1)
        {

            /* vectorizable */
            for (int i_27 = 1; i_27 < 20;i_27 += 1)
            {

                for (int i_28 = 1; i_28 < 20;i_28 += 1) /* same iter space */
                {
                    var_54 *= (((arr_51 [i_26]) ? var_1 : -5837));
                    var_55 = ((var_7 ? var_6 : (arr_28 [i_27 + 2] [i_5] [i_27 + 2] [i_26 - 1])));
                    arr_91 [i_5] = ((var_10 ? (((963267681 ? var_13 : var_11))) : (arr_28 [i_27 + 2] [i_5] [12] [i_27 + 2])));
                }
                for (int i_29 = 1; i_29 < 20;i_29 += 1) /* same iter space */
                {
                    var_56 = (arr_81 [2] [i_5]);
                    var_57 = (!119);
                }
                arr_94 [i_5] [i_5] = (!var_3);
            }
            arr_95 [i_5] [i_5] [i_26] = ((-73 ? var_8 : var_11));
            var_58 ^= -var_7;
        }
        for (int i_30 = 0; i_30 < 1;i_30 += 1)
        {
            var_59 = (~5305770376370050805);
            var_60 = (min(-var_5, ((-(((arr_58 [i_5] [1] [i_5] [15] [i_30]) ? 7358 : (arr_17 [i_5])))))));
            var_61 = (((7363 ? -5709541857624696885 : -8567236101374268019)));
            arr_99 [i_5] = var_5;
        }
        arr_100 [i_5] = ((-((min(74, 169)))));
        var_62 = var_14;
    }
    #pragma endscop
}
