/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_2);
    var_20 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    var_21 = (arr_7 [i_2] [i_1]);
                    arr_10 [i_0] [i_0] = (arr_9 [i_2] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_22 = ((!(arr_9 [i_0] [i_0])));
                    var_23 = (((arr_12 [i_3]) || (arr_8 [i_1] [i_0])));
                    arr_14 [i_3] [i_1] [i_0] |= (((arr_1 [i_0] [i_1]) != (arr_1 [i_0] [i_1])));
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_24 -= ((arr_1 [i_4] [i_1]) != (((arr_11 [i_4] [i_0] [i_0]) ? var_13 : ((2824766514 ? var_0 : var_2)))));
                    var_25 = ((2824766514 ? (59 | 1470200806) : (min(2824766510, -6710826156772202393))));
                    arr_18 [i_0] [i_0] [i_0] |= ((~(((arr_15 [i_0]) >> (((arr_5 [i_0] [i_4]) - 50751))))));
                    var_26 -= (((2824766510 * 1470200797) ? (((!(arr_4 [i_1])))) : (((((arr_6 [i_0] [i_4]) + 2147483647)) << (((arr_17 [i_0] [i_0]) - 30))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_27 |= ((((((arr_12 [i_1]) ? 146202664 : (arr_13 [i_5] [i_4] [i_1] [i_0])))) ? -var_0 : (((arr_15 [i_0]) >> (((arr_9 [i_5] [i_1]) + 1560001831))))));
                        var_28 = ((arr_9 [i_4] [i_4]) || (((var_0 ? (arr_16 [i_0] [i_1] [i_4]) : (arr_19 [i_4] [i_4] [i_5])))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_29 = arr_12 [i_4];
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_6] = ((((((arr_7 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))) ? ((((!(arr_7 [i_4] [2]))))) : (max(7, var_7))));
                        var_30 = var_7;
                        var_31 = (arr_1 [i_0] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [i_7] = ((((((arr_17 [i_1] [i_4]) ? (1470200781 >> 8) : (min(2824766514, 2824766499))))) ? (((((arr_22 [i_0] [i_0] [i_0] [i_7]) + 9223372036854775807)) << (((((arr_22 [i_0] [i_1] [i_4] [i_7]) + 1385366478788228955)) - 59)))) : (min(((var_0 ? (arr_15 [i_0]) : 1470200781)), (((var_12 ? 2824766539 : var_11)))))));
                        var_32 = (min(var_32, ((min((((~(((arr_26 [i_0] [i_0] [i_4]) ? var_6 : var_7))))), 1470200778)))));
                        var_33 = (min(var_33, var_13));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_34 = (((((min(7, 1470200772)) ? ((62715 ? 2824766514 : 6854441198933366547)) : ((max(1470200778, 0)))))));
                        var_35 &= (arr_3 [i_0]);
                        var_36 = (min(((max((arr_1 [i_8] [i_1]), (arr_1 [i_1] [i_1])))), (((arr_20 [i_0]) ? (arr_25 [i_0] [i_0] [i_1] [i_4] [i_8]) : (arr_13 [8] [i_4] [i_1] [i_0])))));
                        var_37 |= (((((((arr_24 [i_8] [i_0] [i_4] [i_1] [i_0]) ? var_3 : var_7))) / ((1 ? 1470200779 : 524287)))) << ((((min(-50, 56))) - 26)));
                        var_38 &= (min(2097151, ((-146202664 ? (max(44203525, 1)) : 1470200781))));
                    }
                }
                var_39 = (min(var_39, (max((arr_20 [i_0]), (arr_13 [i_0] [i_1] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [i_1] [i_0] [i_10] [i_11] &= (((((((arr_29 [i_0] [i_1] [i_1] [i_1]) ? var_3 : (arr_1 [i_1] [i_9 - 3]))) >> var_14))) >= (min(((var_0 ? (arr_24 [i_11] [i_0] [i_0] [i_1] [i_0]) : var_8)), (((42 ? 562444028 : 1470200769))))));
                                var_40 = (((((arr_21 [i_9] [i_1] [i_9 - 1] [10]) + (((arr_12 [i_11]) ? var_15 : (arr_11 [i_0] [i_0] [i_0])))))) ? (~-8419603146527633266) : (((arr_31 [i_1] [i_11]) ? (10104631180887466453 ^ -146202681) : (arr_15 [i_11]))));
                                var_41 = (min(var_41, (((~((~(arr_11 [i_0] [i_9 - 1] [i_9 - 2]))))))));
                                var_42 = (max(var_42, (((!((min(var_1, var_18))))))));
                            }
                        }
                    }
                }
                arr_39 [i_1] [i_0] [i_0] = var_5;
            }
        }
    }
    var_43 = (min(var_43, (((!((min(var_11, (var_6 / var_15)))))))));
    #pragma endscop
}
