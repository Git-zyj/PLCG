/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (~-1)));
        var_16 = (((5230836027125498262 != (((-74 ? (arr_1 [i_0]) : 74))))) ? (((((!(arr_1 [0])))))) : (((((var_2 ? 0 : 5230836027125498262))) ? (((arr_2 [i_0]) ? 74 : (arr_2 [i_0 - 1]))) : -74)));
        arr_3 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = (((arr_5 [i_1 + 1]) != (((-26172 ? 2886989773 : -74)))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 = (min(var_18, 989939109));
                        var_19 = ((((((arr_10 [i_3] [i_4]) | (arr_6 [3])))) ? (arr_9 [1]) : 1));
                    }
                }
            }
            var_20 ^= (((var_11 ? 16 : (arr_12 [i_1] [i_2] [i_1 + 1] [i_1]))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_21 &= (arr_8 [i_1] [i_5]);
            arr_15 [i_1] [2] |= -9;
            var_22 = ((((((arr_8 [i_1] [i_5]) + -101))) > (((arr_8 [i_1 + 1] [i_5]) ? -9 : (arr_2 [i_1])))));
            var_23 -= (var_3 == 1);
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_29 [2] [i_7] [i_8] [i_8] [i_7] [i_6] = (arr_26 [i_6] [i_7] [i_8] [i_9]);
                                var_24 -= (arr_28 [i_8] [i_10] [i_10] [i_10 + 1] [i_10]);
                            }
                        }
                    }
                }
                var_25 = (((arr_16 [i_7] [i_7]) ? (max((((-2050520585 ? var_0 : 1))), (((arr_28 [i_6] [i_6] [i_7] [i_7] [i_7]) * 74)))) : ((((var_6 != 4278190080) + ((41844 & (arr_17 [i_6]))))))));

                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {
                    var_26 -= ((((((var_5 / var_13) ? (arr_24 [i_6] [i_6] [i_6] [i_6] [3] [i_6]) : ((8852 ? (arr_17 [i_6]) : 127))))) ^ (max((arr_24 [i_11] [i_11] [i_11] [i_6] [i_6] [i_6]), ((~(arr_28 [i_6] [i_7] [i_7] [i_7] [i_11 + 1])))))));
                    var_27 = (min(var_27, ((max(((((min((arr_24 [i_6] [2] [i_7] [i_7] [i_7] [i_11]), (arr_20 [i_6])))) ? (((2050520584 ? -50 : (arr_21 [i_6] [i_7] [i_7])))) : 16777216)), -11)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_28 = arr_36 [i_6] [i_6] [i_6] [1] [9] [i_6];
                                var_29 = (max(var_29, (((255 ? ((-1 ? (((min(0, var_14)))) : -var_12)) : (((((-17 < 44140) && (((-(arr_33 [i_6] [i_6] [i_6] [i_6])))))))))))));
                                arr_37 [i_12] [1] [i_12] [i_12] [i_12] |= (((((((((arr_31 [5] [5] [i_11 + 1]) ? var_8 : (arr_36 [i_6] [i_7] [11] [i_12] [i_13] [i_6])))) ? ((-(arr_24 [i_6] [i_7] [i_7] [i_12] [1] [i_12]))) : var_9))) ? ((+(((arr_16 [0] [i_12]) ? 3702955191794045366 : (arr_30 [i_6]))))) : (arr_22 [i_12] [i_6] [i_6])));
                                var_30 *= ((100 ? (16 < 0) : (max(((-1486258655 ? var_5 : (arr_22 [i_6] [10] [9]))), (arr_16 [i_11] [i_12])))));
                                arr_38 [i_6] [i_7] = 0;
                            }
                        }
                    }
                }
                var_31 = 0;
            }
        }
    }
    #pragma endscop
}
