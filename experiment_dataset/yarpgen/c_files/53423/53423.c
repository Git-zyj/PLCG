/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max(65520, 3288187472));
                var_14 = (min(var_14, (((650171643422538369 * ((((!(!96))))))))));
                var_15 = ((!((min(1, 1167554249)))));
            }
        }
    }
    var_16 = 44;
    #pragma endscop
}
