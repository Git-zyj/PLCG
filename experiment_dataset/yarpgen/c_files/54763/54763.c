/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (max((((-var_13 > ((var_9 ? var_8 : var_1))))), (min(var_16, -5218256992985460782))));
                arr_5 [i_0] [i_0] = var_11;
            }
        }
    }
    var_18 = ((236 ? 26 : 236));
    #pragma endscop
}
