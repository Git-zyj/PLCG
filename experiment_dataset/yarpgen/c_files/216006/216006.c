/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = ((((((arr_0 [i_0]) > (arr_0 [i_0])))) * ((min(21937, 21927)))));
        var_12 = ((arr_0 [i_0]) && ((!(arr_1 [i_0]))));
    }
    var_13 = ((var_5 / ((var_9 * (var_9 + var_9)))));
    #pragma endscop
}
