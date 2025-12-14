/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (!(384 == var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [4] [22] [i_4] |= 0;
                                arr_17 [i_0] [i_1] = (!0);
                            }
                        }
                    }
                }
                var_20 = ((arr_9 [i_0] [i_1] [i_1]) + (arr_9 [i_0] [21] [20]));
            }
        }
    }
    var_21 = var_12;
    var_22 = (~var_5);
    #pragma endscop
}
