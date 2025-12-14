/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (((((var_4 << (((min(var_14, var_7)) - 46)))) > ((~(arr_0 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_21 = (2339442820 != (arr_2 [i_1] [i_1]));
            var_22 += (((arr_1 [4]) ? 13 : -90));
            var_23 = (((49390 ^ -17) ? (arr_5 [i_0]) : (((arr_0 [i_1]) - (arr_3 [i_0] [i_0])))));
            var_24 = (((var_11 ? 3255302915023792599 : (arr_5 [i_0]))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_25 = (((arr_6 [i_3] [i_2]) && var_2));

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                var_26 = -1;
                var_27 = (var_12 == -576932796);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_28 += 29;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_29 = (var_2 != 225);
                            var_30 = arr_7 [i_6];
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
            {
                var_31 = -var_0;
                var_32 = (-((9223372036854775807 ^ (arr_18 [i_8] [i_3] [i_2] [i_2]))));
                var_33 = (var_13 & var_6);
            }
            var_34 = (arr_11 [i_3] [18]);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                var_35 = (var_3 != var_10);
                var_36 = (var_16 ? (arr_14 [i_2] [i_10 + 2]) : (arr_6 [i_10 - 3] [i_10 + 1]));
                var_37 = (((!var_4) - 14224));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_38 &= (arr_23 [i_9]);
                var_39 = ((-((var_15 ? (arr_14 [i_2] [i_9]) : 0))));
                var_40 = ((!(arr_9 [i_2] [2])));
            }
            for (int i_12 = 1; i_12 < 22;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_41 = (min(var_41, -124));
                    var_42 |= (arr_37 [i_2] [i_9] [i_12] [i_12] [i_2]);
                    var_43 = var_14;
                }
                for (int i_14 = 2; i_14 < 23;i_14 += 1)
                {
                    var_44 ^= ((((arr_27 [i_9] [i_12 - 1] [i_12 - 1]) > (arr_13 [i_14]))));
                    var_45 = 1653;
                }
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_46 ^= arr_26 [i_15] [1] [5];
                    var_47 &= var_4;
                    var_48 ^= 1;
                    var_49 = (((-(arr_27 [i_2] [i_9] [i_12 - 1]))));

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        var_50 = var_13;
                        var_51 = (15820907855615609349 != 21578);
                    }
                }
                for (int i_17 = 1; i_17 < 23;i_17 += 1)
                {
                    var_52 = 43960;
                    var_53 = ((!(((arr_24 [i_17 + 1] [i_12] [i_9] [10]) >= var_8))));
                    var_54 |= var_1;
                    var_55 = -14012;
                }
                var_56 = (((arr_33 [i_12 + 2] [i_12 - 1] [i_12 - 1]) == (arr_33 [i_12 + 2] [i_12] [i_12 + 1])));
            }
            var_57 -= ((var_16 ? (arr_38 [i_9] [i_9] [i_9] [i_2] [i_2] [i_9]) : (arr_25 [i_9] [i_2])));
        }
        for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    {

                        for (int i_21 = 1; i_21 < 23;i_21 += 1)
                        {
                            var_58 = (arr_31 [i_2] [i_19] [i_20]);
                            var_59 = (((arr_50 [i_21 - 1] [i_21 + 1] [i_21 + 1] [1] [i_21 + 1] [i_21 - 1]) ? var_0 : (arr_49 [i_21 - 1] [i_21 + 1] [1] [i_21 - 1] [i_21 + 1])));
                            var_60 = ((var_15 == ((var_15 ? 43979 : var_7))));
                        }
                        for (int i_22 = 0; i_22 < 24;i_22 += 1)
                        {
                            var_61 -= (arr_44 [i_2] [1]);
                            var_62 = ((43978 ? 21580 : 21551));
                        }
                        var_63 = (((((arr_10 [i_18]) > (arr_39 [i_20] [i_18] [i_19] [i_20]))) ? var_4 : (var_12 < 43976)));
                        var_64 = (arr_48 [i_2] [i_18]);
                    }
                }
            }
            var_65 |= (((arr_66 [i_2] [i_18]) == var_9));
            var_66 = (max(var_66, (((((var_2 ? var_12 : (arr_29 [i_2] [i_18]))) * (var_14 > 21553))))));
            var_67 = (((arr_35 [i_2] [i_18]) != (arr_12 [i_18] [22] [i_18] [i_18])));
        }
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 24;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                for (int i_25 = 1; i_25 < 22;i_25 += 1)
                {
                    {
                        var_68 = ((21601 || (7228760016038428111 == var_2)));
                        var_69 &= ((!(arr_15 [i_25] [i_24] [i_23] [i_2])));
                        var_70 = 41;
                    }
                }
            }
        }
        var_71 = (((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) << (var_4 + 25966)));
    }
    var_72 &= var_2;
    var_73 = (((max(((var_4 ? var_3 : 43962)), (min(var_3, var_2)))) * (max(var_10, ((var_11 ? var_6 : var_11))))));
    #pragma endscop
}
