/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_11 = var_8;
            var_12 = ((min(-var_2, var_8)));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            var_13 = (!7036650871357327335);
            var_14 += ((-(arr_5 [i_0] [0])));
            arr_6 [i_0] [i_0] = (((1254313738 >> (var_0 + 1368072234))));
        }
        var_15 = -1254313739;
        var_16 += ((var_5 >> ((var_2 ? 0 : ((var_3 >> (9223372036854775807 - 9223372036854775804)))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_17 = arr_5 [i_3] [i_3];
        arr_9 [i_3] = ((!(arr_8 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_18 = (-15 > 255);
                    var_19 = (~26);
                    arr_21 [i_7] [i_5] [i_6] [2] [i_7] [i_6] &= ((~(((arr_2 [i_4] [i_7]) + (arr_4 [i_4] [i_7])))));
                    arr_22 [i_4] [i_5] [i_5] [i_5] = ((var_8 >> (((arr_3 [i_6] [i_7]) + 69))));
                }
                for (int i_8 = 4; i_8 < 16;i_8 += 1)
                {
                    var_20 = (var_2 && (arr_24 [i_5] [i_5] [i_6] [i_6]));
                    var_21 = (max(var_21, (((var_10 != 15401) % (-1 + var_2)))));
                    var_22 = (((arr_24 [i_8] [i_8 - 3] [i_8 - 3] [i_8 - 4]) ? 234 : (arr_24 [i_8] [i_8 - 4] [i_8 - 2] [i_8 - 2])));
                }
                arr_25 [i_4] [i_5] [i_5] [i_4] = 3;
            }
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                arr_30 [i_5] [i_5] = ((!(((var_5 ? var_9 : 100)))));
                arr_31 [i_4] [i_5] [i_9] = var_10;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_23 = (arr_13 [i_4] [i_5]);
                            arr_38 [i_4] [i_5] [i_5] [i_5] [i_11] = ((0 ? var_1 : -var_1));
                        }
                    }
                }
            }
            var_24 = (((arr_4 [i_4] [i_5]) >> (3943901637399267727 - 3943901637399267713)));
            var_25 = ((var_2 ? var_1 : 635107732));
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_26 = (max(var_26, (--1)));
            arr_42 [i_4] [i_4] [i_4] = var_5;
            arr_43 [i_4] = var_1;
        }
        for (int i_13 = 4; i_13 < 16;i_13 += 1)
        {
            var_27 = 152;
            var_28 = (min(var_28, (~var_1)));
        }
        arr_48 [i_4] |= (((arr_10 [i_4]) ? (arr_0 [i_4]) : ((var_9 ? var_10 : (arr_41 [i_4])))));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        var_29 &= 18446744073709551615;
        var_30 = (((~1254313748) ? (((!(!var_1)))) : (!-3375541558014854386)));

        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            var_31 = min(((max((arr_51 [i_14]), var_10))), (arr_52 [i_14] [i_14]));
            var_32 = (max(var_32, (((!(((~(((arr_50 [i_15]) & var_8))))))))));
            var_33 ^= (min((arr_51 [i_14]), ((178 ? (arr_51 [i_14]) : (arr_51 [i_14])))));
        }
    }
    var_34 = var_5;
    #pragma endscop
}
