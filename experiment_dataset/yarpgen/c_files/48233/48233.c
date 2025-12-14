/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-61 * (63 <= 124)));
        arr_4 [i_0] = var_4;
        var_13 = ((var_2 ? (((arr_1 [i_0]) & (!-28))) : ((min((arr_0 [i_0]), var_0)))));
        var_14 = min((-127 - 1), 102);
        arr_5 [i_0] [i_0] = -65;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = -14;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_1] = (-127 - 1);
                        var_15 = (((~-36) & (var_8 >= 48)));
                        arr_20 [i_1] [i_1] [i_3] [i_4] = (((arr_13 [i_2 - 1] [i_3] [i_3]) > (arr_18 [i_1] [i_4] [i_1] [i_4] [i_4] [i_4])));
                        arr_21 [i_1] [i_1] [i_1] [i_1 + 1] = ((~(arr_10 [i_1 + 2] [i_2 - 3] [i_2 - 1])));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_24 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] = (((((!(arr_2 [i_1])))) >= -108));
                            arr_25 [i_1] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = (((arr_0 [i_1]) & (((arr_2 [i_1]) ? var_0 : 119))));
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_29 [i_1] [i_6] [i_3] [i_4] [i_1] = ((116 << (41 - 37)));
                            arr_30 [i_6] [i_4] [i_1] [i_1] [i_1] = ((92 & ((~(arr_15 [i_2 - 1] [i_4] [i_6])))));
                            arr_31 [19] [i_1] [i_2] [i_3] [1] [i_4] [i_6] = (-35 * 10);
                            arr_32 [i_6 - 1] [i_4] [i_1] [i_1] [i_2] [i_1] = arr_11 [i_1];
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_35 [i_1 - 1] [i_2 - 1] [i_1] [i_4] [i_7] = (-11 >= -3);
                            arr_36 [i_1] [i_1] = -107;
                        }
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_40 [i_1] [i_2] = 117;
                        arr_41 [3] [i_1] [i_1] [i_1] = ((-81 == (arr_38 [i_1] [i_3] [i_1])));
                        arr_42 [i_1] [i_1] = ((~(arr_18 [i_1] [i_2] [i_2] [i_2 + 1] [i_2 - 3] [i_2 - 2])));
                        var_16 = (~var_0);
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_45 [i_1] [i_1] [i_9] = (((~64) ? (-127 - 1) : (((arr_11 [i_1]) ? -87 : 4))));
                        var_17 = ((~((-112 ? 28 : -104))));
                    }

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_49 [i_1] = 35;
                        var_18 = (((arr_39 [i_1 - 3] [i_2] [i_3] [i_10]) % var_3));
                        var_19 = (((arr_37 [i_1 + 3] [i_1 + 4] [i_1 - 1]) ? (arr_33 [i_1 + 3]) : -1));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_1] = -3;
                            var_20 = var_3;
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                        {
                            var_21 = (((-107 + 2147483647) << (121 - 121)));
                            var_22 = arr_16 [i_1] [i_2] [i_1];
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_62 [i_1] [i_14] = (((arr_53 [i_1 - 2] [i_2 + 1] [6] [i_2 - 3]) * (arr_50 [i_1] [i_2] [i_3])));
                            var_23 = arr_28 [i_1] [i_1 - 1] [i_1] [i_3] [i_11] [i_1];
                        }

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            arr_67 [i_1] [i_2] [i_3] [i_3] [i_15] = var_8;
                            arr_68 [i_1] [i_2] = ((var_5 % ((127 ? var_2 : -40))));
                            arr_69 [i_1] [i_1] = (((~39) ? (!var_7) : -115));
                        }
                        for (int i_16 = 0; i_16 < 25;i_16 += 1)
                        {
                            var_24 = var_3;
                            arr_72 [i_1] [i_2] [i_1] [i_11] [i_16] = var_11;
                            arr_73 [i_1] [i_2 + 2] [i_1] = -1;
                            arr_74 [i_1] [i_16] [i_3] [i_11] [i_16] = arr_46 [i_1] [i_2] [i_3] [i_2];
                        }
                        for (int i_17 = 4; i_17 < 23;i_17 += 1)
                        {
                            var_25 = (((((var_0 ? (arr_70 [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1]) : -1))) ? ((-36 ? (arr_27 [i_3]) : (arr_47 [i_1] [i_1] [i_3] [i_3] [8] [i_3]))) : var_5));
                            arr_77 [i_1] [i_1] [i_2 + 1] [i_1] [i_11] [i_17 - 2] = (((arr_76 [i_1 + 4] [i_2 - 2] [i_17 - 1]) ? (arr_76 [i_1 - 3] [i_2 - 3] [i_17 - 3]) : (arr_76 [i_1 - 3] [i_2 + 2] [i_17 - 1])));
                            arr_78 [i_1] [i_1 + 1] [i_2] [i_3] [i_1] [i_17 + 1] [i_17] = ((103 >= (!5)));
                        }
                        for (int i_18 = 0; i_18 < 25;i_18 += 1)
                        {
                            arr_81 [i_1] = (arr_12 [i_1] [i_1] [i_1]);
                            var_26 = -116;
                            arr_82 [i_1] [i_2] [i_1] [i_11] [i_1] = 106;
                        }
                        var_27 = (var_3 <= 36);
                        arr_83 [i_1] [i_3] [i_1] = (((((33 ? (arr_65 [i_1] [i_11] [i_3] [i_3] [i_2] [i_1] [i_1]) : 2))) ? var_4 : (17 + var_7)));
                    }
                }
            }
        }
        arr_84 [i_1] [i_1] = (((((10 ? (arr_38 [i_1] [i_1 - 2] [i_1]) : (arr_61 [i_1] [i_1 + 4] [i_1] [i_1] [i_1 - 3])))) ? (arr_44 [i_1 - 1] [i_1] [i_1]) : (!var_9)));
    }
    #pragma endscop
}
