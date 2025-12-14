/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 3923336116;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 ^= (max((((var_15 != var_9) ? 127 : (min(17226, 0)))), (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 &= ((((max((arr_10 [i_0] [i_2 - 2] [0] [i_0]), var_10))) ? var_12 : var_15));
                                var_19 = var_14;
                            }
                        }
                    }
                    var_20 = var_11;
                }
            }
        }
    }
    var_21 = ((var_0 ? var_10 : var_5));
    var_22 -= var_11;
    #pragma endscop
}
