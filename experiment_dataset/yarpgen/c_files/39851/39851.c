/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((2547 ? 2547 : ((var_6 ? (var_12 - var_8) : ((var_3 ? var_13 : var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_3] = (arr_1 [i_0] [i_0]);

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_1] = (arr_5 [i_1] [i_4 - 2] [i_3 + 1] [i_1]);
                            arr_16 [i_1] = (arr_0 [i_4]);
                        }
                        var_18 *= var_4;
                        var_19 = (max(var_19, (arr_13 [i_0] [12] [i_2] [12])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_2] [i_5] = ((((((arr_1 [i_2] [i_2]) ^ var_14))) ? ((var_8 ? (arr_10 [i_0 - 2] [i_0] [5]) : var_6)) : var_5));
                        arr_22 [i_1] [i_1] = ((62989 ? (arr_13 [i_0] [i_1] [i_2] [i_5]) : var_0));

                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            var_20 = (9223372036854775802 / 1966136898);
                            arr_26 [i_1] [i_1] [i_1] [8] [i_1] = var_4;
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 23;i_7 += 1)
                    {
                        arr_29 [i_1] = (arr_3 [i_7]);
                        var_21 = (max(var_21, var_0));
                        arr_30 [i_1] [i_1] [i_1] = var_1;
                    }
                    arr_31 [i_1] [i_1] [i_1] = (((((max(16352, (arr_11 [i_0] [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))))) ? var_4 : (~var_9)));
                    arr_32 [i_1] [i_1] [i_1] = 62989;
                }
            }
        }
    }
    var_22 |= (max(((-(var_11 - var_15))), var_11));
    var_23 = var_0;
    #pragma endscop
}
