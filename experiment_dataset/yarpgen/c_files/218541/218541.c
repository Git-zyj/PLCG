/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (((((((min(var_9, var_9))) ? ((min(23, var_6))) : ((var_10 ? 33 : var_14))))) ? (max(((min(var_10, 85))), ((0 >> (var_13 + 203855774))))) : var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [1] = (((arr_1 [i_0]) && var_2));
        arr_4 [20] = ((((-24210 ? 8568719747328827920 : 18446744073709551615)) ^ -1));
    }
    var_20 &= 0;
    #pragma endscop
}
