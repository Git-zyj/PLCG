/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = arr_3 [18];
        var_16 = (max(var_16, (--19347)));
    }
    var_17 = ((1041727209 || (((var_8 ? (~var_2) : (((min(var_9, var_9)))))))));
    var_18 -= (min(((-((var_3 >> (var_8 - 5841908182721772546))))), ((max(0, (~var_1))))));
    #pragma endscop
}
