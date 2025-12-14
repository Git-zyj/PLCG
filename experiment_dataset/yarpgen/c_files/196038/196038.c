/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_3;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((max(6736508527976286583, var_14)) <= (!1));
        var_16 = -2633481026;
    }
    var_17 -= 3379890106329014076;
    var_18 *= (~214867745);
    var_19 = var_11;
    #pragma endscop
}
