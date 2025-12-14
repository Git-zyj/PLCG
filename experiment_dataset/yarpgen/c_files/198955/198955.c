/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (((arr_0 [i_0]) >= 1));
        var_15 = (min(var_15, ((-1641204491 / (arr_0 [i_0])))));
        var_16 = (min(var_16, (~1641204493)));
    }
    var_17 = ((5012459163958637500 / (max((1641204490 | 0), 0))));
    var_18 = 665402205;
    #pragma endscop
}
