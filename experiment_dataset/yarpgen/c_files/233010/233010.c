/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = ((-(((((arr_0 [i_0 - 1] [i_0 - 1]) + 2147483647)) >> (((arr_0 [i_0 - 1] [i_0 - 1]) + 1440490870))))));
        var_16 = ((~(arr_0 [i_0 - 1] [i_0 - 1])));
    }
    var_17 = (((min(196, var_9))));
    var_18 = 4837925896170496774;
    #pragma endscop
}
