/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (!1);
        arr_2 [i_0] = var_3;
        arr_3 [16] &= ((((min(var_16, (10118940038289973783 == 8327804035419577830)))) ? ((var_11 % (8327804035419577831 & 8327804035419577825))) : ((((1 <= ((12 * (arr_1 [0])))))))));
    }
    var_21 &= var_1;
    var_22 = (((((min(var_18, 8327804035419577830))) || (!var_17))));
    #pragma endscop
}
