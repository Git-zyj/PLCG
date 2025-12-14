/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_18 = var_8;
        arr_3 [i_0] [i_0 + 1] = ((!(arr_0 [i_0])));
    }
    var_19 = var_14;
    var_20 = var_4;
    var_21 = ((((var_9 << (var_8 - 33775))) == ((min((var_16 + -8511908953037461874), ((-19 ? 8511908953037461889 : 197)))))));
    var_22 = (min(((((var_17 ? var_12 : 8511908953037461884)) >> (var_8 - 33777))), var_14));
    #pragma endscop
}
