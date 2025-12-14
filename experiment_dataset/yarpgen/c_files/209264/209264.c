/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [14] = (min((((arr_2 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))), ((2 ? 19 : (-127 - 1)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_1] [i_0] = 0;
            var_11 = (max(var_11, ((min((arr_1 [i_1]), 127)))));
        }
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_12 = ((0 ? 230 : 3221736312));
        var_13 = (max(-7, 1));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_14 = ((14478 != 0) / (max((min(4503599626846208, 66)), ((((arr_4 [i_3]) ? (arr_13 [i_3]) : (arr_11 [i_3])))))));
        var_15 = (max(var_15, ((((13 == 2799891755) && ((((arr_12 [i_3]) & (arr_12 [i_3])))))))));
        var_16 = (arr_0 [i_3] [15]);
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (~-7);
        arr_19 [i_4] = min(((max((arr_5 [i_4]), (arr_12 [i_4])))), (-3435102643031682522 + var_1));
        arr_20 [i_4] = (max(0, 1));
    }
    var_17 = var_3;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_26 [i_5] [i_6] = var_7;
            var_18 -= ((!(arr_16 [i_5] [i_5])));
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_19 = (((arr_25 [i_7] [i_5] [i_7]) && (arr_25 [i_7] [i_5] [i_7])));
            var_20 = (((var_9 ? (arr_0 [i_5] [i_7]) : -327)));
            var_21 = (((arr_16 [i_7] [i_7]) ? (arr_16 [i_7] [i_7]) : (arr_16 [i_7] [i_7])));

            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_22 = (max(var_22, ((((((arr_22 [i_7] [i_5]) < (arr_14 [i_5] [i_5]))) ? (~1) : (arr_1 [i_5]))))));
                var_23 *= (((arr_32 [i_5]) + (arr_32 [i_5])));
                var_24 = -38950048;
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            arr_37 [i_5] [1] = arr_31 [i_5];
            arr_38 [7] [i_9] [i_9] = (arr_22 [i_5] [i_9]);
        }
        arr_39 [i_5] [10] |= ((247 ? 18446744073709551602 : -11799));
    }
    #pragma endscop
}
