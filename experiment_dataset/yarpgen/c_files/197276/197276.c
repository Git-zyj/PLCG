/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((min((var_18 > var_18), (!var_13))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (min(((~(arr_0 [i_0 + 3]))), ((max(var_1, 63)))));
        arr_4 [6] [22] &= (max((min(-var_2, (82 / var_8))), ((min(((((arr_0 [6]) > -83))), var_8)))));
        var_20 = ((-((((((min(76, -108))) + 2147483647)) >> (((~-108) - 104))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [9] = (min((-53841653 << -var_13), (((+((((arr_5 [i_1]) && var_6))))))));
        var_21 = (min(32556, (max(((min(var_3, -32544))), ((-(arr_5 [i_1])))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_22 = (((~(!137))));
            var_23 = (min(var_23, (((!(~-var_17))))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_20 [i_1] [i_1] [i_1] [i_4] = ((~((-(min(14815747960052802102, 112))))));
                var_24 = (min(var_24, ((((!var_9) - (((!((((arr_8 [4] [i_3]) * 53)))))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_25 += ((!(!var_15)));
                            arr_26 [0] [0] [1] [0] [i_6] = ((!((!(arr_23 [i_1] [i_3])))));
                        }
                    }
                }
            }
            var_26 = (max(var_26, (((!((!(~-32525))))))));
            arr_27 [i_1] [i_3] [i_1] = (max(((-((min(12832, -698))))), ((min((-80 > var_10), 239)))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                var_27 = (-62 ^ -32762);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_28 = ((!(~43)));
                            arr_37 [i_8] [i_7] [i_8 - 2] [i_8 - 2] [8] = (442289253491912060 == -16697179252569773585);
                            arr_38 [i_8] [i_1] = ((-((-(!var_1)))));
                            arr_39 [i_1] [i_7] [i_8] [i_9] [i_10] = (min((min(103, 0)), (1749564821139778034 <= 198)));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_29 ^= 28672;
                            arr_48 [1] [i_11] [0] [i_11] [i_1] = (((var_3 + (arr_32 [i_7] [i_7]))));
                            var_30 = ((~((-(arr_42 [i_11])))));
                            var_31 = -96;
                            arr_49 [i_11] = ((!(arr_40 [i_13 + 1])));
                        }
                    }
                }
                arr_50 [10] [i_11] [i_11] [10] = ((((!(arr_36 [i_1] [i_1] [i_7] [i_7] [i_11] [5] [i_11])))) >= var_3);
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
            {
                var_32 = ((~(max(var_2, -var_17))));
                var_33 = ((~((~(arr_10 [5] [i_7] [i_14])))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
            {
                arr_58 [i_1] [5] [i_15] [i_1] = -721;
                arr_59 [i_15] [i_1] [10] = (((arr_19 [i_15] [i_7] [i_1]) == (((-28 >= (arr_42 [i_15]))))));
            }
            var_34 = ((~((~(~1)))));
            arr_60 [i_1] = (max(((min((~var_12), (~var_16)))), (min((min(var_4, 752133662619138220)), ((min(var_18, 54)))))));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        var_35 -= ((-(arr_13 [i_16])));
        arr_64 [i_16] [i_16] = (!-1263392290);
        arr_65 [i_16] = (!31392);
        var_36 &= ((-(!16697179252569773593)));
    }
    for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
    {
        var_37 = (min(((min((arr_22 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), -32))), (max((arr_42 [i_17]), var_16))));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                {
                    var_38 = (max(-21132, 55154));
                    var_39 -= (min((~53), (max((min((arr_0 [20]), var_0)), ((((arr_70 [i_17]) == var_0)))))));
                    arr_75 [i_17] [3] = ((-(((!(((~(arr_24 [i_19] [i_19] [i_18] [i_17])))))))));
                }
            }
        }
    }
    var_40 = (min(var_6, var_13));

    for (int i_20 = 2; i_20 < 17;i_20 += 1)
    {
        var_41 = (max((!var_7), (!60)));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 18;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 18;i_23 += 1)
                {
                    {
                        arr_87 [i_21] [i_21] [i_21] [i_21] = 76;
                        var_42 = (-(min((min((arr_2 [i_20 - 1]), -75)), ((min(var_16, 53))))));
                        var_43 = (max(-var_1, ((-(arr_78 [i_20] [i_21])))));
                    }
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        /* LoopNest 3 */
        for (int i_25 = 0; i_25 < 22;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 22;i_27 += 1)
                {
                    {
                        arr_96 [i_24] [i_27] [i_24] [i_25] [i_27] = (var_7 + -var_9);

                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            var_44 = ((((min(6, -var_11))) / (max((((var_13 * (arr_93 [i_25] [9] [i_25] [i_25])))), (var_17 * 1)))));
                            var_45 = (min(var_45, ((min((~1), (((!(!var_0)))))))));
                            var_46 -= ((((((max(-75, 1492))) << (((((arr_2 [i_24]) + (arr_1 [i_25]))) - 378005020377143598)))) != (((arr_93 [i_24] [i_25] [i_27] [i_26]) % (min((arr_95 [15]), -1))))));
                        }
                        arr_99 [i_25] [i_24] [20] [i_25] = (max(((+(min((arr_2 [0]), (arr_98 [i_24] [i_25] [i_25] [i_24] [9] [17]))))), (!63)));
                        arr_100 [i_25] = (min((min(var_12, (max(var_0, (arr_1 [i_27]))))), ((-(min((arr_2 [21]), 68))))));
                    }
                }
            }
        }
        var_47 = ((var_12 || (((~(((!(arr_89 [i_24] [i_24])))))))));
        var_48 = ((-(((39759 * 39121) / var_8))));
    }
    for (int i_29 = 0; i_29 < 10;i_29 += 1)
    {
        /* LoopNest 2 */
        for (int i_30 = 0; i_30 < 10;i_30 += 1)
        {
            for (int i_31 = 2; i_31 < 7;i_31 += 1)
            {
                {
                    var_49 = (min((max((!8176878277240781676), -1481)), ((~(~96)))));
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 10;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 10;i_33 += 1)
                        {
                            {
                                arr_114 [i_31 + 2] [2] [i_31 - 1] [i_29] [i_33] = (min(((max(((~(arr_19 [i_29] [i_29] [i_31 - 1]))), (~var_18)))), (~1100936385)));
                                arr_115 [i_33] [i_32] [i_29] [i_31 + 1] [i_29] [i_29] [i_29] = max(((min(5611, -28658))), ((var_5 >> (193 - 182))));
                            }
                        }
                    }
                }
            }
        }
        arr_116 [i_29] = ((((max((arr_34 [i_29]), 64))) || ((min((max(var_5, var_4)), var_13)))));
    }
    #pragma endscop
}
