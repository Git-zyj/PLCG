/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 239));
                var_17 = (min(((max(-77, (arr_3 [i_1] [i_0])))), (~43)));
            }
        }
    }
    var_18 = var_1;
    #pragma endscop
}
