/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(1, 249);
    var_14 = (max(var_14, var_11));
    var_15 = ((((var_10 ? (var_6 << var_3) : ((var_11 ? var_2 : var_8)))) | var_3));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_16 = var_6;

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_17 = (min(var_17, (arr_2 [17])));
            var_18 = (min(var_18, ((((arr_1 [i_0] [i_0 + 1]) / (min(113, 133955584)))))));
            var_19 -= (max(0, 10));
        }
    }
    var_20 = ((-30 ? -123 : 2147483647));
    #pragma endscop
}
