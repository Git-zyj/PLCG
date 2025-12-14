/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((((~(var_10 != var_0))) & var_5));
    var_16 = (var_9 / var_6);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (((((arr_0 [1]) * (arr_0 [i_0]))) != (var_8 & var_2)));
        arr_2 [i_0] [i_0] = ((((~(250030639 ^ -2038796147638270141))) >> (((2914166322 & var_8) << (262143 - 262112)))));
    }
    #pragma endscop
}
