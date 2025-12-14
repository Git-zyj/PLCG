/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_7, -1146294029))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_1]);
                var_18 = (((~((min(99, -111))))));
                var_19 *= var_5;
            }
        }
    }
    var_20 = (max((min(1146294011, (var_15 < var_2))), ((max(var_1, var_11)))));
    #pragma endscop
}
