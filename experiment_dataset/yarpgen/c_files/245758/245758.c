/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 &= (((~(arr_0 [i_0]))));
        var_17 = ((0 ? 11417273429259967125 : (max(var_3, ((11417273429259967122 ? 7029470644449584488 : (arr_0 [9])))))));
    }
    var_18 = (min(var_18, var_6));
    #pragma endscop
}
