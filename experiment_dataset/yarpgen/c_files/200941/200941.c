/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_0 ? ((var_10 << (var_0 - 4301126166440593542))) : ((var_3 >> (var_3 - 108)))))) ? (max(var_0, ((var_0 >> (23389 - 23359))))) : ((var_7 ? var_2 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] |= (!23399);
                arr_7 [i_0] = (((arr_4 [i_0] [i_1]) ? (arr_5 [i_0]) : (((arr_2 [i_1]) ? (arr_2 [i_1]) : var_6))));
                var_13 += 39007;
                var_14 = (min(var_14, (arr_5 [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_15 = (max(var_15, (arr_9 [i_0] [i_0] [i_2])));
                    arr_10 [i_0] = ((-(((arr_3 [i_0]) ? (arr_0 [21]) : var_5))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_16 = (max(var_16, ((((var_7 ? 131 : 31415))))));
                    arr_15 [i_0] [i_1] [1] [1] = ((var_9 == (arr_1 [i_0])));
                    var_17 = (min(254, 39));
                    arr_16 [i_0] [i_0] [i_0] [6] = ((-(arr_4 [i_0] [i_0])));
                    arr_17 [i_0] [i_0] [i_0] |= (246 % ((((arr_1 [i_0]) && (arr_1 [i_0])))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_18 = 59;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = ((var_10 / (arr_12 [i_0] [i_0] [i_0] [i_0])));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            arr_26 [8] [12] [i_4] [i_5] [i_6 + 1] = (arr_3 [i_0]);
                            var_19 = (((arr_3 [i_6 + 1]) && (((var_5 ? (arr_13 [i_0] [i_0] [i_0]) : var_10)))));
                            arr_27 [i_0] [i_5] [i_4] [i_0] [i_0] [i_0] |= -131;
                            var_20 ^= (((arr_4 [i_0] [i_1]) ? (arr_13 [i_0] [i_1] [i_4]) : (arr_1 [i_5])));
                        }
                        arr_28 [i_0] [i_0] [i_0] [i_5] = var_3;
                        var_21 |= arr_20 [i_0] [i_1] [i_4] [19];
                    }
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
