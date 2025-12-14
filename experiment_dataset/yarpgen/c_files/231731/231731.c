/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-67108864 & 1073741822);
    var_16 = (((((var_12 - ((3221225474 >> (var_3 + 18969)))))) && 3726991643));
    var_17 = var_6;
    var_18 = var_9;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (arr_1 [i_0 + 1]);
        var_20 += min(1855989038, (max((~0), 567975662)));
        arr_4 [i_0] [i_0] = (((-1676008487 + -0) ? (((min(-126270844, (arr_1 [i_0]))) + (((min(var_10, (arr_0 [i_0 - 1] [i_0]))))))) : 1073741822));
    }
    #pragma endscop
}
