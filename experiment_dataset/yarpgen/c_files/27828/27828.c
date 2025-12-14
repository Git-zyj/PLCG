/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1324511281717122001;
    var_18 = ((~(max((var_5 % 6048), (((var_0 ? var_7 : var_7)))))));
    var_19 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] &= ((59487 ? ((174 ? -8148636697838599725 : 36318)) : 143));
        var_20 = ((3280898950 ? ((0 ? 8433550866184389611 : (arr_1 [i_0] [2]))) : (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
