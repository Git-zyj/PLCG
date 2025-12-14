/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (1 | 1);
    var_18 = (((((2724739692 != var_5) != 21)) ? var_11 : ((127 ? ((var_7 ? var_11 : var_8)) : (36236 & var_13)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = ((25 << (var_14 - 928344182)));
        arr_2 [i_0] = -6;
    }
    #pragma endscop
}
