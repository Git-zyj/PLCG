/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((8284 + 1715927960690963043), (max(-1715927960690963058, var_10))))) ? (((max(-1715927960690963058, 1715927960690963043)) & (((max(var_11, var_12)))))) : (max(((1715927960690963020 ? var_11 : var_13)), ((1715927960690963047 ? -1715927960690963051 : -1715927960690963059))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((var_9 & 1715927960690963051) ? ((1715927960690963047 ? -1715927960690963054 : var_6)) : ((1715927960690963043 ? 1715927960690963051 : 1715927960690963035)))), var_13));
        arr_3 [i_0] = (max(1715927960690963051, -1715927960690963048));
        arr_4 [i_0] = (max(var_3, (1715927960690963031 > 1715927960690963055)));
    }
    #pragma endscop
}
