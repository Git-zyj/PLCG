/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] &= ((var_11 ? (((2047 >= ((((arr_0 [i_0]) + 24776)))))) : (((-(arr_1 [i_0 - 2] [i_0]))))));
        arr_3 [i_0] [i_0] = ((1993628536 ? ((((((arr_1 [19] [i_0]) ? var_10 : (arr_0 [12])))) ? ((~(arr_0 [i_0]))) : ((18130 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))) : -24777));
    }
    var_13 *= (min((min(((var_5 ? var_6 : var_1)), var_11)), (!var_2)));
    #pragma endscop
}
