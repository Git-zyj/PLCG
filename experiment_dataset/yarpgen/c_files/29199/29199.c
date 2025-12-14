/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((14845 * -6067483932707086578), ((var_1 ? var_9 : (9223372036854775796 & var_10)))));
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (arr_3 [i_1]);
                var_15 *= 72;
                var_16 = 31640;
            }
        }
    }
    #pragma endscop
}
