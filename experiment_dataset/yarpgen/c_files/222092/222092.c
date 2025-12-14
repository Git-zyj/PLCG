/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (arr_3 [i_2] [i_3])));
                            arr_9 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] = (arr_6 [i_0 + 1] [13] [i_2] [9]);
                            var_14 = var_6;
                            var_15 ^= ((!((((var_6 ? 144044819331678208 : (arr_1 [i_0])))))));
                        }
                    }
                }
                var_16 = (min((arr_1 [i_1 + 2]), ((((0 ? var_6 : var_10)) - (!288230376151711728)))));
            }
        }
    }
    var_17 = 0;
    #pragma endscop
}
