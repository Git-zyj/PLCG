/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_0, var_14));
    var_20 += ((~var_11) != (max((min(var_16, var_18)), (var_8 - 20))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [7] = (var_11 != (((((arr_1 [i_0] [i_0 - 1]) >= var_11)))));
        arr_4 [i_0 - 1] &= (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
