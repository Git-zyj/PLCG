/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((((~((var_13 >> (var_13 - 588231949)))))), var_18);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (arr_4 [i_1] [i_0]);
                var_21 = (min((max((((arr_2 [i_0 + 2]) ? 14419 : var_7)), (arr_4 [i_0] [i_0 + 1]))), -21));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2] [i_2] [i_2] = (min((((-((var_11 ? var_17 : 2147483647))))), var_18));
                    arr_16 [i_2] [i_2] [1] = var_4;
                    var_22 = 18446744073709551615;

                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        var_23 = var_9;
                        var_24 = ((var_14 ? (((~(((((arr_20 [i_2 - 1] [i_3] [i_3] [i_4] [i_5] [i_5 + 1]) + 2147483647)) << (((((arr_12 [i_2]) + 37)) - 27))))))) : -var_10));
                        var_25 *= (arr_10 [i_5] [i_3] [i_2 - 1]);
                        arr_21 [i_4] [i_2] = ((((arr_12 [i_2 - 1]) | var_4)));
                    }
                    for (int i_6 = 3; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_28 [i_2] [i_3] [i_3] [16] [i_6] [i_2] = 12;
                            arr_29 [i_2] [i_7] [i_7] [i_6 - 2] [i_7] [i_2] [i_4] = (~(arr_3 [i_7] [i_6]));
                        }
                        var_26 = (max(((((1 ^ var_11) < (max(var_9, var_3))))), (((arr_23 [i_3] [i_3] [i_3] [i_2]) / (arr_3 [i_2 - 1] [i_6 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
