/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (max(var_20, (((!(var_18 ^ 2881714230))))));
    var_21 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 = ((var_1 & ((max((arr_5 [i_0] [3] [i_0]), (min(var_15, (arr_5 [i_2] [i_1] [i_2]))))))));
                            var_23 = ((((min(123, ((((arr_0 [i_3] [i_2]) > (arr_0 [i_1] [i_3]))))))) ? ((~(min(438110371, 1463968069)))) : (((var_0 ? 65268 : var_2)))));
                            var_24 = (((((((arr_3 [i_1]) ? var_4 : 1))) || var_16)));
                        }
                    }
                }
                var_25 -= 1;
            }
        }
    }
    #pragma endscop
}
