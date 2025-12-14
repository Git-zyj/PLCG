/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_0;
    var_14 = ((var_2 / ((-var_8 ? (var_3 / var_11) : 8031))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = var_7;
        var_16 = -var_9;
        var_17 -= ((((135291469824 ? -23378 : 4294967295)) <= var_0));
        var_18 = (min((((!((max(4495, 1531375292)))))), -4610560118520545280));
    }
    #pragma endscop
}
