/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_1, var_4)) << (2659442704095873576 - 2659442704095873557)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = ((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = arr_7 [i_0] [i_1] [0] [i_2];

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((arr_0 [i_1 + 1]) < var_5);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_14 = var_3;
                            var_15 = (arr_12 [i_0] [i_4] [7] [7] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_16 = (min(var_16, ((((arr_11 [i_3 - 1] [3] [i_2] [i_2] [i_1 + 1]) * (((-9321 + 2147483647) >> (65535 - 65508))))))));
                            var_17 = (arr_6 [i_1 + 1] [i_1] [11] [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_18 = ((~(arr_5 [i_1] [i_0] [5])));
                            var_19 = (var_5 ? 808366974 : ((-1 ? var_5 : 1)));
                            var_20 = (arr_0 [i_0]);
                        }
                    }
                    var_21 = ((arr_3 [i_2] [i_0]) ? ((9223372036850581504 ? 808366974 : var_0)) : (((arr_10 [i_2] [i_2] [i_2] [i_1 + 1] [i_0]) ? (arr_19 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1]) : var_7)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_22 = (((!var_0) ? (((808366974 ? -2011925599 : (arr_13 [i_7] [0] [i_7] [1] [i_7])))) : (arr_1 [i_7])));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_23 = ((11336607271046508608 ? 55248 : 5837582968291398620));
            var_24 = (max(var_24, (((+((((arr_14 [16] [i_7] [i_7] [i_7] [i_7] [12] [i_7]) || var_2))))))));
            var_25 = var_9;
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_26 *= ((var_9 ? (arr_3 [i_9] [i_7]) : (~2450882300)));
            var_27 = (max(var_27, ((((1342746639122508534 ? var_8 : var_5))))));
            var_28 = (((arr_13 [i_7] [i_9] [i_7] [i_7] [i_9]) ? (var_7 || 1) : -23522));
            var_29 = ((!(((arr_24 [i_7]) != -65536))));
        }
    }
    var_30 = ((1 ? ((((var_0 ? 8232570583208847791 : 4777809327769530806)) + -var_3)) : (!7116343659803159149)));
    #pragma endscop
}
