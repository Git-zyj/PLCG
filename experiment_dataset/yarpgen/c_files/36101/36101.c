/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = -785324292;
                var_10 = (max(var_10, (((((((-(arr_0 [i_1]))) + 2147483647)) << (((arr_0 [i_1 - 1]) - 20103)))))));
            }
        }
    }
    var_11 = 785324285;
    var_12 = var_0;
    #pragma endscop
}
