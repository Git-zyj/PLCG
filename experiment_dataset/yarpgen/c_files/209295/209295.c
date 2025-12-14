/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (!247);
                                var_21 *= (-var_5 < 99);
                                var_22 |= 2097024;
                                arr_15 [i_0] [i_1] [i_1] [i_1 + 1] [10] [5] [i_4 + 1] |= var_9;
                            }
                        }
                    }
                }
                arr_16 [i_0] = -117;

                for (int i_5 = 4; i_5 < 12;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_0] = (((((~(arr_7 [i_0] [i_0] [i_0])))) ? (~var_12) : (arr_17 [i_0] [i_1 - 2] [i_0] [i_5 + 1])));
                    arr_21 [i_0] [i_1 + 2] [i_5] [i_0] = -114;
                }
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    arr_25 [i_6] [i_6] [i_6 + 1] [i_6 + 1] = (((arr_13 [i_6 - 1] [i_6 + 1] [i_1] [3] [i_0] [i_0]) ? var_16 : (arr_0 [i_0] [i_6 + 2])));
                    var_23 = ((~(((((var_13 ? var_11 : (arr_22 [i_0] [i_1] [i_6 + 2] [i_1 + 1])))) ? (arr_17 [i_0] [i_0] [i_6] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_1 - 1])))));
                    var_24 = -35873253;
                    arr_26 [i_6] = ((-590079722 ? ((((8191 & 201) || (((var_11 << (var_6 - 3036299045))))))) : 3335744328290300282));
                }
                var_25 = (max((arr_0 [i_1] [i_1]), 3226521080982289424));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                {
                    var_26 = (max(var_26, 33365));
                    var_27 = (min(var_27, var_11));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            arr_40 [i_7] [i_8 - 4] [i_7] [i_7] [i_11] |= var_7;
                            arr_41 [i_10] [i_8] [i_7] = (var_6 + 12358);
                        }
                        var_28 = (arr_27 [i_10] [i_7]);
                        var_29 = ((449012071 ? ((var_12 ? 9223372036854775802 : (arr_33 [i_8] [i_8]))) : 43));
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_30 = (arr_34 [i_7 - 2] [i_12 + 1]);
                        var_31 *= ((((var_17 % -8466018806908748347) ? 65535 : 74)));
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        var_32 = (min(1637948558, (arr_32 [i_13] [i_9] [i_7 + 2] [i_7 + 2])));
                        var_33 -= ((((((arr_42 [8] [i_7] [i_7] [i_7] [i_7] [i_7]) | 252))) ? var_6 : 0));
                        var_34 ^= ((2517732510799059255 ? var_7 : 3035));
                    }
                    var_35 = var_1;
                }
            }
        }
    }

    for (int i_14 = 3; i_14 < 12;i_14 += 1) /* same iter space */
    {
        var_36 ^= (~46341);
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                {
                    var_37 ^= min((((((8715845398655250135 ? 1170604184 : var_15))) ? var_13 : (((min(48453, var_8)))))), (arr_28 [i_16] [i_15]));
                    var_38 = (max(var_38, (arr_24 [i_14] [i_15] [i_16])));
                    var_39 *= var_4;
                }
            }
        }
        var_40 ^= (arr_50 [i_14 - 2]);
        var_41 *= ((-322087029 ? (arr_45 [i_14 + 1] [i_14] [i_14] [i_14 - 2] [0]) : ((-(arr_42 [i_14 - 3] [i_14] [3] [i_14] [i_14 + 1] [i_14])))));
    }
    for (int i_17 = 3; i_17 < 12;i_17 += 1) /* same iter space */
    {
        var_42 = (max(var_42, (((~(((arr_36 [7]) ? (((var_1 ? -64 : 40))) : var_2)))))));
        var_43 = (min(((~(arr_27 [i_17] [i_17]))), 18));
        var_44 = (arr_44 [13] [i_17] [i_17] [i_17 + 1]);
    }

    /* vectorizable */
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        var_45 = var_6;
        var_46 ^= 43700;
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1)
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 23;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 23;i_21 += 1)
            {
                {
                    var_47 = 7818;
                    arr_68 [i_21] [i_20] [i_20] [i_20] = (((((~(arr_62 [i_21])))) ? ((((!(arr_62 [i_19]))))) : (max((arr_60 [i_19] [i_21]), ((var_14 ? var_5 : 24))))));
                }
            }
        }
        arr_69 [i_19] = ((-(!1331607525)));
        var_48 = (max(var_48, 4294967295));
        var_49 -= ((~(-2147483647 - 1)));
        var_50 = var_1;
    }
    var_51 = ((((113 ? var_5 : 241)) <= (!var_16)));
    #pragma endscop
}
