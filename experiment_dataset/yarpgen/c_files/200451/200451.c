/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_6));
    var_18 ^= ((((max(1, var_9))) & 0));
    var_19 = (((((~(!1756207984216345447)))) ? ((var_15 ? ((1 ? 1 : var_0)) : var_14)) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((1 ? -var_10 : (((var_5 && 1) | (arr_2 [i_0 + 1])))));
                var_21 = (max(var_21, ((((((var_12 ? ((max((arr_1 [9]), var_16))) : ((max(1, 1)))))) | (min(((max(var_5, var_13))), 2461361310301477108)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = (((max(1, (((arr_1 [i_0]) || -50)))) && -var_0));
                            var_23 = (((arr_7 [i_0 + 1] [i_1] [i_2] [i_1]) ? (((16105211976196800599 & var_7) | 80)) : ((max((min(-82, var_7)), 1)))));
                            var_24 = (var_8 && ((((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (64 / var_16) : (min(var_8, var_4))))));
                            var_25 = var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
