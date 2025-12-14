/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= min(4294967295, ((-9223372036854775801 ? var_3 : (((54 ? 1828170943 : 512))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((~(arr_0 [i_0])));
        var_14 = ((~(arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = 1083556812;
    }
    var_15 |= var_11;
    var_16 = ((max((!var_0), (var_10 != var_8))));
    var_17 = ((-((1305088347 ? var_9 : ((var_11 ? var_4 : var_7))))));
    #pragma endscop
}
