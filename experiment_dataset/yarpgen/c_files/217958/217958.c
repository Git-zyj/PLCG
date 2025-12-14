/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((-var_2 >> (-var_4 + 26013)))));
    var_20 = ((~(max(var_0, var_0))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = ((~(arr_1 [i_0] [i_0 - 1])));
        var_22 = ((~(arr_0 [i_0 + 3])));
    }
    #pragma endscop
}
