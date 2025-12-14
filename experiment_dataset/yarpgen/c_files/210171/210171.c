/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, var_2));
        arr_2 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = arr_4 [i_1] [8];
        var_21 -= var_12;
        arr_6 [i_1] [6] &= max(3458439656, (((((1758242501 ? 2512252216 : (arr_3 [i_1] [i_1])))) ? (max(var_1, var_14)) : (!2512252216))));
        var_22 = var_8;
    }
    var_23 = (1758242501 ? ((134217727 ? 233268848 : 2512252216)) : 2536724789);
    #pragma endscop
}
