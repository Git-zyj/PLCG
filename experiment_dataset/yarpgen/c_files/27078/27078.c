/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (!1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_21 += (1 ? 9223372036854775807 : 18446744073709551615);
                arr_6 [i_0] [i_0] = 4064;
                var_22 = ((23697 ? 14 : 5681056374184049714));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 = (((-1 ? -1 : -4053)));
                                arr_17 [i_0] [i_3] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
