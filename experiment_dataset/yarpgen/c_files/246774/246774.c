/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!((((max(var_1, 113))) < ((min(var_1, 45))))));
    var_21 = var_14;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) <= var_8));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_22 = (-67 > 56);
            var_23 = (min(65280, var_17));
        }
        var_24 = 8494879195507638396;
        arr_5 [i_0] = (arr_4 [i_0]);
    }
    var_25 += ((!(1 + var_7)));
    var_26 = ((((var_17 ? ((var_7 ? var_3 : var_9)) : var_7))) ? (((min(0, var_17)))) : (min(((0 ? 0 : 1)), var_7)));
    #pragma endscop
}
