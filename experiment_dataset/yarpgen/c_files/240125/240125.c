/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = 2793977687482114476;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((((2793977687482114494 ? 1133369438 : var_6))) ? 2793977687482114480 : (~10)))) ? 2310961341 : 9729));
                            var_16 ^= -9729;
                            arr_10 [i_3] [i_3] [i_3] [2] [i_3] = -3370181855338599119;
                        }
                    }
                }
                var_17 = 161;
            }
        }
    }
    var_18 = ((((629709482 << var_5) > var_14)) ? (((((2793977687482114470 ? var_10 : (-127 - 1)))) ? (var_14 % 4059581842) : 3370181855338599129)) : 57);
    var_19 |= (var_8 < var_4);
    #pragma endscop
}
