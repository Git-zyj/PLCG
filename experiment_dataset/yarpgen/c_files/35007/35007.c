/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 *= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((-5410 || (((((arr_5 [i_0] [i_0]) ? 5409 : 5396))))));
                var_22 = (min(((((min(-480377882, 5425))) ? (arr_6 [i_1]) : 0)), 5396));
                arr_7 [i_0] [i_0] = var_3;
            }
        }
    }
    var_23 = (686831752 ? var_12 : var_9);
    var_24 = var_17;
    #pragma endscop
}
