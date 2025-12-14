/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((1 ? (1 + var_3) : (var_1 - var_1))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 -= var_3;
        var_13 = (min(var_13, (((!(((~(arr_0 [i_0 + 1])))))))));
        var_14 = (((arr_0 [i_0 + 1]) || (((-(arr_1 [i_0]))))));
        var_15 = (((arr_1 [i_0 - 1]) << (((-32767 - 1) + 32771))));
        var_16 = -var_8;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1 + 2] [14] = ((((max(((((arr_2 [i_1] [i_1]) << (1 - 1)))), ((-2959176381982229520 ? 59813 : var_3))))) ? (min(((min(57, var_0))), -8287237831719564947)) : var_5));
        arr_5 [i_1] [i_1] = ((-(14039334129480728715 * 545590383812487938)));
    }
    #pragma endscop
}
