/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((var_3 ? 26446 : 26446))) < (max(var_12, var_8)))))));
        arr_2 [i_0] = ((((min(var_8, (max(var_5, var_14))))) ? var_18 : ((((max(511, var_16))) ? (min(var_6, 1001627968)) : 39089))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_4;
        var_22 = ((var_19 ? var_17 : var_15));
    }
    var_23 = ((var_17 + (max(var_10, ((26446 ? 1344671705 : 45779))))));
    #pragma endscop
}
