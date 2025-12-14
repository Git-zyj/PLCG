/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = ((var_12 || ((var_8 == (var_11 + var_0)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = (max(-853485041, (arr_5 [i_0] [i_0] [i_0 - 2])));
                            var_14 *= (arr_6 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_15 = ((var_11 ? var_9 : var_0));
    var_16 |= ((104 << (var_7 - 509)));
    #pragma endscop
}
