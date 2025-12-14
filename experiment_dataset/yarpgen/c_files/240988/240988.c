/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((88 * -127) % (max(-var_8, (var_3 & var_13)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, var_11));
        var_16 = -2400858508571321701;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 += ((((max((max(7, 11)), ((var_13 ? 18446744073709551608 : var_11))))) ? 18446744073709551597 : ((((((18446744073709551608 ? 18446744073709551605 : 30)) >= (((var_13 ? var_3 : (arr_3 [3] [i_1]))))))))));
        var_18 += ((var_0 ? ((min((arr_2 [i_1]), (arr_2 [i_1])))) : ((((((arr_1 [i_1]) ? var_2 : var_0))) ? (max(var_1, 18446744073709551594)) : ((max(var_10, var_5)))))));
        var_19 = (min(var_19, (((-6 ? (min(11, (max(18446744073709551608, var_11)))) : 18446744073709551607)))));
    }
    var_20 *= var_13;
    #pragma endscop
}
