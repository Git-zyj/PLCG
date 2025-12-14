/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_6;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 &= (arr_0 [i_0]);
                    arr_7 [i_1] = ((var_3 ? (min((((var_3 ? (arr_5 [i_0]) : var_1))), ((var_0 ? (arr_0 [i_2]) : (arr_1 [i_0]))))) : (((min(var_3, (min((arr_4 [i_1] [i_1] [i_1]), var_0))))))));
                }
            }
        }
        var_13 *= ((-(arr_3 [i_0] [i_0 - 2])));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_14 *= (((min((arr_9 [i_3 - 1] [i_3 + 1]), var_8)) == (((((arr_8 [i_3] [i_3 - 1]) != (arr_8 [i_3] [i_3 + 1])))))));
        arr_10 [i_3] = ((((((((arr_9 [i_3] [i_3]) ? var_4 : var_4))) ? (((arr_8 [i_3] [i_3]) ? var_6 : (arr_8 [i_3] [i_3]))) : (((var_5 ? var_0 : var_1))))) - ((((arr_8 [i_3] [i_3]) ? (((arr_9 [i_3] [i_3 + 1]) ? var_5 : var_1)) : (((!(arr_8 [i_3] [i_3])))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_20 [i_5] [i_5] [i_6] |= var_2;
                        var_15 = (min(((var_7 % (arr_8 [i_3] [i_4]))), (((-(!var_9))))));
                    }
                }
            }
        }
        arr_21 [i_3] = ((!((max(var_3, ((var_9 ? var_7 : var_10)))))));
        arr_22 [i_3] [i_3] = ((+(((((arr_12 [i_3] [i_3] [i_3]) <= (arr_11 [i_3 + 1] [i_3] [i_3]))) ? ((var_3 ? (arr_17 [4]) : (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]))) : (var_3 > var_5)))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_16 = ((arr_15 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]) | (((arr_11 [i_7] [i_7] [i_7 - 1]) ? (arr_23 [i_7] [i_7]) : var_2)));
        var_17 = -var_3;
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_27 [i_8] |= (((((arr_11 [i_8] [i_8] [i_8]) ? (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_25 [i_8]))) >= ((var_0 ? (arr_16 [6] [i_8] [i_8] [6]) : var_10))));

        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            arr_30 [i_9] |= ((((((arr_16 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9]) ? (arr_25 [i_8]) : (arr_14 [i_8] [i_8] [i_9 - 2] [i_8])))) && var_8));
            arr_31 [i_8 + 1] [i_8 + 1] = (arr_19 [i_8 + 1] [i_8 + 1] [i_9] [i_8] [i_8]);

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_41 [i_8] [i_9] [i_9] [i_8] [i_12] [i_12] [i_8 - 1] |= (var_10 ? (arr_19 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_8] [i_8]) : var_3);
                            var_18 = (((((arr_24 [i_11]) ? var_4 : (arr_33 [i_8] [i_8] [i_8]))) % (~var_0)));
                            var_19 = ((-(arr_11 [i_9 - 2] [i_8 - 1] [i_9])));
                            var_20 = (((((((arr_28 [i_8] [i_8 - 1]) > var_3)))) <= (arr_18 [i_8] [i_8] [i_10] [i_8 + 1] [i_8 + 1])));
                        }
                    }
                }
                arr_42 [i_8] [i_9 - 1] [i_8] &= (9223372036854775796 ? ((1 ? 20474 : -2159449226662848926)) : ((((arr_32 [i_8] [i_8] [i_8]) ? var_3 : 758627034))));
                arr_43 [i_10] [i_9 + 1] [i_8] [i_8] = (arr_11 [i_8] [i_9] [i_8]);
                var_21 |= (arr_36 [i_8] [i_8] [i_8 - 1] [i_9] [i_9] [i_10]);
            }
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                arr_48 [i_8 - 1] [i_8 - 1] [i_8] = (((((var_3 ? var_1 : (arr_33 [i_8 - 1] [i_8] [i_8])))) ? (!var_7) : (((!(arr_46 [i_8] [i_8] [i_9 + 1] [i_8]))))));
                var_22 += (arr_32 [i_8] [i_8 + 1] [i_9 + 1]);
                var_23 |= ((1 ? 1 : 1));
            }
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                var_24 *= (((arr_39 [i_8 - 1] [i_8 + 1] [i_9 - 1] [i_8 - 1]) || -var_6));
                var_25 ^= (((9223372036854775807 << 0) ? (((arr_19 [i_8] [i_9] [i_14] [i_9 + 1] [i_8]) ? var_1 : (arr_29 [i_9] [i_8]))) : var_5));
                var_26 = (((arr_34 [i_8] [i_8] [i_8 + 1]) ? var_3 : (var_0 && var_0)));
            }
            var_27 = (((arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_8 + 1]) ? (arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_8 - 1]) : (arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9 - 2] [i_9 - 2])));
        }
        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            arr_54 [i_8 - 1] [i_8 - 1] = ((-(arr_52 [i_15 - 2] [i_15 - 2])));
            arr_55 [i_8] [i_8] [i_15] &= ((arr_46 [i_8] [i_15 + 1] [i_8] [i_8]) ? (arr_39 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 1]) : ((var_9 ? var_10 : (arr_17 [8]))));
            var_28 = ((-(arr_8 [i_8 + 1] [i_15 + 1])));

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        {
                            arr_65 [i_17] [i_18] = (((!var_9) ^ (((arr_18 [i_8] [i_15] [i_16] [i_15] [i_18]) ^ (arr_34 [i_17] [i_17] [i_17])))));
                            arr_66 [i_16] &= (((arr_11 [i_8 - 1] [i_15 + 1] [i_16]) >= (arr_13 [i_8] [i_8] [i_8 - 1] [i_8 + 1])));
                        }
                    }
                }
                var_29 = var_5;
            }
            for (int i_19 = 0; i_19 < 18;i_19 += 1)
            {
                var_30 |= ((-((var_0 ? (arr_51 [i_8] [i_15 - 2] [i_15 - 2]) : var_1))));
                var_31 = ((var_3 ? ((var_8 ? (arr_44 [i_8] [i_8] [i_19]) : (arr_17 [i_19]))) : ((var_0 ? var_4 : var_0))));
                arr_69 [i_8] [i_8] [i_8] [i_19] = ((var_2 || (arr_33 [i_15] [i_15] [i_15 - 1])));
                arr_70 [i_15] [i_15] [i_8] [i_19] = (((arr_49 [i_19] [i_15]) ? (((arr_29 [i_8 - 1] [i_15]) ^ (arr_45 [i_8]))) : (arr_25 [i_8])));
            }
            var_32 ^= (var_8 / var_9);
        }
        var_33 = ((((((((arr_35 [i_8] [12] [i_8] [i_8] [i_8 + 1]) + 2147483647)) << (var_6 - 10787)))) ? (arr_38 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8]) : var_10));
        var_34 = ((var_1 ? (arr_64 [i_8] [i_8] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) : ((var_9 / (arr_47 [i_8] [i_8] [i_8] [i_8 + 1])))));
    }
    var_35 = ((min((max(var_10, var_3), var_2))));
    #pragma endscop
}
