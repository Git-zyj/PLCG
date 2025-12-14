/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((~(1 && 1))) >= 1));
        var_19 -= ((max((arr_1 [i_0]), var_2)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = 1;
            var_21 = (((arr_0 [i_0]) ? 55103 : var_12));
            var_22 = (((3650305748 << (7908 - 7905))));
            var_23 = (((arr_1 [i_1]) > 119));
        }
    }
    var_24 -= (((((((1 ? 1 : 1))) ? 1 : var_16)) ^ ((min(var_6, 7905)))));
    var_25 = (max(var_9, -18121));
    var_26 ^= var_7;
    #pragma endscop
}
