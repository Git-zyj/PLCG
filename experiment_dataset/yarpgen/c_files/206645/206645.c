/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    var_21 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_22 = ((-(arr_1 [i_0 + 2])));
        arr_2 [i_0] |= (((arr_0 [i_0] [i_0 + 2]) / var_2));
        var_23 += (((arr_0 [i_0 + 1] [i_0]) && var_14));
        var_24 = (((arr_1 [i_0 - 1]) > 2147483647));
    }
    var_25 = (max(var_25, (((((((1431509739 ? 2 : var_13))) ? (!var_8) : (-9223372036854775807 - 1)))))));
    var_26 ^= (var_13 - var_13);
    #pragma endscop
}
