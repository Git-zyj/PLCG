/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 2] = (((((~((~(arr_1 [i_0])))))) ? var_4 : ((((!((max(var_6, (arr_0 [19]))))))))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = (max(var_16, ((((((max(13048949819566825971, (arr_0 [22]))) ^ (arr_0 [i_1]))) != ((max(((-(arr_1 [i_0]))), (arr_1 [16])))))))));
            arr_5 [i_0] [i_1] = (min((!var_8), ((((((arr_0 [i_0]) ? var_6 : 463365701))) ? (arr_0 [i_0]) : ((max((arr_1 [i_1 + 1]), var_7)))))));
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_17 -= ((((min((arr_1 [i_2 - 3]), (min((arr_9 [i_0 + 1]), (arr_3 [2] [23])))))) ? (arr_9 [i_0]) : 2014393385));
            arr_10 [10] [4] = (max((((arr_0 [1]) ? (arr_8 [i_0]) : (max(-17312, (arr_7 [11] [8] [i_2 - 2]))))), (min((arr_1 [i_0]), (((arr_3 [i_0] [i_2]) ? (arr_4 [14] [i_0] [12]) : -17312))))));

            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                arr_15 [21] [i_2 + 1] [21] = (arr_1 [i_0]);
                var_18 = (((((var_15 ? 76 : (min((arr_1 [16]), (arr_9 [i_0 + 2])))))) ? var_13 : (min((((arr_11 [i_0] [i_2 - 1] [4]) ? (arr_11 [i_3 - 1] [i_2] [19]) : (arr_0 [i_2 + 1]))), ((((arr_7 [i_0] [i_0] [9]) <= (arr_13 [14]))))))));
                var_19 *= arr_11 [17] [15] [i_3];
            }
        }
        for (int i_4 = 4; i_4 < 23;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_20 += (!853743327298815577);
                var_21 = arr_13 [i_0];
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_4 + 1] [10] = ((-2029216103 > (arr_21 [8] [i_4] [0] [19])));
                arr_23 [i_0] [i_4 - 3] [13] = ((!((min(((((arr_13 [i_6]) <= (arr_3 [6] [i_0])))), (min((arr_6 [i_0] [i_6] [i_6]), (arr_9 [i_0]))))))));
                var_22 = (((((arr_3 [i_0 - 1] [i_4 - 2]) ? (arr_3 [i_0] [i_4 + 1]) : (arr_3 [1] [i_4 - 1]))) ^ ((((arr_3 [i_0] [i_4 + 1]) < (arr_12 [13] [i_4 - 2] [i_6]))))));
                var_23 = ((~((((min(1, (arr_8 [i_0])))) ? (arr_18 [i_6] [1] [i_0] [i_6]) : (((min(var_15, var_15))))))));
            }
            var_24 *= 255;
            arr_24 [i_0] = (((((((0 ? (arr_8 [i_0]) : (arr_12 [i_0 + 2] [i_0 - 1] [4])))) ? ((1 ? (arr_19 [i_4] [i_4] [i_0] [i_0]) : var_11)) : (((7352217584735539254 & (arr_7 [1] [i_0] [i_0])))))) + (((((((arr_20 [i_4] [i_4] [16] [i_0]) & var_3))) ? (arr_11 [19] [i_4] [i_4]) : ((~(arr_9 [i_0]))))))));
            var_25 = ((max((((arr_6 [i_0] [i_4] [i_4 - 2]) / var_9)), ((((arr_9 [i_4 - 4]) ? var_13 : (arr_7 [i_0] [5] [20])))))));
        }
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_26 = (max(var_26, var_14));
        arr_27 [i_7] [13] = (max(((9223372036854775789 ? (((arr_3 [15] [i_7 + 1]) + (arr_17 [15] [i_7 - 2] [i_7]))) : ((-9223372036854775789 ^ (arr_13 [i_7]))))), ((min(-var_0, (arr_3 [i_7 + 1] [i_7]))))));
        var_27 = ((max(((var_9 ? (arr_12 [1] [i_7 - 2] [4]) : var_8)), (min(var_13, var_0)))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_30 [i_8] [11] = (((~var_11) + ((max((max(var_8, 3740250775)), ((((arr_26 [0] [i_8]) && -1))))))));
        arr_31 [i_8] = ((((!((max((arr_28 [i_8] [i_8]), (arr_18 [i_8] [i_8] [i_8] [i_8])))))) ? (((arr_11 [i_8] [i_8] [i_8]) ? var_0 : (arr_7 [i_8] [i_8] [i_8]))) : (((((arr_28 [i_8] [i_8]) != (192 > 55)))))));
        var_28 ^= ((((var_4 ? (((arr_18 [i_8] [i_8] [i_8] [i_8]) - 4294967267)) : 3964690426)) * var_15));
        arr_32 [i_8] = var_8;
    }
    for (int i_9 = 2; i_9 < 20;i_9 += 1)
    {
        arr_37 [i_9] [i_9] = ((((max((min(var_3, (arr_9 [i_9 - 1]))), (arr_34 [i_9] [i_9 + 2])))) || (((((((arr_11 [i_9] [i_9] [7]) / (arr_20 [0] [i_9 + 2] [i_9] [i_9])))) ? ((554716521 ? 29252 : (arr_19 [i_9 - 2] [i_9] [i_9] [i_9]))) : ((-17312 ? var_5 : (arr_20 [i_9 + 1] [i_9] [i_9] [i_9 + 2]))))))));
        var_29 = (((((!(arr_17 [i_9] [i_9 + 2] [i_9])))) == (!39)));
        arr_38 [i_9 - 2] = (~var_6);
        var_30 = (((arr_35 [i_9 + 2]) ? (arr_21 [i_9 - 2] [i_9 - 1] [i_9 + 2] [14]) : (max((((arr_0 [i_9 + 1]) ? (arr_1 [i_9 + 2]) : var_9)), (((!(arr_0 [6]))))))));
        var_31 = (max(var_31, (((1595287096160225470 > ((((arr_26 [i_9] [i_9 + 1]) ? var_15 : (((1 != (arr_9 [i_9]))))))))))));
    }
    var_32 = var_6;
    #pragma endscop
}
