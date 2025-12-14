/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(-1788095812, -1788095812);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_17 = var_5;
        arr_3 [i_0] = (max((arr_2 [i_0]), -1174896191));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_18 = (max(var_18, var_4));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_19 = (max(var_19, ((((((-1174896191 ? -1788095812 : -1788095787))) ? ((1174896190 ? -1174896190 : 0)) : 0)))));
                            arr_20 [i_1] [i_2] [3] [i_2] [i_4] = (arr_12 [i_2 + 2] [i_2 - 2] [i_1] [i_2 - 2]);
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_20 = (((arr_17 [i_2] [i_3] [i_4] [i_6]) ? (arr_24 [i_1] [i_2 + 2] [i_3]) : (18446744073709551615 - 1040187392)));
                            var_21 = (arr_14 [i_1] [i_2] [i_2] [2]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_22 = ((var_3 ? 0 : (arr_23 [i_2 - 3] [i_2 - 3] [i_3] [i_2] [i_7])));
                            arr_29 [i_2] [2] = (((var_12 ? 1788095811 : var_11)) / var_12);
                            var_23 = (arr_25 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1]);
                            arr_30 [i_2] [i_2] = (arr_11 [i_4] [i_3] [i_1]);
                        }
                        arr_31 [i_3] [i_2] = var_0;
                        var_24 += ((0 && (arr_15 [i_3] [i_3] [i_2 + 1] [i_1] [i_1])));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_34 [i_8] = (arr_1 [i_8]);
        var_25 = ((1148417904979476480 ? ((((1148417904979476480 >= (arr_32 [i_8]))))) : ((var_5 ? 1 : var_15))));
        arr_35 [i_8] = (((max((arr_32 [i_8]), (arr_32 [i_8]))) & (arr_32 [i_8])));
    }
    #pragma endscop
}
