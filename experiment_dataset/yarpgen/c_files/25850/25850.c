/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 *= ((!((!(arr_1 [i_0])))));
        arr_3 [i_0] = ((~(!64)));
    }
    var_19 = ((-(max((~488820806824318880), var_17))));
    var_20 = var_11;
    #pragma endscop
}
