/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 5821334063544419994;
    var_19 = (((((!((min(var_5, 1238)))))) + var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = (!var_6);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [8] [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = (min(((((arr_4 [i_2] [i_4]) < (min(var_8, (arr_2 [i_0] [i_1])))))), ((((((var_11 ? var_8 : var_1)) + 2147483647)) >> (var_1 < 5821334063544419994)))));
                                arr_16 [i_4] [i_0] [i_3] [i_0] [i_2] [i_0] [i_0] = ((+(min((1 % 1), 14463190360082834798))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [19] = -5821334063544419992;
                            }
                        }
                    }
                }
                var_20 = (min(var_20, (arr_10 [1] [i_1] [i_0] [1])));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 = (min(((((arr_5 [12] [i_5]) >= var_7))), ((~(arr_5 [6] [i_5])))));
        var_22 = ((4194303 ? 5821334063544420009 : (min(1, 5821334063544419986))));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_23 [i_5] = ((~(arr_21 [i_5] [i_6] [i_6])));
            var_23 *= (((1 ? (min(4578839299756747817, var_9)) : var_17)));
            arr_24 [i_5] [i_5] [i_5] = (min((arr_21 [i_5] [i_6] [i_6]), (min(7687392295612075472, (arr_6 [20] [20])))));
        }
    }
    #pragma endscop
}
