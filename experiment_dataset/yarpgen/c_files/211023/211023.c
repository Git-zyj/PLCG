/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_12 = (min(var_12, (arr_1 [i_0] [i_0])));
            var_13 ^= ((18446744073709551615 >= (arr_4 [i_1] [i_0])));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 = (max(var_14, (((~(arr_6 [i_0] [i_0]))))));
            arr_9 [i_0] [i_0] [i_2] &= var_1;
            var_15 = (!var_3);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_16 &= 7;
                var_17 = var_11;
                var_18 = (max(var_18, ((((arr_3 [i_2] [i_3]) * 18446744073709551582)))));
                arr_12 [i_0] [i_2] [i_2] = ((4294967294 / (var_11 & 633037591)));
                arr_13 [i_0] [i_2] [i_3] = ((7 << (((arr_2 [i_2] [i_3]) - 8221110313609416224))));
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 = (min(var_19, var_1));
                            arr_26 [i_7] [i_6] [i_4] [i_4] [i_0] = (arr_2 [i_5 + 2] [i_5 + 2]);
                            arr_27 [i_0] = ((var_2 >= (arr_14 [i_5 - 2])));
                        }
                    }
                }
            }
            var_20 = ((((((arr_10 [i_0] [i_4] [i_0]) - var_5))) ? var_4 : ((var_1 & (arr_11 [i_0] [i_4] [i_4])))));
        }

        for (int i_8 = 4; i_8 < 14;i_8 += 1)
        {
            var_21 = ((~(arr_16 [i_0] [i_8 - 3] [i_0])));
            var_22 = (min(var_22, (((+(((arr_14 [i_0]) ? (-2147483647 - 1) : -720436390)))))));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_23 *= var_2;
            var_24 = (((arr_21 [i_0] [i_0] [i_9 - 1] [i_9] [i_9] [i_9]) | 0));
        }
        var_25 = (((arr_3 [i_0] [i_0]) - var_6));
        var_26 = (max(var_26, ((((arr_5 [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((((((((arr_3 [i_10] [i_10]) >> (2147483647 - 2147483625)))) ? (arr_22 [i_10] [i_10] [i_10]) : (arr_33 [1] [i_10]))) - ((min((arr_22 [i_10] [i_10] [i_10]), (-2147483647 - 1)))))))));
        arr_35 [2] = (((((arr_6 [i_10] [i_10]) & (arr_6 [i_10] [i_10]))) % (((-(min(var_8, 2147483641)))))));
        var_28 = (max(var_28, var_5));
    }
    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
    {
        arr_40 [i_11] [i_11] = var_8;
        var_29 = (!(arr_37 [i_11]));
    }
    var_30 = var_8;
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            {
                var_31 = 18446744073709551601;
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_32 = (15040218607241031589 != ((max(var_6, (((-2147483647 + 2147483647) >> (2147483647 - 2147483635)))))));
                                var_33 = (((((~(min(15040218607241031589, -1361615523))))) ? (((-((18446744073709551611 ? -2 : -2147483625))))) : (arr_46 [i_12])));
                                var_34 = (max(var_34, (arr_54 [i_12] [i_16])));
                            }
                        }
                    }
                }
                var_35 = (((var_5 || 1) << (var_5 + 16)));

                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_36 = (max((18446744073709551575 && var_8), ((((-6478054242894075217 >= (arr_46 [i_13])))))));
                    var_37 = ((((((((arr_44 [i_17] [i_13]) + 2147483647)) << (((var_4 + 351294038) - 20))))) ? var_2 : (((arr_44 [i_12] [11]) ? ((((arr_48 [i_12] [i_13] [i_17] [i_17]) != 34))) : ((((arr_49 [i_12] [i_12] [i_12] [i_12]) != var_7)))))));
                }
                for (int i_18 = 3; i_18 < 18;i_18 += 1)
                {
                    var_38 += (arr_58 [0] [i_12] [5] [i_12]);
                    var_39 = (max(1, ((2147483633 ? 0 : 5085779421846795575))));
                    var_40 = (((((((max(-126, var_4))) | (2305843009213693951 / 32754)))) ? (((arr_55 [i_18 - 2] [i_18] [i_18 - 2] [i_12]) ? var_4 : 3036805232)) : (arr_44 [i_13] [i_12])));
                }
            }
        }
    }
    #pragma endscop
}
