/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 += ((((((var_1 - (arr_0 [i_0]))) + 2147483647)) << (((max((arr_1 [14]), (((!(arr_1 [i_0 - 1])))))) - 4671105324362040227))));
        arr_2 [i_0] &= ((var_10 ? ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : (~1)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, var_3));
                        var_19 = (max(var_19, ((~(((((arr_7 [11]) + 9223372036854775807)) << var_1))))));
                    }
                }
            }
            arr_11 [i_0] |= ((((((((arr_7 [i_1]) + 9223372036854775807)) << (((arr_0 [i_1]) - 122))))) < ((var_10 << (((arr_8 [12] [i_1]) - 1599062947573794268))))));
            var_20 &= (173 == var_7);
            var_21 += (16242998960000541616 == 2203745113709009985);
            var_22 = (min(var_22, ((~(((474950493 && (arr_3 [i_0 + 1] [i_0] [i_0 - 2]))))))));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_23 *= ((((max((arr_0 [i_0 + 1]), (min((arr_7 [i_0]), 1))))) ? ((((min(var_9, (arr_4 [5])))) >> ((((~(arr_0 [6]))) + 144)))) : ((((!(arr_4 [i_4])))))));
            var_24 *= (((((var_14 * (arr_10 [i_0 - 1] [12] [i_4] [i_4] [i_4])))) > var_4));
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        var_25 = (max(var_25, (((~(min((arr_6 [i_5] [i_5 + 3] [i_5 + 3]), var_10)))))));
        var_26 *= (((!var_11) ? 16242998960000541616 : ((((!(arr_8 [i_5 - 1] [i_5])))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_27 = (min(var_27, var_10));
                        var_28 ^= ((((var_7 != (arr_19 [i_5 + 3]))) ? (arr_13 [i_6] [i_5]) : (((!(arr_1 [i_5 + 3]))))));
                        var_29 ^= (((((((min(var_10, 1))) ? (max(16242998960000541603, 444365388)) : ((((arr_15 [i_6]) & (arr_16 [i_6] [i_6]))))))) ? (arr_1 [i_6]) : ((max((arr_9 [10] [i_6] [i_6] [10] [0] [i_8]), ((((arr_0 [i_7]) + (arr_4 [i_8])))))))));
                        var_30 *= ((~((+((3850601918 ? (arr_20 [i_8] [i_7] [i_7]) : (arr_3 [i_5 - 2] [i_6] [i_5 - 2])))))));
                    }
                    var_31 = (arr_10 [i_7] [11] [i_6] [i_5] [i_5]);
                    var_32 = (max(var_32, ((max((((((var_12 ? 0 : 22449391)) << (max(1, (arr_7 [i_7])))))), (max(243, (max(var_5, (arr_23 [i_7 + 3] [i_6] [i_7]))))))))));
                    var_33 = (max(var_33, (((((!1) ? (arr_20 [i_6] [i_7 + 1] [i_7 + 3]) : (arr_0 [i_7 - 1])))))));
                }
            }
        }
    }
    var_34 &= ((min(var_15, (max(var_14, var_12)))));
    #pragma endscop
}
