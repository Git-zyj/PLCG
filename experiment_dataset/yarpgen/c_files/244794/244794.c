/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((7588376 ? var_11 : var_15))), (((var_10 ? 31 : var_14)))));
    var_18 = ((var_2 ? ((((var_14 || var_6) ? ((-1 ? 7588376 : 7588400)) : (!7588374)))) : ((var_14 - (min(var_2, var_11))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = -764361006;
        var_20 &= (-2147483647 - 1);
    }
    #pragma endscop
}
