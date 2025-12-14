/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-16);
    var_13 ^= ((53 ? ((((0 ? var_3 : var_1)) % var_3)) : var_2));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = ((((171 ? ((((var_7 >= (arr_0 [i_0]))))) : ((var_8 << (((arr_0 [i_0]) - 129)))))) | ((((((((arr_2 [i_0]) && (arr_1 [i_0] [i_0])))) >= (arr_0 [i_0])))))));
        var_15 ^= var_9;
        var_16 = max(((((var_10 || (arr_0 [i_0]))))), ((50308 ? ((1 ? (arr_2 [i_0]) : var_4)) : ((min(1, var_4))))));
    }
    var_17 = var_10;
    #pragma endscop
}
