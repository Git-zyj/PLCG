/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (arr_0 [i_0]);
                var_20 ^= -1227142959;
            }
        }
    }
    var_21 = (max((min(((var_9 ? var_17 : 1)), (~26))), -117));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_22 -= (((arr_4 [i_2 + 1]) ? ((var_9 ? 12217679902994265976 : var_17)) : (arr_4 [i_2 + 1])));
                arr_9 [i_2] = ((8791139182059003429 || ((min(115, var_18)))));
            }
        }
    }
    var_23 *= var_11;
    #pragma endscop
}
