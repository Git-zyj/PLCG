/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((var_6 ? (((((30952 ? 30939 : 30952))) ? (((-118 ? 24333 : var_4))) : (3412228391 << var_3))) : (((((var_8 == 208) < (var_12 == var_8)))))));
    var_16 = ((((max((((var_9 << (187 - 173)))), -var_10))) ? (~var_7) : -106));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 = (min(var_17, -24334));
        var_18 = (min(var_18, (((-(max((~var_11), (-28855 < var_5))))))));
    }
    var_19 = 277761626;
    #pragma endscop
}
