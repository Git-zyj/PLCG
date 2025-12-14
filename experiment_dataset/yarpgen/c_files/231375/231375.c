/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_20 -= (arr_2 [i_0 - 3]);
        var_21 ^= (arr_1 [i_0]);
        var_22 = (min(var_22, (arr_2 [i_0 + 1])));
    }
    var_23 = (((((var_0 ? -1466644909 : (max(var_2, var_7))))) ? (var_0 + var_12) : ((var_19 ? -var_7 : ((var_17 ? 1 : var_7))))));
    var_24 = (min(var_24, ((((((~((var_16 ? 1 : 4100072200))))) ? (((~(!34359721984)))) : (min((~var_1), (((-9223372036854775807 - 1) ? 34884 : var_8)))))))));
    #pragma endscop
}
