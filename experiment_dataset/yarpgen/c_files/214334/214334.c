/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = var_11;
        var_15 = (arr_2 [i_0]);
        var_16 = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = -17286;
        arr_9 [i_1 - 3] = (((arr_5 [i_1]) + 18446744073709551611));
        var_17 -= (((24890 > var_1) + (arr_5 [i_1])));
        var_18 = (max(var_18, (arr_6 [i_1])));
        var_19 = (~((65535 | (arr_6 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            arr_15 [i_3] = var_7;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [i_4] [i_2] [i_5] [i_2] |= ((((arr_6 [23]) ? var_11 : 9)) & 100);
                            arr_25 [i_2] [i_2] [i_3] [i_4] [i_5] [i_6] = (0 * 14485);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_3] [i_3] [i_4] [i_3] [i_3] = (~2115294506);
                            var_20 = (min(var_20, ((((((var_12 ? -24891 : -68991944))) ? (arr_2 [i_7 - 1]) : (arr_16 [i_3 - 2] [i_3 - 2]))))));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_32 [i_3] [i_3] [i_4] [i_5] [i_8] = 2115294506;
                            var_21 ^= (arr_13 [i_3] [6]);
                        }
                        var_22 = (max(var_22, (((0 ? (arr_21 [i_3 - 3] [i_4] [i_3 - 3] [i_3 - 3]) : (arr_23 [i_3] [i_3 + 1] [i_3 - 3] [3] [i_3 - 3] [i_3 - 2] [i_4]))))));
                    }
                }
            }
            var_23 ^= (~24874);
        }
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    {
                        var_24 = (min(var_24, (((~(!var_1))))));
                        var_25 = (max(var_25, (arr_34 [i_2] [10])));
                    }
                }
            }
            var_26 -= 24903;
            var_27 = ((~((var_11 ? -76 : var_13))));
        }

        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_28 *= (((arr_36 [i_12]) ? (arr_3 [i_2] [12]) : ((~(arr_18 [i_2] [3])))));
            var_29 &= ((~(((((arr_31 [0] [6] [i_2] [i_12] [6]) + 2147483647)) << (((var_8 + 52802677) - 28))))));
            arr_44 [i_12] = (~(arr_35 [i_2] [i_12]));
            var_30 = (arr_31 [i_2] [i_2] [i_2] [i_12] [6]);
            var_31 *= 65535;
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 11;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        arr_51 [i_2] [i_2] = -2115294506;
                        arr_52 [i_2] [i_13] [i_13] [i_14] [i_14] [i_15] = 65535;
                        var_32 = ((~(arr_16 [i_14 - 2] [i_14 - 3])));
                    }

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_33 = (((arr_50 [i_14 + 1] [i_14] [i_14] [i_14 - 1]) ? (arr_50 [i_14 - 3] [i_14] [8] [i_14 - 2]) : -9));
                        var_34 ^= 0;
                        var_35 += var_0;
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 4; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 22;i_19 += 1)
            {
                {
                    var_36 = (((var_11 & 6) | ((max((arr_59 [i_18 + 3] [i_18 - 4]), (arr_59 [i_18 - 1] [i_18 - 4]))))));
                    arr_63 [i_17] [i_18] = 20;
                    var_37 -= ((((((44573 ? var_0 : (arr_61 [i_17] [i_17] [i_18] [i_19])))) ? ((max((arr_57 [i_19]), (-32767 - 1)))) : (arr_59 [i_18 - 3] [i_19 - 1]))));
                }
            }
        }
        arr_64 [i_17] = max((arr_60 [i_17] [i_17] [i_17]), ((-(max(63110119, 0)))));
        arr_65 [i_17] = ((2115294498 ? 33608 : 30142));
        var_38 = (max(13171442257721340461, -2115294484));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    var_39 = -5;
                    var_40 = (arr_70 [i_17] [i_20]);
                    var_41 = (((var_11 || var_13) > (((!(arr_58 [i_17]))))));
                }
            }
        }
    }
    var_42 = var_6;
    #pragma endscop
}
