/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (min(7054880362955755401, var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (13 * 0);
        arr_3 [i_0] [i_0] = (((!488752634) <= 1));
    }
    var_14 = ((18446744073709551615 ^ (((-64 ? var_3 : 2969415608)))));
    var_15 = var_3;
    #pragma endscop
}
