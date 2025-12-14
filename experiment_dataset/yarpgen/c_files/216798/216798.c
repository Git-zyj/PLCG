/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (max((((var_8 ? 40 : var_8))), var_7));
    var_17 += (0 < 702196838);

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = (((min(((13275188441698389236 <= (-32767 - 1)), (var_10 <= 702196838))))));
        var_19 = (max((arr_1 [i_0 - 1] [i_0 + 1]), (min((arr_1 [i_0 - 1] [i_0]), -11))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 = (((~3592770458) ? 19 : (((-11 ? 702196838 : 115)))));
        var_21 = var_11;
        var_22 = ((-(min(4885982561609457836, 37))));
    }
    var_23 = (min(var_23, var_9));
    var_24 *= ((((max(var_3, var_13))) ? (((min(191, (min(var_12, 28)))))) : (min(((min(-300778303, 19))), (max(95, var_11))))));
    #pragma endscop
}
