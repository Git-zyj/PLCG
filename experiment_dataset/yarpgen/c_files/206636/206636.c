/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, ((((arr_0 [i_0] [i_0]) ? 22696 : (arr_0 [i_0] [i_0]))))));
        var_13 = (arr_1 [i_0] [5]);

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_14 *= (!(arr_3 [i_1] [i_0]));
            var_15 = (arr_1 [i_1 - 2] [i_1 - 2]);
        }
        arr_4 [1] &= 127;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 |= var_2;
            var_17 = (min(var_17, ((((arr_5 [10]) >> ((0 ? var_4 : 1)))))));
        }
        arr_11 [i_2] [i_2] = (var_9 > var_10);
    }
    var_18 = var_8;
    #pragma endscop
}
