/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (!7265);
            arr_6 [i_1] [i_1] [i_1] = var_12;
            arr_7 [i_1] [i_1] [i_0] = (((arr_3 [i_1] [i_1] [i_1]) && ((!(arr_3 [i_0] [i_0] [i_0])))));
            var_19 = (max(var_19, (!var_1)));
            arr_8 [i_0] [i_1] [i_0] = ((((12 ? -18269 : var_15))) ? ((-(arr_4 [i_0]))) : (arr_4 [i_0]));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] = (((arr_1 [i_0] [i_2 + 1]) - (arr_1 [i_0] [i_2 + 2])));
            var_20 = (((arr_11 [i_2]) % (arr_11 [2])));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] = (((arr_9 [i_0] [i_0] [i_3]) % (arr_1 [i_0] [i_3])));
            var_21 = ((!(arr_14 [i_0] [i_3])));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_19 [i_0] [i_0] [i_0] = var_16;

            for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_22 += var_6;
                    arr_26 [i_6] [i_6] [i_6] [i_4] [i_4] = ((!(arr_1 [i_6 - 1] [i_5 - 1])));
                    var_23 = (arr_0 [i_6]);
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_31 [i_0] [i_0] [i_4] [i_5] [i_7] = (arr_15 [i_0]);
                    var_24 &= (arr_13 [1] [i_4]);

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_35 [i_0] [i_4] [i_4] [i_5 - 1] [i_7] [i_8] [i_4] = ((30050 % ((~(arr_33 [8] [i_8])))));
                        arr_36 [i_0] [i_0] [i_8] [i_0] [i_8] = ((var_0 + (arr_22 [i_0] [i_4] [i_4])));
                    }
                }
                for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_25 |= (((((14383185453969233193 ? (arr_39 [i_0] [i_4] [1] [i_4]) : 14383185453969233193))) ? (((!(arr_28 [i_0] [i_0] [i_0] [i_0])))) : 701701723));
                    var_26 = (max(var_26, -7266));
                    var_27 = (arr_28 [0] [i_4] [i_5] [8]);
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    arr_43 [i_10] = (((((var_11 << (((arr_29 [i_0] [i_10]) - 77))))) ? ((-(arr_10 [i_10]))) : ((((arr_18 [i_0]) - (arr_4 [i_0]))))));

                    for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_48 [i_0] [i_4] [i_10] [i_5] [i_10] [i_11] [i_11] = ((~(!var_0)));
                        var_28 = (((arr_45 [i_11] [i_5 + 1] [i_10] [i_4] [i_0]) | (arr_45 [i_11] [i_5 + 1] [i_10] [i_4] [i_0])));
                        arr_49 [i_0] [i_4] [i_4] [i_10] [i_4] [i_10 - 1] [11] = 35491;
                        var_29 = ((~9223372036854775807) ? (arr_3 [i_0] [i_4] [i_5]) : (arr_42 [i_5 - 1] [i_5 + 1] [i_10 - 1] [i_10]));
                    }
                    for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_54 [i_4] [i_4] [i_10] [i_4] [i_4] [i_4] = (((!6) | (arr_30 [i_4] [i_10] [i_12])));
                        arr_55 [i_4] [i_4] [i_4] [i_10] [i_12] = (((arr_3 [i_0] [i_0] [i_0]) ? ((((arr_20 [i_12]) && (arr_45 [i_0] [i_4] [i_10] [i_10] [11])))) : (arr_23 [i_10] [i_10 - 2] [i_10 - 2] [i_5 + 1] [i_10])));
                    }

                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        arr_59 [11] [7] [i_5] [4] [i_10] = (arr_25 [i_4] [i_4] [i_4] [2]);
                        var_30 = ((2147483647 ? (arr_44 [i_0] [i_4] [i_5] [i_10] [i_13]) : ((-(arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_60 [i_10] [i_5] [i_4] [i_10] = ((((((3 ? -94 : 80)) + 2147483647)) << (7 - 7)));
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        arr_63 [i_0] [i_10] = (((arr_30 [i_10 + 1] [i_5] [i_5 - 1]) ? (arr_30 [i_10 + 1] [i_10] [i_5 + 3]) : (arr_30 [i_10 + 1] [i_5] [i_5 + 2])));
                        arr_64 [i_0] [i_0] [i_10] [8] [i_10] = (((!var_1) != var_8));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, (arr_20 [i_0])));
                        arr_69 [i_10] [i_4] [i_5] [i_10] [i_15] = var_12;
                        arr_70 [i_0] [i_10] [i_10] [i_0] = var_15;
                        arr_71 [i_10] [i_10] = var_9;
                    }
                }
                var_32 = ((~(arr_41 [i_5 - 1] [i_5 + 1] [i_5 + 3])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            var_33 = ((+((((arr_68 [i_17] [i_16] [i_5] [i_0] [i_0]) < (arr_57 [i_17] [i_16] [i_5] [i_16] [i_0]))))));
                            arr_77 [i_16] [i_16] = (((arr_56 [i_16] [i_4] [i_4]) ? (arr_72 [i_5 + 1] [i_5] [i_5 - 1] [i_5] [i_5 + 2]) : (arr_39 [i_5 - 1] [10] [i_16] [i_5 - 1])));
                            var_34 *= ((-7266 ? 35486 : 35485));
                        }
                    }
                }
            }
            for (int i_18 = 1; i_18 < 9;i_18 += 1) /* same iter space */
            {
                arr_82 [i_0] [i_4] [i_4] [i_18] = (((0 < 1) - -7265));
                arr_83 [5] [i_18] = arr_15 [1];
            }
            arr_84 [i_0] = 1953142242;
            arr_85 [i_0] [i_0] = ((!(arr_28 [2] [i_4] [2] [2])));
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            arr_88 [i_0] [i_19] [i_0] = var_1;
            arr_89 [i_19] [4] = (arr_25 [i_19] [i_0] [7] [i_0]);
            arr_90 [i_0] [i_19] = var_7;
            arr_91 [i_19] = (arr_30 [i_0] [8] [i_0]);
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
    {
        var_35 = (((((-104 / (arr_37 [i_20] [i_20] [i_20])))) ? 28 : (((var_2 == (arr_34 [i_20] [i_20] [i_20] [i_20] [i_20]))))));
        arr_94 [i_20] = (((arr_0 [i_20]) | (arr_0 [i_20])));
        arr_95 [i_20] = (arr_50 [i_20]);
        var_36 *= ((((((arr_79 [4] [4] [i_20]) ? 2633099646 : (arr_9 [i_20] [i_20] [i_20])))) ? var_3 : (((var_0 < (arr_21 [0] [i_20] [i_20]))))));
    }
    var_37 = (max(var_37, (~var_1)));
    #pragma endscop
}
