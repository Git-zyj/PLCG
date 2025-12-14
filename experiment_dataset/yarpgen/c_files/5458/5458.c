/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 = ((-(min(var_11, (arr_5 [i_2] [i_3 - 1])))));
                            var_15 = var_6;
                            var_16 = (1 || 5039940578254703719);
                        }
                    }
                }
                var_17 = ((-((33 ? (((1 ? 33 : 0))) : ((1635254054 ? -11 : var_8))))));
            }
        }
    }
    var_18 &= (!var_9);
    #pragma endscop
}
