/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 = ((-((3 ? -4384069116030835180 : 875895440380516737))));
        var_17 = (((4384069116030835179 >> (32505856 - 32505796))));
    }
    var_18 = ((((((var_3 ? var_11 : 1))) >= 4384069116030835180)));
    var_19 = (-3275 & var_6);
    var_20 = var_11;
    #pragma endscop
}
