/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((!(144115188075855872 & 254)))) <= -2313));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 += var_12;
        var_18 &= (arr_1 [i_0] [i_0]);
    }
    var_19 += (max(((((max(10, var_0))) ? (12038 % -2339) : var_4)), ((~((-108 ? 120 : 125))))));
    var_20 = ((min(var_3, 17392)));
    var_21 = 12;
    #pragma endscop
}
