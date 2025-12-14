/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, (~var_11)));
        var_16 = (arr_0 [i_0] [i_0]);
    }
    var_17 = (max(((min(var_13, -var_2))), var_3));
    var_18 = ((!(((var_13 ? ((0 ? -6682587760207257626 : -1163066227)) : (2782591280984384711 % 2147483647))))));
    #pragma endscop
}
