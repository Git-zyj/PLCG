/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-var_8 ? 0 : (var_8 & var_12)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_9 [0] [13] [13] &= ((((((var_9 ? (var_10 | var_0) : 27)) + 9223372036854775807)) >> (var_1 - 1908652029543297392)));
                        var_21 = (min((9223372036854775794 < 229), (var_6 - 37)));
                        var_22 = (max(var_22, 3596348254));
                    }
                }
            }
        }
        var_23 = 5691520695362972283;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_0] [i_4] = (((37 - 1) / var_15));
            var_24 = (((arr_11 [i_4] [i_4]) < ((var_12 ? var_2 : var_16))));
            arr_15 [i_4] = ((((arr_7 [i_0 - 1] [i_4]) / var_9)));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 = (((15132 + (var_7 - var_19))));
            var_26 = var_4;
            arr_19 [i_0 + 1] [i_5] = ((+((min((!var_0), ((!(arr_0 [i_0]))))))));
            arr_20 [i_0] = (arr_3 [i_5]);
        }
        arr_21 [i_0] [i_0 + 1] = var_1;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_27 = 215;
        arr_24 [i_6] = (((arr_16 [i_6] [i_6] [i_6]) <= (((((-107 + 2147483647) << (((var_11 + 87) - 14))))))));
        var_28 = var_14;
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = ((((((var_11 * var_3) || var_3))) < 1));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 12;i_9 += 1)
            {
                {
                    arr_36 [i_7] [i_7] [i_8] [i_9] = (((var_10 ? ((((arr_10 [i_7] [i_9]) && var_2))) : var_2)));
                    var_29 = var_2;
                    var_30 = (max(var_30, (arr_7 [i_7] [i_7])));
                }
            }
        }
        arr_37 [4] [i_7] = (((((max(var_5, var_10)))) + ((~((0 ? var_6 : var_19))))));
        arr_38 [i_7] = (max((arr_10 [i_7] [14]), var_19));
    }
    var_31 = ((var_19 + 0) << ((((max(var_15, 40))) - 133)));
    var_32 = (min(((((-127 - 1) ? var_16 : var_3))), (var_2 & var_16)));
    #pragma endscop
}
