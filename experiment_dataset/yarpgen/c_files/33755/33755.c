/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 = (((((max((arr_0 [21]), (arr_1 [i_0 - 1]))) & (((var_15 >> (var_11 - 1463287650)))))) << ((((~(arr_0 [i_0 - 1]))) - 12410071560749564606))));
        var_19 = (((arr_0 [9]) ^ (((min((((3903 && (arr_1 [i_0])))), (arr_0 [i_0 - 2])))))));
    }
    var_20 *= ((var_9 == ((var_4 ? (46691 & 0) : (max(var_0, var_5))))));
    #pragma endscop
}
