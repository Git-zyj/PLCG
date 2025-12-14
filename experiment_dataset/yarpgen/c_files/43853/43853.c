/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (min(var_14, -1521468857));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_15 *= (var_12 && 1);
        arr_4 [i_0] [i_0] = (((arr_0 [i_0 - 1]) ? var_8 : (arr_2 [i_0 - 3])));
        arr_5 [i_0 + 4] [i_0 - 1] = 131;
    }
    var_16 = (~var_6);
    #pragma endscop
}
