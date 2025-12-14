/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = ((!(arr_0 [i_0])));
        var_21 = (max(var_21, var_14));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_0] = ((((8713735202746526872 & (arr_2 [10]))) <= -8897));
                        var_22 = (min(var_22, ((((!var_7) & ((var_10 ? var_12 : 45)))))));
                        arr_12 [1] [i_3] [1] [i_3] [i_1] = (((arr_6 [i_1] [i_3] [i_3 + 1]) ? var_8 : (arr_6 [i_2] [i_2] [i_3 + 1])));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_23 = (arr_1 [i_3 + 1] [i_3 + 1]);
                            var_24 = var_19;
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_1] [i_3] [i_3] [14] [i_1] [i_1] &= var_19;
                            var_25 = (((var_7 / 32196) || (((var_0 << (((arr_10 [i_0] [i_0] [2] [4] [i_5] [i_3]) - 5932210711178129845)))))));
                            arr_18 [i_3] = (var_12 - var_0);
                        }
                        for (int i_6 = 4; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            var_26 = 9223372036854775807;
                            var_27 = (((arr_14 [1] [7] [i_1] [1] [1] [i_6]) ? ((var_0 ? var_11 : (arr_1 [i_0] [i_0]))) : (~var_17)));
                            arr_21 [i_3] [i_3] [i_1] [i_1] [i_3] = (((arr_8 [i_6 + 1] [i_6 + 1] [i_6] [i_6]) <= (arr_8 [i_6 + 2] [i_6] [i_6] [1])));
                            arr_22 [i_0] [i_3] [i_0] = -var_19;
                        }
                        for (int i_7 = 4; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = 4294967294;
                            arr_26 [i_3] = (arr_7 [i_0] [i_1] [i_7]);
                            var_28 ^= var_7;
                            var_29 *= ((201 <= (var_13 | var_3)));
                            arr_27 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((~(arr_6 [3] [i_3 - 1] [i_7])));
                        }
                    }
                }
            }
        }
    }
    var_30 = ((var_11 << (var_9 - 468117414)));
    var_31 = 3021;
    var_32 = var_2;
    #pragma endscop
}
