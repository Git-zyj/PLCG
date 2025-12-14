/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_0 [i_0]) ? (arr_1 [i_0] [18]) : (arr_0 [i_0]))))));
        var_21 += ((!(((~(arr_0 [i_0]))))));
    }
    var_22 = ((((((1 ? 5279386225936167581 : 1)) ? var_8 : 0))));
    #pragma endscop
}
