/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (((arr_1 [i_0]) / (((arr_0 [11]) ? var_1 : 2704582280))));
        var_16 ^= (3816795919 ? var_9 : (arr_1 [i_0 + 2]));
        arr_3 [i_0] = (13283147364412347418 <= 60);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_0 [i_1]);
        arr_7 [i_1] = 18446744073709551605;
        arr_8 [i_1] = (((arr_4 [1] [i_1 - 1]) >= (arr_0 [i_1 + 2])));
        arr_9 [i_1] [i_1] = 11968;
    }
    for (int i_2 = 1; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (!-20);
        var_17 = (min(var_17, (31777 > 16444)));
        var_18 = max(245, (0 * 767485749));
    }
    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((((max((arr_16 [i_3 + 1] [i_3 + 3]), (arr_16 [i_3 + 3] [i_3 + 2])))) ? ((~(arr_16 [i_3 - 1] [i_3 + 2]))) : (arr_16 [i_3 - 1] [i_3 + 3])));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_19 = (max(var_19, 205));
            arr_20 [i_3] [i_4] = (~6592843046360096141);
            arr_21 [i_3] = 13;
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_28 [i_3] [i_3] [i_6] = (max(((((arr_18 [i_3] [i_3]) == var_11))), (var_0 | var_11)));
                var_20 = (((arr_27 [i_3] [i_6]) ? 4916804087934697733 : 572));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_21 -= (((arr_14 [i_5 - 2] [i_8 - 1]) + ((max((arr_14 [i_5 + 3] [i_8 + 1]), (arr_14 [i_5 - 1] [i_8 - 2]))))));
                            var_22 = (max(var_22, (((max((arr_11 [5] [i_8]), (-12208 | 7)))))));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_23 += (arr_5 [i_5 + 3] [i_3 + 3]);
                arr_38 [i_3] = (((arr_31 [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 - 1] [7] [i_5 + 1]) ? (((arr_31 [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 + 2] [i_5] [5]) | (arr_31 [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 1]))) : ((var_11 | (arr_31 [i_5 + 3] [i_5 - 2] [i_5 + 1] [i_5 + 3] [7] [i_5])))));
                var_24 = (min(var_24, (arr_22 [i_3])));
                arr_39 [i_3] = (min((((arr_36 [i_5 + 1] [i_5 + 1] [i_5 - 2] [3]) >> (((arr_36 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]) - 14879)))), (arr_27 [i_5 + 1] [i_3 + 2])));
            }
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                var_25 = (arr_35 [i_5 + 1] [10] [i_5] [i_3] [15] [i_3 - 1] [i_3 - 1]);

                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_26 = ((~(arr_27 [i_5 + 1] [i_3 + 1])));
                    var_27 = var_13;
                    var_28 = (((arr_33 [i_5] [i_5 + 3] [i_5 + 3] [i_5 + 1] [i_5 + 2] [14] [1]) | (arr_35 [i_5 + 3] [i_5] [i_5] [7] [7] [7] [i_3])));
                }
                for (int i_12 = 2; i_12 < 14;i_12 += 1)
                {
                    arr_46 [i_3] [10] [10] [1] [i_3] = (arr_22 [i_3]);
                    var_29 = (min(var_29, ((((arr_12 [i_12]) ? ((((arr_10 [13]) / (((arr_40 [6] [i_10 - 1] [i_12]) + (arr_26 [i_12] [i_12] [i_12])))))) : ((var_6 ? var_3 : (arr_30 [i_10 + 2] [i_10 + 2] [i_12] [i_10] [i_10 + 1]))))))));
                    arr_47 [i_3] [i_5] [14] [14] [8] = ((~(max(var_11, (((arr_14 [i_3] [i_3]) >> (var_8 + 25714)))))));
                    var_30 = var_8;
                }
            }
            arr_48 [i_3] [7] = ((-32490 ^ (arr_36 [8] [2] [i_3] [i_5 + 2])));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_31 -= ((((arr_16 [i_3 - 1] [i_3 + 1]) ? (arr_29 [i_13]) : (22 <= 478171394))));
            arr_52 [i_3] [i_3] [i_3] = max(var_3, var_12);
            var_32 = (((23149 <= 9223372036854775807) ? ((-96 ? (arr_40 [i_3 + 1] [i_13] [i_13]) : var_7)) : (32767 || var_9)));
        }
        var_33 *= (((((-(arr_12 [6])))) && ((min((arr_34 [i_3 + 1] [i_3] [i_3] [i_3] [i_3]), (arr_34 [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3]))))));
    }
    #pragma endscop
}
