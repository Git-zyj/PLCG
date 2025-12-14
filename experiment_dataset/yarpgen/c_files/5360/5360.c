/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_18 = (min(var_18, (((((min((arr_0 [i_0 + 2]), (!var_13)))) ? (arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 3]) : ((var_10 ? var_9 : (var_17 - var_9))))))));
            var_19 = -var_7;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = (max(var_20, (arr_2 [i_0])));
            arr_6 [i_0] [i_2] = 29557;
            arr_7 [i_0] [i_0] [i_2] = ((~((-(29547 + var_11)))));
            var_21 += var_11;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_22 ^= (arr_2 [i_0 - 1]);
                var_23 += var_0;
                var_24 ^= var_5;
                var_25 += (min((arr_5 [i_3]), (var_14 < 191)));
            }
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_26 = var_12;
            arr_12 [i_0] [i_4] [i_0 - 2] = (((!var_5) ? ((var_1 << (((arr_10 [i_0]) - 33)))) : (((~(((arr_11 [i_4] [i_0 + 3] [i_0 + 1]) ? (arr_1 [i_0]) : var_0)))))));
        }
        arr_13 [i_0 - 2] [i_0] = ((var_13 ? var_9 : (((var_0 == (arr_9 [6] [i_0] [i_0 - 2] [i_0 + 2]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_16 [i_5] = ((!((((-127 - 1) / 35989)))));
        arr_17 [i_5] = (!0);

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            arr_21 [i_6] [i_5] &= var_3;
            var_27 = (arr_14 [i_5]);

            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                arr_25 [i_5] [i_6] [19] = (arr_20 [i_7] [i_6] [i_5]);
                arr_26 [i_7] [i_6] [i_5] = -114;
                arr_27 [18] [i_6] [18] = -var_12;
                arr_28 [i_7] = (arr_14 [i_5]);
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                var_28 = ((29548 << (arr_15 [i_5] [i_8])));
                var_29 = -20128;
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                arr_33 [1] [1] [i_6] [1] |= var_17;
                arr_34 [i_5] = (((!var_12) ? var_9 : 26));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            arr_40 [i_5] [i_11] [i_11] [i_10] [8] = (57205 | ((var_7 ? var_6 : (arr_38 [i_9] [i_9] [i_9]))));
                            arr_41 [i_5] [i_5] [i_5] [i_10] [i_11] = 29550;
                        }
                    }
                }
            }
            var_30 = ((var_9 ? var_10 : var_2));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_31 = (min(var_31, (((~(199 || var_15))))));

                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        var_32 |= (!57215);
                        arr_53 [i_5] [i_5] [15] [i_13] [i_14] [i_5] = ((-(arr_49 [i_5] [i_12] [i_12] [i_12] [i_14] [i_15])));
                        var_33 &= 57181;
                        arr_54 [i_5] [i_13] [i_13] [i_13] [i_5] [0] |= var_16;
                    }

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_34 ^= (!908679528949014736);
                        var_35 = var_7;
                    }
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        arr_59 [i_5] [i_5] [i_17] [i_17] [i_5] [i_13] [i_5] |= 19892;
                        var_36 = var_2;
                    }
                    arr_60 [i_5] [i_5] [i_12] [i_5] [i_14] [i_5] = ((var_1 ? (((8 > (arr_31 [i_14] [i_13] [i_12] [i_5])))) : (arr_42 [i_12])));
                    arr_61 [i_5] [i_12] [i_12] [13] [i_14] = var_4;
                }
                for (int i_18 = 2; i_18 < 21;i_18 += 1)
                {
                    var_37 = ((!(arr_50 [i_12] [i_5] [i_12] [i_5] [i_5])));
                    arr_66 [10] [i_12] [i_12] [0] = ((var_8 >= (arr_46 [i_18 + 1] [i_18 + 1] [i_18] [i_18 - 2] [i_18 + 1] [1])));
                    var_38 = (arr_18 [21] [i_12] [i_13]);
                }
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    var_39 = var_5;
                    var_40 ^= (arr_43 [i_5] [i_19]);
                }

                for (int i_20 = 1; i_20 < 23;i_20 += 1)
                {

                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        arr_73 [i_5] [i_12] [i_5] [i_12] [i_5] [i_5] = (((~var_17) <= ((((arr_63 [i_5] [i_12] [i_13] [i_20] [i_21]) % (arr_19 [i_13]))))));
                        var_41 += (((arr_55 [i_5] [i_5] [i_5] [i_20 + 1] [i_21]) ? var_10 : (arr_15 [i_5] [i_5])));
                    }
                    for (int i_22 = 3; i_22 < 23;i_22 += 1)
                    {
                        var_42 = (((arr_63 [i_12] [i_20 - 1] [i_20] [i_22 + 1] [i_22]) ? (!17538064544760536883) : (arr_63 [11] [i_12] [i_12] [i_12] [i_12])));
                        arr_76 [i_5] [i_12] [i_5] [i_5] [i_5] [i_22 + 1] |= ((~(arr_49 [i_22 - 1] [i_12] [i_5] [i_12] [i_5] [i_5])));
                        var_43 = ((~(var_3 <= 12547953396343501441)));
                    }
                    var_44 = (arr_51 [i_20 + 1] [i_20 + 1] [i_20 - 1] [i_20] [i_20 - 1] [i_5]);
                    var_45 = (!43602);
                    var_46 = (max(var_46, var_13));
                }
                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {
                    var_47 = (~var_15);
                    var_48 = ((var_0 ? 8321 : var_16));
                }

                for (int i_24 = 0; i_24 < 24;i_24 += 1)
                {
                    arr_83 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (var_15 - var_13);
                    var_49 = ((!(arr_68 [i_13] [i_24] [i_13] [i_5] [i_5] [i_12])));
                }
                for (int i_25 = 3; i_25 < 22;i_25 += 1)
                {
                    var_50 &= (((((var_3 ? var_5 : var_15))) ? ((((arr_57 [i_5] [i_5] [i_5] [i_5] [i_5]) * var_9))) : 18446744073709551602));
                    var_51 = (!var_9);
                }
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {
                    var_52 = (var_5 / (arr_79 [i_5]));
                    var_53 ^= (!18446744073709551599);
                    var_54 += (arr_52 [i_5] [i_12] [i_5] [i_13] [i_13] [i_13] [i_26]);
                }
            }
            var_55 = (max(var_55, var_9));
        }
        for (int i_27 = 0; i_27 < 24;i_27 += 1) /* same iter space */
        {
            var_56 = ((29562 ? (arr_69 [i_5] [i_5] [i_5] [i_27] [i_27] [i_27]) : (arr_69 [i_5] [i_5] [i_5] [i_27] [i_27] [i_27])));
            arr_92 [i_5] |= (arr_46 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        }
    }
    for (int i_28 = 1; i_28 < 11;i_28 += 1)
    {
        var_57 = (arr_22 [i_28 + 2] [i_28 - 1] [i_28 - 1]);
        arr_96 [i_28 - 1] [4] = 57215;
    }
    var_58 ^= var_13;
    var_59 = (((var_7 ? var_6 : var_8)));
    var_60 = var_10;
    #pragma endscop
}
