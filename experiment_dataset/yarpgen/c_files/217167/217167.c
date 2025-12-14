/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = (max(var_14, (((var_8 ? (!var_5) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 |= ((-(arr_0 [3])));
                    var_16 = (arr_4 [i_0] [i_1] [i_2]);

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_3] [16] [1] = ((((((((arr_3 [i_0] [i_0]) + 2147483647)) >> (min(var_6, var_1))))) ? (~255) : (~var_6)));
                        var_17 = (((arr_3 [i_1 - 3] [i_3 - 1]) ? (arr_3 [i_1 - 3] [i_3 + 2]) : var_0));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_18 = (arr_13 [i_1 + 2] [8]);
                            var_19 = (arr_15 [i_2] [8] [21] [i_2] [8] [i_0] [i_2]);
                            var_20 = (arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_21 = (min(var_21, ((((((var_6 ? var_2 : var_9))) ? (arr_9 [i_3 - 1]) : (arr_9 [i_4]))))));
                            var_22 = (min(var_22, ((((arr_3 [19] [19]) ? (var_1 - var_10) : (~var_2))))));
                        }
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, ((((((var_4 ? var_12 : (arr_4 [i_5 - 1] [i_1 - 3] [i_1 + 2])))) + (arr_6 [i_1] [i_1 + 1] [i_5 - 1]))))));
                        var_24 ^= (((((-(arr_5 [i_2])))) ? (var_10 - var_2) : (arr_9 [i_0])));
                    }
                    var_25 += ((-(((var_7 - var_12) / (((arr_3 [13] [13]) ? var_12 : (arr_4 [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
