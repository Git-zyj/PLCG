/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = ((var_15 && (((2568145766 ? var_1 : (~var_17))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((var_19 ? 249 : 15938646035306513594));
                                arr_13 [16] [i_1] [i_2] [i_3] [i_3] = (((min(((var_4 ? -7239450428878304406 : var_16)), -var_9)) % var_2));
                                arr_14 [i_0] [i_3] = (!var_19);
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 &= -32252;
    var_23 = (((var_14 | -var_13) < (min((2147483647 < var_5), ((0 ? 35388 : var_18))))));
    var_24 = 49152;
    #pragma endscop
}
