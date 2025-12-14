/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, 3486));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 &= ((~(min((arr_1 [i_0] [i_0]), var_5))));
        var_12 = ((var_5 << ((((arr_1 [i_0] [i_0]) <= (((arr_1 [i_0] [i_0]) ? var_3 : (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] = var_8;
        arr_7 [i_1] = ((var_9 && (arr_2 [i_1])));
    }
    #pragma endscop
}
