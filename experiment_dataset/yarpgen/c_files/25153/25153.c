/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!(((10754159453435724174 * (((min(-2, var_7)))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_19 &= -8;
        var_20 ^= (arr_0 [i_0 - 3] [i_0 - 3]);
        var_21 = (min(var_21, (arr_0 [i_0 - 2] [3])));
    }
    var_22 = var_5;
    #pragma endscop
}
