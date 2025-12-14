/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [7] = arr_3 [i_2 - 1] [5] [5];
                    var_16 = var_12;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (min(-4205695866345080395, 8885636664199023913));
                        var_18 = min((min(var_8, (arr_2 [i_2 - 1] [i_2 + 1]))), ((var_3 ? 7850425478262317051 : (arr_2 [i_2 + 1] [i_2 + 1]))));
                        var_19 = ((!((min((~var_2), (min((arr_2 [i_1] [i_3]), 6211773778381658348)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_20 &= ((~6211773778381658348) ? 144115188075855871 : (arr_11 [i_0] [i_0] [11] [i_2] [i_2 - 1] [i_4]));
                        arr_13 [i_4] = (var_2 ? ((-9161857651357528209 ? var_5 : (arr_12 [i_0] [i_1] [i_4] [i_4]))) : var_2);
                        arr_14 [i_0] [i_4] [6] [i_2 - 1] [i_4] = arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1];
                        var_21 = var_11;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 = (var_9 ? (~5514670589349183191) : -4451773841009599747);
                        var_23 &= ((((var_3 >> (-6211773778381658348 + 6211773778381658387)))) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1] [7]) : ((var_14 ? -6211773778381658351 : (arr_16 [6] [i_1] [12] [i_1] [3] [i_5]))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_24 = max(var_12, (((arr_15 [i_0] [i_0] [10] [i_0] [i_0] [i_0]) ? -6211773778381658324 : var_0)));
                        arr_19 [i_1] = (var_0 ? (min((min(var_14, -6211773778381658361)), (var_4 >= var_14))) : (-9223372036854775807 - 1));
                    }
                    var_25 = ((var_4 == ((6211773778381658336 ? (arr_12 [i_2] [i_0] [i_0] [i_2 - 1]) : (arr_12 [i_2] [i_0] [i_0] [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
