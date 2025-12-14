/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (var_3 > 63);
    var_19 = ((((!(((1073741820 ? 1 : -8936216048944000739)))))) ^ var_16);

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = var_8;
        var_21 -= (var_5 / ((18446744073709551579 ? -1073741820 : 2147483647)));
        var_22 = var_13;
    }
    var_23 += 1773030803;
    #pragma endscop
}
