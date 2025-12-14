/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((max(24736, -25145))) ? var_6 : var_5)))));
    var_14 = (max(31165, (19040 && 404686431)));
    var_15 = ((~((-(!174)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = var_8;
        var_16 += max((((min(var_6, var_12)))), (((min(1885690398, var_1)) ^ (((var_1 ? var_11 : 100))))));
    }
    var_17 = (var_2 ? (24747 == 24736) : 1430341866866987994);
    #pragma endscop
}
