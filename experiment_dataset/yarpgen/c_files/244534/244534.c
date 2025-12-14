/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 -= (min(30517, (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] = ((var_17 / ((((((arr_6 [16] [i_1] [4] [i_3]) & var_12))) ? var_11 : ((18296469169025859991 * (arr_3 [12] [18] [i_2])))))));
                        arr_12 [i_0] [i_1] [i_3] [i_2 + 1] = var_16;
                        var_19 = (arr_2 [i_0] [i_1] [i_1]);
                    }
                }
            }
        }
        var_20 = 31;
        var_21 = -32;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = (arr_10 [18] [i_4] [i_4] [i_4] [18] [i_4]);
        var_22 *= (arr_13 [i_4]);
        arr_17 [i_4] &= var_9;
        var_23 = (arr_15 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_24 = arr_6 [i_5] [i_5] [i_5] [i_5];

        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_25 = (min(var_25, 134217724));
            var_26 = (arr_21 [i_5]);
            arr_23 [i_6] = (((arr_4 [i_5] [i_5]) / ((((arr_7 [i_5]) - (arr_1 [i_5]))))));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_27 = (((arr_21 [i_5]) / var_10));
            var_28 *= ((-33 * 562949953388544) * var_1);
            var_29 = (arr_19 [i_5]);
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_5] [5] = 1628679671345766402;
            var_30 = (arr_2 [i_5] [i_8] [i_5]);
            var_31 = -22;
        }
        var_32 ^= (arr_5 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_33 = ((((arr_3 [i_5] [i_11] [i_5]) ? (arr_39 [i_5] [i_11] [i_5] [i_5] [i_5] [i_5]) : (arr_38 [i_11] [i_9] [i_10] [i_11]))));
                            var_34 = var_0;
                        }
                        var_35 = (arr_35 [i_5] [0] [i_5]);
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
    {
        arr_45 [i_13] = (arr_6 [23] [23] [i_13] [i_13]);
        arr_46 [6] = (((((((4160749555 ? var_6 : var_17))))) * (((arr_10 [i_13] [i_13] [6] [i_13] [i_13] [i_13]) / -31))));
        var_36 = ((var_12 > (((((var_12 * (arr_4 [i_13] [i_13])))) ? (arr_8 [i_13] [i_13] [i_13] [i_13]) : ((-(arr_8 [0] [5] [5] [i_13])))))));
    }

    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        var_37 = (arr_6 [i_14] [i_14] [i_14] [i_14]);
        var_38 = (arr_1 [15]);
        arr_50 [i_14] [0] = var_16;
    }
    for (int i_15 = 3; i_15 < 20;i_15 += 1)
    {
        arr_53 [i_15] &= (((((min((arr_7 [18]), (arr_3 [i_15] [i_15 + 1] [i_15 - 1]))) + ((((arr_9 [i_15] [i_15] [16] [i_15]) + 36765))))) + (arr_6 [i_15 + 1] [24] [i_15 - 3] [i_15 - 3])));

        /* vectorizable */
        for (int i_16 = 3; i_16 < 19;i_16 += 1)
        {
            arr_56 [i_15] [i_16] = (arr_0 [i_16]);
            var_39 = (arr_5 [20] [i_16]);
        }
    }
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 14;i_19 += 1)
            {
                {
                    var_40 = (((((arr_52 [i_18]) + 2147483647)) >> 12));
                    var_41 -= (((arr_48 [i_17]) - (arr_2 [i_17] [i_18] [i_19])));

                    for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                    {
                        arr_68 [i_17] [i_17] [i_18] [i_19] [i_17] [i_20] = ((!(((arr_64 [i_17] [i_17] [i_17] [i_17]) && var_0))));
                        var_42 ^= (arr_47 [i_17] [i_20]);
                        arr_69 [i_17] [i_17] [i_17] = arr_6 [i_19] [i_19] [i_18] [i_17];
                        arr_70 [i_17] [i_17] [i_17] [i_19] [i_20] = (8 || var_2);
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
                    {
                        arr_75 [i_17] [i_17] [i_18] [i_19] [i_19] [i_21] = (arr_49 [i_17]);
                        var_43 = (min(var_43, (arr_63 [i_17] [i_18] [i_19 - 2])));
                    }
                    for (int i_22 = 0; i_22 < 16;i_22 += 1) /* same iter space */
                    {
                        var_44 = (arr_65 [i_17] [14]);
                        arr_79 [i_17] [i_17] [i_17] [i_17] = var_0;
                        arr_80 [i_17] [i_18] [i_18] [i_18] = (((((((min((arr_2 [i_18] [i_18] [24]), var_14)))) * (min((arr_49 [i_17]), var_11)))) >> (((((min((arr_78 [i_22]), (arr_76 [i_22] [i_19] [i_18] [1]))) << ((((var_6 - (arr_58 [7]))) - 802026862)))) - 6503197861922996195))));
                        var_45 = (((arr_66 [i_17] [i_17] [i_17]) ^ var_9));
                    }
                }
            }
        }
        var_46 = (min(var_46, var_14));
    }

    for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
    {
        var_47 = (max(var_47, var_15));
        /* LoopNest 2 */
        for (int i_24 = 2; i_24 < 17;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 18;i_25 += 1)
            {
                {
                    var_48 = (max(var_48, (arr_10 [i_23] [i_25] [i_24 - 2] [i_24 - 1] [i_25] [4])));
                    arr_88 [i_25] [i_25] &= var_12;
                }
            }
        }
        arr_89 [i_23] [i_23] = var_9;
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 18;i_26 += 1) /* same iter space */
    {

        for (int i_27 = 0; i_27 < 18;i_27 += 1)
        {
            var_49 = (max(var_49, (arr_52 [i_26])));
            var_50 = (max(var_50, ((((((!(arr_90 [i_27]))))) & ((var_9 / (arr_52 [i_27])))))));
        }
        var_51 = var_15;
        var_52 = (arr_5 [i_26] [i_26]);
    }
    #pragma endscop
}
