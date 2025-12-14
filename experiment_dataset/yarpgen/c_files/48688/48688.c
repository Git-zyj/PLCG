/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_11;
    var_13 = ((min(var_4, (max(3293679932, var_4)))));
    var_14 = (3293679932 - 3433829033);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_2 [1]) ? var_5 : var_10)) - 26562)));
                var_15 *= (arr_3 [7]);
                var_16 = (max((arr_0 [i_0] [i_0]), (((-1936505306 || 2731503271) ? (arr_3 [i_0]) : (min(var_10, 1563464025))))));
            }
        }
    }
    var_17 = 0;
    #pragma endscop
}
