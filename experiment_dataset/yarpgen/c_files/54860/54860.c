/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0 + 1] [i_1] = (((((arr_0 [i_1]) | var_1)) | ((((arr_3 [1] [i_0 - 2] [i_0]) & 65529)))));
            arr_5 [i_1] [i_1] = ((var_5 * (arr_2 [i_0] [i_1] [i_0 + 1])));
            arr_6 [i_1] = (var_0 % 437692953);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 8;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [i_1] [i_2] [i_1] [i_1] = 1756296536;
                            var_13 = (((arr_8 [i_0 - 2] [i_1 - 1] [i_1 - 1] [i_2 + 1]) ? var_11 : (arr_11 [i_0 - 1] [i_1 - 1] [i_2] [i_2] [i_2 - 1])));
                            var_14 = (((arr_10 [i_0 + 1] [i_0 + 1] [8] [i_0 - 1]) ? 62205 : var_2));
                        }
                    }
                }
            }
            var_15 = arr_13 [i_1];
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_16 = (min(var_16, 175));
            var_17 = var_5;
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 6;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_18 = (min(var_18, 0));
                            arr_25 [i_0] [i_6] [i_0 - 1] = ((171143420 >= (arr_17 [i_5 - 1])));
                            var_19 *= var_8;
                        }
                    }
                }
            }
        }
        arr_26 [i_0] = (!-3450594730423005545);

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_20 = 8252997951970575989;
            var_21 = ((var_2 * (max(-75, (arr_13 [i_0])))));
            var_22 = (max(var_22, 25798));
        }
        arr_31 [i_0 - 1] [i_0] = ((((arr_29 [i_0] [i_0]) * (((-127 - 1) * var_4)))));
        var_23 = ((((max(-18416, (arr_20 [3] [i_0 - 1] [i_0 - 2])))) ? ((102 % (var_6 < var_11))) : ((~(!171082344)))));
    }
    #pragma endscop
}
