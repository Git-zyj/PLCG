/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2147483648;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((((((min(var_1, var_13)) % (((var_14 ? var_16 : 1)))))) ? (max(var_9, var_7)) : ((145 ? (var_1 ^ 16) : 253))));
        arr_2 [i_0] = (((max(var_10, ((min(var_3, var_0))))) >> ((((var_15 ? var_8 : ((min(var_6, var_5))))) - 96))));
    }
    var_19 = 4398046511088;
    #pragma endscop
}
