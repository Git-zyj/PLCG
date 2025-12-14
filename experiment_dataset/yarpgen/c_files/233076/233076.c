/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 *= ((!((((arr_0 [i_0] [i_0]) ? var_6 : 127)))));
        arr_2 [i_0] = 127;
        var_12 = (arr_0 [i_0] [i_0]);
    }
    var_13 += (((((-(var_8 + var_7)))) ? (((var_0 < (~var_7)))) : (((!(!var_7))))));
    var_14 = var_5;
    #pragma endscop
}
