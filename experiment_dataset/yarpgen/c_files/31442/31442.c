/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max((((!(-9849 | 220)))), (~var_5)));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_14 = 7941294653560412905;
        var_15 = (max(var_15, (((-((-656121252144980909 ? ((var_10 ? (arr_1 [i_0] [19]) : 3493293613)) : 105692852)))))));
    }
    #pragma endscop
}
