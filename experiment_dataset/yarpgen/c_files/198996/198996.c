/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((min(var_2, var_4), ((min(1, -212332472)))))));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_16 = var_9;
                arr_5 [i_1] = (min(((((((min(var_10, var_4)) + 2147483647)) << (var_8 - 15178491450135716599)))), ((((max(var_2, var_9))) ? var_5 : (var_12 || var_6)))));
            }
        }
    }
    #pragma endscop
}
