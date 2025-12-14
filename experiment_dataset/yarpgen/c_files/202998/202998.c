/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 & (~var_2)));
    var_13 = max(((((max(23399, 4294967295))) ? var_7 : -3743619731)), (!18446744073709551615));
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = ((~((~(arr_1 [i_0])))));
        arr_3 [i_0] = ((!(~-27402)));
        var_16 = (((arr_0 [i_0]) * (var_10 == 32114)));
        arr_4 [i_0] = (!var_7);
    }
    #pragma endscop
}
