/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 &= 99;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_12;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = var_9;
            arr_8 [19] [i_1] = (min(var_1, (((!(((-(arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1])))))))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            var_17 ^= (~var_12);
            var_18 ^= ((((!(arr_4 [i_2] [0])))) << (536870784 - 536870758));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_19 += ((!((max((arr_10 [2] [i_3] [8]), var_13)))));
            arr_14 [i_0] = (max((arr_2 [i_3]), var_0));
            var_20 = (!-796116290);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_21 &= var_13;
                arr_19 [i_4] [i_0] = (arr_4 [i_0] [i_4]);
                arr_20 [i_0] [i_4] [i_5] = max((((!(arr_4 [i_5] [i_0])))), var_3);
                var_22 = -536870785;
                var_23 = -536870784;
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_23 [i_4] = var_7;
                arr_24 [i_6] [i_4] [i_4] [8] = ((!(~var_8)));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_24 *= ((-((~(((arr_17 [i_0] [i_0] [i_0 + 1]) | var_6))))));
                            arr_31 [3] [i_4] [11] [3] [i_4] = min((arr_13 [i_4] [i_4]), -var_8);
                            var_25 -= ((!(((-(~var_11))))));
                            var_26 = (min(var_26, (((!((max(var_3, (!96)))))))));
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 24;i_9 += 1)
            {
                var_27 |= (~120);
                arr_34 [i_0 + 1] [8] [12] &= ((+(max((arr_28 [i_0] [i_0 + 1] [i_0] [i_0] [6]), (arr_28 [i_0] [i_0] [i_4] [i_9] [i_9 + 1])))));
                var_28 = (min(var_28, ((max((((min(1367508801, (arr_7 [i_0 + 1] [i_0] [i_0]))) / 15)), ((-(((!(arr_33 [i_0 - 1] [i_4] [i_9 - 2] [i_9])))))))))));

                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        var_29 = 536870788;
                        var_30 -= ((!(((-(max(9, var_3)))))));
                        arr_40 [i_0] [i_4] [i_9] [i_10 - 1] [i_4] = (!1);
                    }
                    var_31 = -1278444795;
                    arr_41 [i_4] [i_4] [i_4] = (((!var_10) + 270625905));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_4] [i_4] [i_9] [i_4] = (arr_10 [i_0] [i_0] [i_4]);
                    var_32 = var_5;
                    arr_46 [i_0] [i_0] [i_9] [i_9 - 1] [i_4] [i_12] = ((-(~var_10)));
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                {
                    var_33 |= min((((var_1 + 2147483647) >> (var_1 + 141))), var_7);
                    arr_51 [i_0 + 1] [i_4] [i_0] [i_0] = (~((~((min((arr_32 [i_0] [i_0] [i_9] [i_0]), var_3))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = (!0);

                    for (int i_15 = 2; i_15 < 24;i_15 += 1)
                    {
                        arr_59 [10] [i_4] [i_9] [i_14] [i_4] = arr_30 [i_0] [i_4] [i_0] [i_14] [i_14] [i_9] [i_9];
                        var_34 = var_5;
                        arr_60 [17] [i_4] [5] [i_15] = (~var_2);
                        var_35 = (((arr_50 [i_0] [i_4]) > var_11));
                        var_36 = ((-((((arr_47 [i_0] [22] [i_9 - 1] [i_14]) != (arr_18 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
                    }
                }
                var_37 = (max(var_37, var_13));
            }
            arr_61 [i_4] = (!var_0);
            arr_62 [20] &= -1367508794;
            arr_63 [i_4] [i_4] = min(1920, 904175289);
        }

        /* vectorizable */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_38 = ((-(arr_4 [i_0 - 1] [i_0])));
            var_39 = (max(var_39, (((~(arr_37 [i_0] [i_0] [i_0 + 1] [i_16]))))));
        }
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            var_40 = (~(min(3, (arr_35 [i_0 + 1] [i_17]))));
            arr_72 [i_0] = arr_22 [i_17] [i_17] [i_17];
            var_41 += (9 != var_12);
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 23;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    {
                        arr_81 [i_0 + 1] [i_18] [i_0] [i_0 - 1] = var_5;
                        var_42 = (~var_12);
                    }
                }
            }

            for (int i_21 = 2; i_21 < 24;i_21 += 1)
            {
                var_43 = (max(var_43, (((9 ^ (~var_4))))));
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 2; i_23 < 22;i_23 += 1)
                    {
                        {
                            arr_89 [i_18] = -20;
                            var_44 = (((arr_48 [i_0] [i_18] [i_0]) || (-2147483647 - 1)));
                            arr_90 [i_18] [24] [24] [i_22] [i_23] = ((((arr_42 [i_0 - 1]) | 5)) - var_10);
                            var_45 ^= 126;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 2; i_24 < 24;i_24 += 1)
                {
                    for (int i_25 = 2; i_25 < 23;i_25 += 1)
                    {
                        {
                            var_46 = ((var_6 >= (((!(arr_43 [i_0] [i_18] [i_21 - 1] [i_24 - 2] [i_18] [i_25]))))));
                            var_47 = var_13;
                            arr_97 [i_0] [i_0] [i_21] [i_18] = (!var_2);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 3; i_26 < 23;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 25;i_27 += 1)
                    {
                        {
                            var_48 = arr_37 [i_18 - 3] [3] [3] [i_0];
                            arr_102 [i_27] [i_18] [i_27] [i_18 - 1] [i_18] &= 1524613984;
                            var_49 = (min(var_49, (~var_6)));
                            var_50 |= (arr_48 [i_27] [i_21] [i_18 - 1]);
                        }
                    }
                }
                var_51 *= ((!(arr_26 [i_21 - 1] [i_21 - 1] [i_21] [12])));
            }
            for (int i_28 = 0; i_28 < 25;i_28 += 1)
            {
                arr_107 [i_28] [i_18] [i_0] = (arr_106 [i_18 + 1] [12] [24]);
                var_52 = ((arr_5 [i_18] [i_18 + 2] [i_18]) * var_5);
                arr_108 [i_18] = ((~(arr_36 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])));
            }
        }
        var_53 &= max((max((arr_15 [i_0 + 1] [i_0 + 1]), var_0)), -var_12);
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 25;i_29 += 1)
        {
            for (int i_30 = 2; i_30 < 23;i_30 += 1)
            {
                for (int i_31 = 2; i_31 < 24;i_31 += 1)
                {
                    {
                        arr_117 [i_0 - 1] [i_0 - 1] [i_0 - 1] [3] = ((((~(arr_105 [i_0 + 1] [22] [i_29]))) & (~var_6)));
                        arr_118 [21] [8] [21] = (~var_0);
                    }
                }
            }
        }
    }
    #pragma endscop
}
