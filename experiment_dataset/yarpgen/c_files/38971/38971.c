/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 *= 3628244812;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 &= (14632 ^ -8);
        var_21 = (max(var_21, (((-21739 && ((((arr_0 [i_0]) - 0))))))));
        var_22 = (((!var_13) >= (arr_1 [i_0])));
        arr_3 [i_0] = var_11;
    }
    #pragma endscop
}
