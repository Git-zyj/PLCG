/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((~((-(-2 || 0)))));
                var_18 -= ((!((max(var_15, 235)))));
                arr_5 [i_1] [13] = (arr_1 [i_0]);
            }
        }
    }
    var_19 = var_15;
    var_20 += (max(((min(((min(var_9, 51574))), var_2))), 13962));
    #pragma endscop
}
