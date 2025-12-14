/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, -6));
                        arr_9 [i_0 + 2] [i_2] [1] [i_3] = (0 || var_5);
                    }
                }
            }
        }
        arr_10 [i_0] = var_10;
        var_14 *= (!var_4);
        var_15 = ((((1 ? 58100 : 0)) << (1 * 0)));

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_16 ^= (((arr_2 [i_0 - 1] [i_0 + 1]) ? var_9 : (arr_2 [i_0 + 3] [i_0 + 2])));
            arr_13 [i_0 + 1] [i_0 + 1] = (1 >= var_7);
        }
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        arr_17 [i_5] = ((((arr_15 [i_5 + 1]) || (arr_14 [i_5 + 1]))));
        var_17 = 1;
        var_18 *= (((!(arr_14 [i_5 - 1]))));
    }
    for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
    {
        var_19 = ((min(var_10, (~-106))) ^ (((min(var_7, 127)))));
        var_20 = (max(var_20, ((((-118 | 32767) ? (((!(arr_2 [i_6 - 3] [i_6 + 1])))) : -32767)))));
    }
    for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_24 [i_7] [i_7] = ((+(min((~var_6), (var_3 > 32750)))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_21 = (((arr_18 [i_7 - 3]) % ((4957110131492394940 ^ (!0)))));
                        var_22 = (arr_23 [i_7] [i_7] [i_7]);
                    }
                }
            }
            var_23 = (max(var_23, (min(68, (((1 != (95 | 1))))))));
            var_24 = (max(var_24, ((max((min((arr_23 [i_7] [2] [i_7]), 2624047109043685399)), (arr_3 [i_7] [i_7 - 4] [i_7 - 4]))))));
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_25 ^= -var_6;
            arr_33 [i_11] [i_7] = (((52125 ? 95 : 1)));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 9;i_15 += 1)
                    {
                        {
                            var_26 = (min(var_26, 6));
                            var_27 ^= 1;
                            var_28 = (((((-115 ? var_2 : var_7))) && (((arr_22 [i_7 - 3] [i_12] [i_13]) != 1))));
                            arr_45 [i_7] [i_12] [i_7] [i_7] [i_15 + 3] = ((((((((arr_28 [i_15]) & 1))) || (((55 ? -23266 : 1)))))) << ((((6 ? -53 : 12)) - 18446744073709551558)));
                            var_29 = (min((((+(((arr_44 [8] [8] [i_15 + 2] [i_14 - 1] [i_15] [1] [i_12]) / (arr_27 [i_12] [i_13] [i_14] [i_15 + 1])))))), ((max(1, var_11)))));
                        }
                    }
                }
            }
            var_30 = (min(var_30, (205 > -4957110131492394940)));
            var_31 = (max(var_31, (((var_7 ? (((((arr_31 [i_7 - 1]) > var_0)))) : (((((var_4 - (arr_1 [i_7] [i_12])))) ? var_1 : ((((!(arr_12 [i_12] [i_7] [i_7]))))))))))));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_32 = (((var_6 ? (arr_18 [i_12]) : 1)));
                var_33 = ((((arr_19 [i_7]) | -31024)) < var_2);
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_34 -= (((0 || 1) ? var_0 : ((min(var_4, (arr_30 [i_7 - 3] [i_7] [i_7] [i_7] [i_7 - 3]))))));
                var_35 = (((min((arr_39 [11] [i_7] [1] [i_7 - 2]), (arr_39 [i_7] [5] [1] [i_7 - 3]))) * (((arr_39 [i_7] [i_7] [i_7 + 2] [i_7 - 4]) ^ (arr_39 [i_7] [i_7 - 3] [i_7] [i_7 - 1])))));
                arr_50 [i_7] [1] [10] = (min((arr_16 [i_7 - 1]), 18446744073709551615));
                arr_51 [i_7] [i_12] = var_6;
            }
        }
    }
    var_36 = (min(var_36, (0 ^ var_0)));
    var_37 *= (!var_0);
    #pragma endscop
}
