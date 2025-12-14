/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 255;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(((-(arr_3 [i_1 - 1] [2] [i_1 - 2]))), ((max((arr_3 [i_1 - 1] [i_1 - 1] [2]), var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_21 ^= 104;
                            var_22 = 1;
                            var_23 = (!-1);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
