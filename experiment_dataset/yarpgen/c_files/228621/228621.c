/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((min(var_4, var_1)), ((max(1, 1))))) ^ ((((14015 <= 14015) != -var_10))));
    var_14 = var_2;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_15 *= (arr_1 [16] [16]);
        var_16 ^= arr_0 [i_0] [20];
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (min((arr_4 [i_1] [i_1]), var_7));
        var_18 = ((-(((-29435 ? 1 : var_10)))));
    }
    #pragma endscop
}
