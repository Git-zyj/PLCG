/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = 41139;
        var_15 = (min(var_15, var_2));
        var_16 ^= (((arr_0 [10] [i_0]) ? var_11 : 58486));
    }
    var_17 *= ((41139 ? (min(var_13, (min(7315693311782133005, 41143)))) : (!var_8)));
    var_18 = (max(var_18, (((var_11 * ((((min(var_8, -116))) ? ((max(-39, var_3))) : (max(var_2, var_11)))))))));
    #pragma endscop
}
