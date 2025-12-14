/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_1 < (max(((var_7 ? var_0 : var_2)), -var_2))));
    var_20 = min(((-(18564 + 989323249))), var_14);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 *= (min((((((arr_5 [7] [i_1] [i_2 - 1]) ? (arr_3 [3] [i_0]) : (arr_8 [8] [i_1] [8]))) * (((((arr_13 [i_0] [i_0] [4] [i_0 - 1] [i_0 + 1]) < var_13)))))), (arr_11 [i_0] [i_1] [i_1] [i_0 + 3])));
                                var_22 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) - (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                                var_23 = ((((((arr_7 [i_0 + 3] [i_1] [i_2]) & (arr_6 [i_0] [9] [6] [i_0])))) ? (((((min(var_2, (arr_4 [i_0] [i_1])))) ? ((((arr_3 [i_0 + 3] [i_1]) ? var_8 : var_6))) : var_12))) : (((((91876287 ? (arr_5 [i_0] [i_0] [i_0 + 1]) : var_11))) ? (arr_10 [i_0 - 1] [i_0 - 1] [8] [i_0]) : (arr_3 [1] [i_3])))));
                                arr_14 [i_0] [i_0] [i_2 + 1] = (min(((((((arr_12 [i_0 + 3] [i_0] [i_0 + 2] [i_0]) ? 2726004465618868684 : var_2)) != (((min(var_15, var_18))))))), (max((var_13 / var_6), ((var_13 ? 2850128336526278503 : 9107))))));
                            }
                        }
                    }
                    arr_15 [i_0 - 1] [i_0] [i_0 + 3] = (min((((!-9223372036854775798) ? (arr_0 [i_0]) : -85284692)), ((max((arr_6 [1] [1] [1] [i_0]), (((arr_1 [0] [i_0]) >= var_16)))))));
                    var_24 ^= var_17;
                }
            }
        }
    }
    #pragma endscop
}
