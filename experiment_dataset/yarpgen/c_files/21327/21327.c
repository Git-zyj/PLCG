/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (min(var_20, (((((min((-9223372036854775807 - 1), 7949))) ? (~3281371793) : ((5476 ? 18841 : var_9)))))));
        var_21 = ((-1174342110 == ((-(!116787416)))));
        var_22 = (max(var_22, (((((min(4047852328, var_3))) ? 2147483647 : (var_9 > 29348))))));
        arr_2 [i_0] [i_0] = 65535;
    }
    var_23 = 19870;
    var_24 = (((var_5 | -16260) > (((var_1 & var_2) ? ((var_2 ? var_5 : 4067041289884283904)) : var_10))));
    #pragma endscop
}
