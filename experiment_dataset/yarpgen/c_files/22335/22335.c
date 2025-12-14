/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_7));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (arr_5 [i_0]);
                var_13 = (max(var_13, var_2));
                var_14 = (arr_3 [i_0]);
            }
        }
    }
    var_15 = (max(((max(-3282861275610525767, ((min(var_10, 163680038)))))), 12593023272179683006));
    var_16 = ((~(max(((8178858334108588379 ? var_5 : var_4)), ((min(var_7, 32)))))));
    #pragma endscop
}
