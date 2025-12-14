/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 += (813414322 != 4161536);
                var_15 += ((!((((arr_2 [i_0 + 3]) ? var_0 : var_0)))));
            }
        }
    }
    #pragma endscop
}
