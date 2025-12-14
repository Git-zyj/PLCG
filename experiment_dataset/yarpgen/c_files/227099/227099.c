/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= ((((!(((var_5 ? var_3 : var_9)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = ((var_10 ? ((min(var_1, var_6))) : (((52543 ? -95 : 0)))));
        arr_3 [i_0] = ((((~((1636813076 >> (4068824972 - 4068824952)))))) ? -10902 : ((608278435 >> (3885830920 - 3885830908))));
        var_16 = (((226142323 ? -7380539094332964752 : ((min(1050716411, var_6))))));
    }

    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_17 = (max(var_17, 1480328106));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_18 = (((arr_1 [8] [i_2]) * -var_7));
            var_19 = (max(var_19, (!-5573831235986332912)));
            arr_8 [2] [i_2] = (var_13 ? (arr_4 [2]) : (arr_1 [i_1] [i_1 - 1]));
        }
        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_20 = var_2;
                var_21 -= ((((((arr_7 [i_4] [i_3]) + var_7))) ? (((((-(arr_13 [4] [i_3 - 1] [i_1])))) ? -7380539094332964752 : 3885830920)) : ((875898925 ? 226142323 : -7380539094332964730))));
                var_22 = (((~55681) / (!var_7)));
                arr_15 [i_1] [i_3] [i_1] [i_4] = (max((max((max((arr_14 [i_4] [i_4]), var_4)), var_7)), ((((arr_6 [i_1 + 1]) < (!3419068373))))));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                var_23 = (-21680 ^ (var_7 / var_11));
                arr_18 [i_1 + 2] [i_3 + 1] [i_1 + 1] [i_3] = (((!var_10) > -360180394));
                var_24 = (max(var_24, (((var_7 != (var_0 <= -14956))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        {
                            arr_27 [i_1 - 2] [i_3] [0] [i_7] [i_7 + 1] = 32320;
                            var_25 = var_11;
                        }
                    }
                }
            }
            arr_28 [3] [i_1] [3] = 1502877750;

            /* vectorizable */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_26 = (((arr_9 [i_3] [i_3 + 2]) && (((var_0 ? 1 : var_8)))));
                var_27 ^= ((1 ? (((arr_14 [i_1] [i_3]) ? 3419068370 : var_13)) : var_8));
            }
        }
    }
    #pragma endscop
}
