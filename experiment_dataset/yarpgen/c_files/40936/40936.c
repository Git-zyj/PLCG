/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((!(((var_1 - (arr_4 [i_3] [i_2 + 2] [14]))))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_15 -= max((((((-126 ? -126 : var_5))) ? (((64051 == (arr_7 [i_0] [i_2] [i_2 + 1] [6])))) : var_9)), (((67108864 || var_8) * var_3)));
                            var_16 = ((((247 ? var_1 : var_13)) <= var_1));
                            var_17 = (max(var_17, -24868));
                            arr_12 [i_0] [i_1] [i_2] [i_0] [i_0] = ((!(arr_10 [i_0] [i_0] [i_0 + 2] [i_2] [i_2 + 1])));
                        }
                    }
                }
            }
        }
        var_18 = var_11;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_19 = ((var_1 % (arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_5])));

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_20 = var_3;
                arr_18 [i_0] [i_5] [i_5] [i_6] = (((((7 > (arr_17 [3] [i_5] [i_6] [i_6])))) ^ 16711680));
                arr_19 [i_0] [i_0] = var_2;
            }
            arr_20 [i_0] [i_0] = (((var_8 ? var_1 : (arr_2 [i_0]))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_24 [i_0 + 4] [i_0 + 2] [i_0] = ((((var_2 ? 973 : var_10))));
            arr_25 [i_0] = 7415;
            var_21 = (var_6 || var_1);
            arr_26 [i_0] [i_0] [i_0] = ((-16711680 * ((min(var_12, var_2)))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_29 [i_0] = (((var_7 <= -64) < 2040));
            var_22 = (!var_8);
        }
        arr_30 [i_0] = ((((9284 ? -126 : var_3))));

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_23 += var_9;
            arr_34 [i_0] = (arr_2 [i_0 + 3]);
        }
    }
    for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
    {
        var_24 = ((max((arr_31 [i_10 + 4] [i_10 + 4] [i_10]), (arr_14 [i_10] [12] [i_10]))));
        var_25 = (((arr_13 [i_10 - 2] [i_10] [i_10 - 2]) << ((((23 ? -2040 : 85)) + 2052))));
    }
    for (int i_11 = 3; i_11 < 14;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_26 = (((-121 > 15872) - (arr_7 [i_11 - 1] [i_11 + 3] [i_11] [10])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_47 [i_14] [i_13] [i_13] [i_11] = ((((!((((arr_8 [i_11] [i_11] [i_14]) ? var_3 : 169))))) ? (arr_45 [i_12] [i_12]) : ((max(var_9, (arr_32 [i_11 + 2]))))));
                        var_27 = (min(var_27, ((min(-91, 71)))));
                        arr_48 [i_14] [0] [0] [8] |= (max(var_2, (((var_5 == (var_0 > var_5))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                arr_56 [i_16] [i_15] [i_16] = var_12;
                arr_57 [i_16] [i_16] = (((arr_27 [i_16]) == var_0));
                var_28 = (max(var_28, (((91 ? (arr_36 [i_11 + 4]) : (arr_52 [i_16] [i_11 - 1] [i_11]))))));
                var_29 = ((var_4 == (arr_36 [i_11 - 2])));
            }
            arr_58 [i_15] [14] = (((((arr_6 [2] [i_15] [i_15]) ? var_12 : var_0)) < -86));
        }
        var_30 += (arr_5 [i_11 + 3] [i_11 - 3]);
        arr_59 [i_11] = (((((((1 ? 0 : -21141))))) > (min((arr_46 [0] [i_11] [i_11 - 3] [i_11] [i_11] [i_11 - 3]), ((max(2061391777, 95)))))));
    }
    var_31 = ((max(var_7, (var_5 - 11))));

    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        var_32 = ((((var_1 < (arr_61 [i_17])))));
        var_33 = (max(var_33, 0));
        arr_62 [i_17] = 1870766334167984490;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        var_34 = var_5;
        var_35 = (max(var_35, ((((arr_61 [i_18]) ? var_10 : (arr_33 [i_18]))))));
        arr_66 [i_18] = ((var_13 * (arr_0 [4])));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        var_36 &= (0 - 124);
        var_37 = (max(var_37, 1));
        var_38 += (((max((max((arr_67 [i_19]), 0)), 55476)) / (((-26702 + (123 - 121))))));
    }
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_39 += (((((min(1638806914, var_8)) <= var_6)) ? (min((~var_1), var_9)) : (arr_44 [i_20] [i_20] [i_20] [i_20] [i_20])));
        arr_71 [i_20] [i_20] = (((((((min(188, (arr_28 [i_20])))) ? (!123) : var_1))) ? (((((arr_63 [i_20] [i_20]) <= (!var_8))))) : ((-(arr_41 [i_20])))));
        arr_72 [i_20] = var_11;

        for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
        {
            arr_76 [i_20] [i_21] [1] = (0 << 1);
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {
                    {
                        var_40 = (((((var_5 ? (var_7 && var_12) : (((arr_54 [i_20] [i_20] [i_20] [i_20]) * 49207))))) ? (arr_3 [i_21]) : (max((arr_50 [i_20]), var_0))));
                        arr_81 [i_20] [i_21] [i_21] [i_21] [i_21] [i_23] = ((507904 ? (max((((arr_70 [i_21]) / var_0)), (arr_52 [i_22] [i_21] [i_20]))) : ((((arr_79 [i_20] [10] [i_21] [i_22] [i_22] [i_21]) ? (arr_74 [i_23] [i_22] [i_20]) : 4201275537)))));
                    }
                }
            }
        }
        for (int i_24 = 0; i_24 < 11;i_24 += 1) /* same iter space */
        {
            var_41 = ((((max(133, 0))) ? (min(var_10, (arr_32 [i_20]))) : ((-(arr_32 [i_24])))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 11;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 11;i_26 += 1)
                {
                    {
                        arr_89 [i_24] [i_20] [i_25] = ((min((min((arr_23 [i_24] [i_25] [i_26]), 0)), (arr_17 [i_20] [i_24] [i_25] [i_26]))));
                        var_42 = (max(var_42, ((min(4187507378, (max(1, (min(-64, 959215604)))))))));

                        for (int i_27 = 0; i_27 < 11;i_27 += 1)
                        {
                            var_43 = var_9;
                            var_44 = ((((max(var_12, var_4))) ? var_11 : (((1 ? -95 : 57)))));
                        }
                        for (int i_28 = 0; i_28 < 11;i_28 += 1)
                        {
                            var_45 = ((var_11 ? var_7 : (((((var_11 ? 218 : 0))) ? 26879 : var_8))));
                            var_46 = (min(var_46, (((0 >= (max((arr_70 [i_20]), (((var_13 ? 4294967295 : (arr_5 [i_28] [i_25])))))))))));
                            arr_94 [i_20] [i_20] [i_20] [i_20] [i_20] [i_24] [i_20] = (((((arr_33 [i_28]) > var_2)) ? ((max(var_1, (min(20035, var_7))))) : (max((var_10 > 1), var_8))));
                        }
                        /* vectorizable */
                        for (int i_29 = 0; i_29 < 11;i_29 += 1)
                        {
                            var_47 ^= (var_10 <= -46);
                            var_48 = (max(var_48, (var_12 > 28)));
                        }
                        for (int i_30 = 2; i_30 < 8;i_30 += 1)
                        {
                            var_49 = ((!(~2905690398)));
                            var_50 = (max(var_50, (((((!68) - ((1 ? var_5 : var_6))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_31 = 0; i_31 < 18;i_31 += 1)
    {
        arr_102 [i_31] = var_5;
        var_51 = ((((((arr_54 [i_31] [i_31] [i_31] [i_31]) ? 9 : ((0 ? var_10 : 1620433019248707631))))) && var_8));
    }
    #pragma endscop
}
