/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = (min(var_15, var_18));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (arr_3 [i_0] [i_0])));
                arr_4 [0] [0] [0] = ((+(min((arr_0 [i_1 - 2] [i_1]), var_6))));
            }
        }
    }
    var_23 = 8438;
    #pragma endscop
}
