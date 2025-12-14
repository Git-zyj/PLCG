/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 ^= var_3;
        var_12 = (arr_0 [i_0]);
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = var_9;
            var_13 *= ((224 ? (arr_5 [i_0] [i_0]) : var_8));
        }
        var_14 = (min(var_14, (-1800273581 && var_0)));
    }
    var_15 = ((-(((!(var_10 > var_10))))));
    var_16 = ((-((var_7 ? var_6 : ((2147483647 ? var_4 : var_3))))));
    #pragma endscop
}
