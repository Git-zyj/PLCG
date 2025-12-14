/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((((!(~var_8)))));
        var_17 = (!(13 ^ 18446744073709551615));
    }
    var_18 = (((((65516 ? var_5 : -92))) ? (~-var_13) : ((((max(var_6, -88))) ? (max(var_6, var_11)) : (((var_10 ? 42580 : 248)))))));
    var_19 = var_7;
    #pragma endscop
}
