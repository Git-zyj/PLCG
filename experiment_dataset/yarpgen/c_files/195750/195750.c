/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((var_11 ? var_5 : ((var_2 << (var_10 - 141)))))) ? (min(var_11, var_1)) : (~var_1)));
    var_16 ^= var_7;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((((min((arr_2 [i_0]), (arr_1 [i_0] [i_0]))) * ((max(-92416361, 21634))))), (arr_0 [i_0])));
        var_17 = ((!((min((!var_13), -var_11)))));
        var_18 -= (min((arr_0 [2]), (arr_2 [i_0 - 1])));
    }
    #pragma endscop
}
