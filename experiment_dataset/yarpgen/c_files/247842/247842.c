/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 &= ((((~(arr_0 [1] [i_0]))) & (var_7 | -726141269)));
        var_13 = (((!var_1) & (((!(arr_0 [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = ((!(!var_6)));
                        var_15 = (~((var_7 ? -22954 : var_1)));
                    }
                }
            }
        }
        var_16 = (max(var_16, ((((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_7 [8] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_17 [i_0] [i_4] [i_5] [i_5] = (((arr_10 [i_0] [i_0] [i_4] [i_0]) || ((((arr_12 [i_0] [i_4] [i_5]) + 2121633709)))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_17 = var_2;
                        var_18 = var_4;

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_19 = (min(var_19, (arr_20 [i_0] [2] [i_5] [i_6] [i_7])));
                            var_20 ^= (arr_10 [i_4] [i_5] [i_6] [16]);
                            var_21 = (arr_20 [i_0] [i_0] [i_5] [i_6] [i_7]);
                            var_22 &= (var_5 && 15);
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_23 += (((arr_6 [i_5 + 1] [i_8 + 2]) ? (((var_3 < (arr_4 [i_0] [i_4] [12])))) : (20483 >= var_6)));
                            arr_27 [i_0] [i_4] [i_5] [i_6] [i_8] = 68;
                        }
                        for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_24 = -var_1;
                            var_25 = var_9;
                        }
                        var_26 = (arr_1 [i_5] [i_4]);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_27 = (min(var_27, var_4));
                        var_28 ^= (arr_1 [i_4] [i_10]);
                    }
                    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_29 = (arr_26 [i_0] [i_0] [i_11] [i_11 + 2] [i_12]);
                            var_30 = ((arr_9 [i_0] [i_4] [i_12]) <= (141 * var_0));
                        }
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            arr_42 [i_0] [i_11] [i_5] [i_5] [i_4] [i_0] [i_0] = (~var_6);
                            var_31 = 102;
                            var_32 &= (~var_8);
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_33 = (min(var_33, var_7));
                            var_34 = 0;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_35 = (min(var_35, ((((arr_36 [i_0 + 1] [i_5 + 3] [i_5 - 2] [i_11]) & var_5)))));
                            var_36 = var_1;
                        }
                        var_37 += (arr_24 [i_0] [i_4] [i_4] [i_5] [i_11]);
                        arr_47 [i_0] [i_4] [i_5] [i_11] = -27;
                    }
                    for (int i_16 = 2; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        var_38 = (min(var_38, var_3));
                        var_39 = var_8;
                    }

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_40 = var_7;
                        arr_52 [i_0] [i_5] [i_4] [i_0] = 11627;

                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            arr_56 [i_0] [i_4] [i_4] [i_4] [i_0] [i_17] [i_18] = (((-110 ? (arr_31 [i_17]) : 1461105954763401925)));
                            var_41 = (((arr_10 [i_4] [i_5] [i_17] [i_0]) && (arr_7 [i_0] [i_5 - 1] [i_5 + 3])));
                        }
                    }
                    var_42 = (~-20483);
                    var_43 = (max(var_43, (((~(arr_37 [i_0] [1] [i_5 + 2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_44 = (min(var_44, (((-(arr_30 [i_19] [i_19] [i_19] [i_19] [8]))))));
        var_45 = (max(var_45, (((((!(arr_36 [i_19] [i_19] [i_19] [i_19]))))))));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 16;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 16;i_22 += 1)
                {
                    {
                        arr_68 [i_19] [i_21] [i_22] = ((arr_4 [i_19] [i_20] [i_19]) <= (arr_4 [i_19] [i_21] [i_19]));
                        var_46 = (((-13413 + (arr_0 [i_19] [i_22]))));
                        arr_69 [i_19] [i_19] [i_21] [i_22] [i_22] = -var_0;
                    }
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 22;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 22;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 22;i_26 += 1)
                {
                    {

                        for (int i_27 = 2; i_27 < 20;i_27 += 1) /* same iter space */
                        {
                            var_47 = (max(var_47, -24398));
                            arr_82 [i_27] [i_25] [i_25] [i_24] [i_25] [i_23] = var_6;
                            arr_83 [i_27] [i_26] [i_25] [i_25] [i_24] [i_23] = (max((((!(arr_81 [i_27 + 1] [i_27 + 2] [i_27] [i_27] [i_27] [i_27])))), (arr_78 [i_23] [i_26])));
                        }
                        for (int i_28 = 2; i_28 < 20;i_28 += 1) /* same iter space */
                        {
                            var_48 = (((arr_79 [i_25] [i_28]) ? (((!(((var_0 ? -7011794563463204093 : var_3)))))) : (arr_81 [i_23] [i_24] [i_25] [i_26] [i_26] [i_28])));
                            var_49 = (~((-20464 ? ((var_6 ? 1 : (arr_76 [i_24] [i_25] [i_26]))) : (max(-65, var_7)))));
                        }
                        for (int i_29 = 2; i_29 < 20;i_29 += 1) /* same iter space */
                        {
                            var_50 = (var_3 / var_10);
                            var_51 = arr_75 [i_25] [i_24];
                        }

                        for (int i_30 = 0; i_30 < 22;i_30 += 1) /* same iter space */
                        {
                            var_52 = (min(var_52, (((~(min(((max((-9223372036854775807 - 1), 13426))), 384564000786365610)))))));
                            var_53 = ((!((min(3048156162, (arr_84 [i_23] [i_24] [i_25] [i_25] [i_26] [i_30]))))));
                        }
                        for (int i_31 = 0; i_31 < 22;i_31 += 1) /* same iter space */
                        {
                            var_54 = (arr_71 [i_25]);
                            var_55 = ((-(min(var_0, ((((var_9 + 2147483647) << (2121633709 - 2121633709))))))));
                        }
                        var_56 &= ((!((((var_0 * (arr_86 [i_23] [i_23] [i_23] [i_24] [i_25] [i_26] [i_26])))))));
                    }
                }
            }
        }
        var_57 = 1018166160;
    }
    #pragma endscop
}
