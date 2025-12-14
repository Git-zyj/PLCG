/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_4;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [14] = ((~(((~var_10) ? (((arr_2 [i_0]) ? 0 : 27484)) : ((1 ? 104 : var_0))))));
        var_14 = (min(var_14, (arr_1 [i_0])));
        var_15 |= arr_0 [i_0] [i_0];
    }
    var_16 = (!var_11);
    #pragma endscop
}
