/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 *= 46119;
                            arr_11 [i_0] [i_1] [i_1] [i_1] = arr_2 [i_1];
                        }
                    }
                }
                var_17 = 127;
                var_18 = var_11;
            }
        }
    }
    var_19 = (min(var_9, (max(1, var_3))));
    var_20 = ((((((15318402257577708385 ? var_2 : 11616908201176978436))) ? (min(var_7, var_7)) : 0)) & ((((min(var_13, 3128341816131843241))) ? var_7 : var_6)));
    #pragma endscop
}
