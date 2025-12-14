/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((!((max((!1023), (min(var_6, var_5)))))));
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (0 ? ((max(((56 ? var_1 : (arr_1 [21]))), ((((arr_1 [2]) && 8192)))))) : ((var_0 ? -66 : var_14)));
        var_18 *= ((((-(arr_0 [i_0]))) >= 4));
        var_19 += (((((-90 ? (arr_0 [i_0]) : (((arr_3 [i_0]) ? var_14 : var_8))))) || (((min(18446744073709551590, 8031))))));
        var_20 = (arr_0 [i_0]);
    }
    var_21 -= (max(((((min(1871, var_12))) > var_10)), ((((var_7 ? -1871 : var_0)) >= var_13))));
    #pragma endscop
}
