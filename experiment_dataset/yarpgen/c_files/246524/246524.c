/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = ((((0 * ((min((arr_2 [i_0] [i_0]), var_0)))))) ? (min(4737833915437868143, (arr_1 [i_0] [i_0]))) : var_14);
        var_18 *= ((min(var_2, 0)));
        arr_4 [i_0] [i_0] |= ((+(min(((((arr_0 [i_0] [i_0]) ? var_10 : 64195))), ((7334614256394187737 ? var_8 : 254))))));
    }
    var_19 = (min(var_19, ((-(max((var_13 - -1768816488), (min(var_5, var_6))))))));
    #pragma endscop
}
