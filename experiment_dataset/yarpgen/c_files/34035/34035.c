/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((((1 ? 67108863 : -8961406750356083944))) ? var_6 : ((max(48, 1))))) + 2147483647)) >> (var_2 - 212)));
    var_18 |= ((var_3 ? (5144080994543157762 % var_7) : 1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(var_19, var_10));
        var_20 = (((var_16 ? 61884 : -113)));
        arr_2 [9] = (var_13 - 32);
        var_21 = (~var_10);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = ((92 == ((((~var_11) >= var_16)))));
        arr_7 [i_1] = ((((180 ? var_11 : ((var_15 ? var_9 : 76)))) >= (var_11 - var_4)));
        var_23 = ((var_7 == (-169406177 && -2122779674)));
    }
    var_24 = ((((max(var_13, (max(208, var_10))))) ? (((((var_15 ? 103 : var_6))) ? var_12 : (var_10 <= var_5))) : -112));
    #pragma endscop
}
