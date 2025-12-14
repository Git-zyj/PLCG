/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = 9223372036854775807;
                var_20 = (((arr_0 [i_0]) ? (-9223372036854775807 - 1) : (arr_3 [i_1])));
            }
        }
    }
    var_21 = var_10;
    var_22 &= var_0;
    #pragma endscop
}
