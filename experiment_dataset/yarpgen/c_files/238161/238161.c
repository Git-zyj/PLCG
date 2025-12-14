/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 28493;
    var_15 += min(var_5, ((1 ? (min(1, 0)) : (37056 ^ var_1))));
    var_16 = ((min((max(0, 0), var_10))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 *= ((26329 > (-32767 - 1)));
                                arr_15 [i_2] [i_2] = ((((max((1 != 54411), 5900))) ? (min((arr_11 [i_3 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (arr_11 [i_3 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (arr_8 [i_0] [i_1] [i_3])));
                                var_18 -= (min(((~(((arr_9 [i_1] [i_2] [i_2]) & var_0)))), (((~var_8) >> (((var_0 << 1) - 17581))))));
                            }
                        }
                    }
                    var_19 = ((((var_3 - ((min(var_6, (arr_10 [i_1])))))) & ((0 % (arr_1 [i_0] [i_0])))));
                }
            }
        }
        var_20 = (max(var_20, (((((((var_6 && (arr_7 [i_0])))))) + (((33364 && 0) - ((8 ? 1 : var_8))))))));

        /* vectorizable */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_21 = ((33364 * (arr_3 [i_5 + 1] [i_5 + 2])));
            var_22 = (var_4 + var_3);
            var_23 = (((arr_5 [i_0] [i_5 - 1]) ? var_7 : (arr_5 [i_0] [i_5 - 1])));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_32 [i_6] [i_7] [i_7] [i_8 + 1] [i_9] [i_7] = (((arr_22 [i_8 + 2]) != (arr_22 [i_8 - 4])));
                        var_24 = ((var_7 ^ (arr_30 [i_6] [i_7] [i_7] [i_8 + 1] [i_8] [i_8 - 4])));
                        var_25 = var_1;
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_26 = (max(var_26, (arr_22 [i_10])));
            arr_36 [i_6] [i_10] = ((var_11 ? (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : (arr_29 [i_6] [i_6] [i_6] [i_10] [i_6] [i_10])));
        }
        for (int i_11 = 0; i_11 < 0;i_11 += 1)
        {
            var_27 = (var_13 < 3226);
            arr_39 [i_11 + 1] = (var_6 & var_1);
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            arr_48 [i_6] [i_13] = ((1 ? 11901 : (arr_23 [i_6] [i_11 + 1])));
                            var_28 = (min(var_28, ((((0 - var_12) - (arr_47 [i_6] [i_6] [i_12] [i_13] [i_12]))))));
                            arr_49 [i_14] [i_13] [i_13] [i_13] [i_11] [i_11] [i_6] = var_10;
                        }
                    }
                }
            }
            var_29 *= (((arr_30 [i_6] [i_6] [i_6] [i_11 + 1] [i_11 + 1] [i_11]) != (((arr_31 [i_6] [i_6] [i_6] [i_11 + 1]) ? var_1 : -20617))));
        }
        var_30 = (((arr_26 [i_6] [i_6] [i_6] [i_6]) | (arr_26 [16] [i_6] [i_6] [i_6])));

        for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
        {
            arr_54 [i_6] [i_6] = (((0 + 24026) ? 240 : ((-(arr_44 [i_6] [i_6])))));
            arr_55 [i_6] [i_6] [i_15] = ((-(arr_52 [i_6] [i_15])));
            var_31 = 11901;
            var_32 ^= ((-(arr_26 [i_6] [i_6] [i_15] [i_6])));
            var_33 -= (((var_8 ? 1 : (arr_38 [i_6]))));
        }
        for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
        {
            arr_58 [i_6] [i_16] = ((((var_3 > (arr_22 [i_6])))));
            arr_59 [i_16] [i_6] = (((((arr_24 [i_6] [i_16] [i_16]) > (arr_47 [i_6] [i_6] [19] [i_16] [i_16]))) ? -var_11 : 7792472582265379107));
            var_34 = (((51974 | 7792472582265379101) ? (var_7 + -14214) : (-32767 - 1)));
            var_35 = (((var_9 > 27982) ? (var_0 > var_11) : var_13));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_62 [i_6] = ((+(((arr_53 [i_17] [i_17] [18]) ^ var_3))));
            /* LoopNest 3 */
            for (int i_18 = 3; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_36 = (((-32767 - 1) >= 18851));
                            var_37 = (var_4 + -var_3);
                        }
                    }
                }
            }
            var_38 = arr_52 [i_6] [i_17];
        }
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            var_39 = ((-(((var_13 || (arr_69 [i_6] [i_6] [i_21] [i_21]))))));
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 20;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 18;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 19;i_24 += 1)
                    {
                        {
                            var_40 = ((0 ? 44985 : -32764));
                            var_41 = (((-(arr_73 [17] [i_22 + 1]))));
                            var_42 = (-16988924669759882314 ? (0 > var_0) : (arr_79 [21] [i_22] [i_22 - 1] [i_21] [i_24 + 1] [i_6]));
                            var_43 *= (((arr_28 [i_6] [i_22] [i_23 - 1] [i_24 + 1] [i_24] [i_24 + 2]) / (arr_28 [i_6] [i_6] [i_23 - 1] [i_24 + 1] [i_24 + 1] [i_24])));
                        }
                    }
                }
            }
            var_44 = 0;
            var_45 = (((((var_2 ? var_12 : 26664))) ? var_12 : -var_2));
        }
        arr_80 [i_6] = (((arr_63 [i_6] [i_6] [i_6] [i_6]) | ((1 ? 16790924394841613302 : var_6))));
    }
    #pragma endscop
}
