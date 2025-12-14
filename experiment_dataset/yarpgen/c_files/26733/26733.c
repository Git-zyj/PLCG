/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = ((((var_12 ? 1676711721 : var_11))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = (min(var_15, 18446744073709551598));
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    var_16 ^= 18446744073709551589;
    #pragma endscop
}
