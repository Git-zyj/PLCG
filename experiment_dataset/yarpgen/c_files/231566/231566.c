/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_9;
    var_14 = ((var_1 ? ((var_1 ? ((var_2 ? var_10 : var_7)) : 5533960336952174855)) : (max((max(var_6, var_10)), 5533960336952174855))));
    var_15 -= var_5;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (min((((3215189966 ? var_5 : var_1))), 5533960336952174855));
        var_17 = max((max(31, 1079777313)), ((25508 ? var_11 : var_6)));
        var_18 = (max((((3035641592 ? -28813 : var_8))), var_2));
    }
    #pragma endscop
}
