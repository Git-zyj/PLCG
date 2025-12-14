/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -124;
    var_18 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = var_2;
                var_20 = ((~((var_2 ? -134 : -1))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [11] [i_3 - 1] &= (((var_16 & 0) < 4294967295));
                            arr_12 [i_0] [i_0] [1] [i_2] [i_3] [i_3] |= (max((min(var_5, (-124 + 0))), ((min(0, 1)))));
                            arr_13 [i_0] [i_1] [i_2] [4] [i_3] = ((-(((((max(9223372036854775807, var_14))) && 127)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
