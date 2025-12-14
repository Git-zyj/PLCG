/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_13 % (var_5 + var_0)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0] [i_0]) % var_1)) < var_15));
        var_19 = (((!10305) <= (arr_0 [i_0])));
    }
    #pragma endscop
}
