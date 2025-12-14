/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = (((min(var_2, ((max(172, var_6))))) < (((((181 ? (arr_0 [i_0 + 1]) : 172)))))));
        var_20 = ((-(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 -= (((((181 ? 1223421905 : (((arr_4 [i_1]) - var_12))))) ? ((max(1770521005, var_3))) : (((((2524446296 ? 3514535665 : (arr_0 [i_1])))) ? var_6 : 26981))));
        var_22 ^= 780431630;
        var_23 = 238;
        var_24 = (min(var_24, ((((((arr_2 [i_1]) ? (arr_2 [i_1]) : 18156523552906703644))) ? (((var_14 ? 52 : (258849330 * 1558304722)))) : ((-((18446744073709551612 ? 1374515031555986290 : var_10))))))));
        arr_6 [i_1] = 30;
    }
    var_25 = (((((1 ? 1122076988 : 72))) ? ((var_17 ? (((-114 ? var_16 : 46649))) : (min(219, var_11)))) : var_14));
    #pragma endscop
}
