/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = var_10;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_19 = (arr_4 [i_1 + 2] [i_2]);
                var_20 = (((arr_5 [i_2]) ? (arr_5 [i_2]) : 1));
            }
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                var_21 = ((var_9 ? (-3952332 > var_14) : var_0));
                arr_9 [i_0] [i_0] [i_0] [i_0] = (~var_14);
            }
            var_22 *= (((arr_1 [i_0]) ? var_3 : var_0));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_12 [i_0] = (((((~var_17) >= (((arr_8 [i_0]) / var_6)))) ? ((~(arr_7 [i_4] [i_4] [i_0] [i_0]))) : var_13));
            var_23 = ((-(((((var_1 ? var_7 : 1))) ? (~1) : var_1))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_24 ^= ((((-(arr_14 [i_5]))) | (((arr_2 [i_5]) ? var_17 : ((~(arr_13 [i_0] [i_5] [9])))))));
            var_25 = (min((var_6 > var_11), (min((~1625958011794817161), ((((arr_7 [i_0] [i_0] [i_0] [i_5]) ? 8196 : (arr_11 [i_0]))))))));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_20 [i_6] [i_6] = (min(((-1197952980522544842 ? 1 : 67108863)), (arr_2 [i_6])));
        var_26 &= (((((((-(arr_7 [i_6] [i_6] [i_6] [i_6]))) << (((arr_10 [12] [i_6] [i_6]) - 122))))) > ((((~(arr_2 [i_6]))) / var_13))));
        var_27 = (max(var_27, var_4));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_28 |= (arr_24 [i_7]);
        var_29 = (max(var_29, (arr_22 [i_7] [i_7])));
        var_30 ^= ((~(arr_8 [i_7])));
        var_31 |= (arr_1 [i_7]);
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 4; i_9 < 13;i_9 += 1)
        {
            arr_29 [i_9] [i_8] [i_8] = (((((var_8 >= (~var_17)))) & (((arr_11 [i_8]) + (arr_23 [i_8])))));
            var_32 = (max(var_32, ((((arr_28 [i_8]) ? ((((((var_4 ? var_8 : -1197952980522544831)) + 9223372036854775807)) << (((arr_25 [i_9 - 2] [i_8]) - 1)))) : ((((var_8 * var_11) ? (var_13 & var_13) : var_1))))))));
        }
        arr_30 [i_8] = (min(var_14, (arr_10 [i_8] [i_8] [i_8])));
    }

    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_33 = (max(var_33, ((min(-1197952980522544842, ((var_0 + ((18014398508433408 ? 65520 : 1197952980522544829)))))))));
        var_34 = (arr_15 [i_10] [i_10] [i_10]);
        var_35 = ((var_8 << (((arr_28 [11]) - 10500))));
        arr_34 [i_10] [i_10] = (((((-(((arr_32 [i_10]) / var_11))))) ? var_1 : ((((arr_16 [i_10] [1] [i_10]) ? (arr_16 [i_10] [i_10] [i_10]) : (arr_16 [21] [i_10] [i_10]))))));
        var_36 = ((-(arr_16 [i_10] [1] [i_10])));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_39 [i_11] = (arr_25 [i_11] [i_11]);

        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_37 = (((~(~-7))));
            arr_43 [i_11] [i_12] [i_12] = (max((((arr_35 [i_11] [i_11]) ? (((arr_21 [i_12]) ? var_2 : var_15)) : (((arr_15 [i_12] [i_12] [i_11]) ? var_8 : var_9)))), (arr_23 [i_11])));
            arr_44 [i_11] [i_11] = (min((((((var_4 ? (arr_0 [i_11] [i_12]) : (arr_38 [i_11] [i_12])))) ? (((var_11 && (arr_4 [i_11] [i_11])))) : (arr_26 [i_12]))), (((!2135793424) ? ((((arr_36 [5]) && var_10))) : (arr_31 [i_11])))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 7;i_15 += 1)
                    {
                        {
                            var_38 = var_3;
                            var_39 += ((-((-((((arr_31 [i_12]) >= (arr_4 [i_11] [i_12]))))))));
                            arr_52 [i_11] [0] [0] [i_11] = 1227824060;
                        }
                    }
                }
            }
        }
    }

    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        arr_57 [i_16] = 4560;
        arr_58 [i_16] = ((((((~var_16) ? (((arr_7 [i_16] [i_16] [i_16] [i_16]) ? var_16 : var_12)) : (~-33)))) ? (~var_14) : ((-(arr_13 [i_16] [i_16 - 3] [i_16])))));
        arr_59 [i_16] = var_14;
    }
    for (int i_17 = 3; i_17 < 22;i_17 += 1)
    {
        arr_63 [i_17] = var_4;
        arr_64 [i_17] = (((min((arr_6 [i_17]), (arr_8 [i_17 - 3]))) / ((52666 ? 189 : 3257618070))));
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 21;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 19;i_19 += 1)
            {
                {
                    var_40 = (max(var_40, (((-(((arr_62 [1]) ? (arr_62 [8]) : var_9)))))));
                    arr_71 [i_17] [i_18] = (((arr_15 [i_18 + 2] [i_18 - 1] [i_18 + 2]) >= (((!(arr_68 [i_17] [i_17] [i_17]))))));
                    arr_72 [i_17] [i_17] [i_18 + 2] [i_19 + 1] = (arr_3 [i_17] [i_17 - 1] [i_17 + 1]);

                    for (int i_20 = 3; i_20 < 20;i_20 += 1) /* same iter space */
                    {
                        var_41 = (((((((var_17 ? var_14 : var_8))) ? (arr_10 [i_17] [4] [i_20]) : (((arr_1 [i_17]) | var_2)))) / var_10));
                        var_42 = (min(var_42, ((((((arr_68 [i_19 + 1] [i_18] [4]) >= (arr_3 [i_19 + 1] [i_19 + 1] [i_18 + 2]))) ? var_3 : ((28155 ? (~var_14) : (var_16 > 50408))))))));
                        var_43 = (min(var_43, (((var_2 / (min((arr_61 [18]), (arr_2 [i_19 + 1]))))))));
                    }
                    for (int i_21 = 3; i_21 < 20;i_21 += 1) /* same iter space */
                    {
                        arr_77 [i_17] [i_17] [i_17] [i_17] = var_1;
                        var_44 = (((((arr_4 [i_17] [i_17 - 3]) ? (arr_4 [i_17 - 3] [i_18 + 2]) : (arr_4 [i_21] [i_17]))) | var_13));
                        var_45 = (min((((2147483647 >= ((-(arr_68 [i_17] [i_18] [i_17])))))), var_13));
                    }
                    var_46 = var_9;
                }
            }
        }
        var_47 = (min(var_47, ((((arr_8 [i_17 - 3]) ? (((arr_8 [i_17 + 1]) - (arr_8 [i_17 - 3]))) : -var_4)))));
    }
    for (int i_22 = 1; i_22 < 14;i_22 += 1)
    {
        var_48 = (min(((((arr_3 [i_22] [i_22 + 2] [i_22 + 2]) ^ (arr_13 [i_22 + 1] [i_22 + 1] [i_22 + 1])))), (((arr_70 [i_22] [i_22] [i_22]) ? var_1 : (((65528 ? 31 : var_6)))))));

        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {
            var_49 = arr_73 [i_22];
            var_50 = (arr_75 [i_22 - 1] [i_22 + 1] [i_22] [9] [i_22 - 1]);
        }
        var_51 = (max(var_51, var_3));
    }
    #pragma endscop
}
