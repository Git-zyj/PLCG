/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [12]);
        var_19 = (max(var_19, (((6345097391552439235 ? (var_15 != 32) : 31)))));
        arr_5 [5] [1] = ((4294967295 >> (var_3 - 3221930506)));
        arr_6 [1] [0] = (((arr_3 [i_0]) ? 1492194950 : 12101646682157112380));
        arr_7 [1] [1] = var_11;
    }
    #pragma endscop
}
