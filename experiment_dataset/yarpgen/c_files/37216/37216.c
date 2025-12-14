/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = -6898507777093122545;
    var_18 ^= ((~(((var_3 | 78) ? (var_3 - var_7) : var_10))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((119 ? 105 : 1));
        var_19 ^= (-1407350046239029229 - -10);
        var_20 *= (((((!(arr_3 [i_0]))) ? (82 - 107) : ((max((arr_1 [i_0]), 129))))));
    }
    #pragma endscop
}
