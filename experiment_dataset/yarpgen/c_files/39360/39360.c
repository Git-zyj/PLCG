/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (36028794871480320 || 1);
    var_11 = var_2;
    var_12 = (var_0 >= var_2);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_13 -= (arr_0 [i_0 + 1] [i_0 + 2]);
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (~var_2) : (((arr_0 [i_0] [i_0]) ^ 15))))) ? (arr_1 [i_0]) : ((((((arr_0 [i_0] [i_0]) ^ (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : (max(-126, var_7))))));
        var_14 |= (((arr_0 [i_0] [i_0]) ? ((var_9 ? (var_0 ^ 18446744073709551615) : var_4)) : ((((((var_1 ? var_8 : 0))) ? ((1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : ((32767 ? (arr_0 [i_0] [i_0]) : var_6)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (((((arr_0 [i_2] [i_1]) - (arr_0 [i_0] [i_2]))) & ((((arr_1 [i_0]) == (arr_5 [i_1] [i_1]))))));
                    var_16 = ((!((((((var_4 ? -126 : var_4))) ? (var_6 / 1) : 0)))));
                }
            }
        }
        var_17 ^= ((((((0 ? var_0 : 126976)) << (18446744073709551592 - 18446744073709551571))) / (arr_1 [i_0 + 3])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3] = var_3;
        var_18 = (max(var_18, 4294967295));
        var_19 = arr_9 [i_3];
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 ^= var_7;
        var_21 += ((((24 ? 249 : 2147483647)) + var_4));
        var_22 -= 18446744073709551592;
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_23 = (max(var_23, (((((((~0) ? (((arr_17 [i_5]) ? var_9 : 402653184)) : (arr_14 [i_5 + 1])))) ? var_5 : (arr_11 [i_5]))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_24 = (arr_18 [i_6] [i_5]);
                    arr_21 [i_5] [i_6] [i_5] [i_7] = ((var_9 ? (arr_17 [i_5 + 1]) : 1));
                    arr_22 [i_5] [i_6] [i_7] = 65535;
                    arr_23 [i_5] = (arr_18 [i_5] [i_5 + 1]);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_25 -= ((((((arr_14 [i_5 + 1]) ^ ((1 ? var_9 : (arr_11 [i_5])))))) ? var_0 : (((min((arr_11 [i_8]), (arr_9 [i_5]))) * -var_8))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = var_8;
                    var_26 = (min(var_26, ((-402653185 ? (((8191 / var_6) ? (((arr_15 [i_5]) & 39)) : (arr_13 [i_5]))) : (((0 * (var_4 && var_5))))))));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_27 ^= ((-(max((arr_15 [i_5 + 1]), (arr_19 [i_5] [i_5 + 1] [i_5 + 1])))));
                    var_28 += max(((min((arr_20 [i_5 + 1] [i_6]), var_0))), ((((!(arr_16 [i_5]))) ? (max(var_5, (arr_15 [i_5]))) : (((min((arr_24 [i_5] [i_6] [i_9] [i_6]), (arr_14 [i_5]))))))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_29 = var_9;
                    arr_33 [i_5] = (arr_14 [i_5 + 1]);
                    var_30 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
