/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_10 = ((-(arr_1 [i_0] [i_0])));
        var_11 = (max(((78 ? (arr_3 [i_0 + 4]) : (arr_2 [i_0 + 1]))), ((max((arr_3 [1]), var_0)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_12 = var_4;
            var_13 ^= 8534903306186947381;
            var_14 = (min(var_14, 8));
            var_15 = (max(var_15, -267335643676208002));
            var_16 = (arr_9 [i_2 - 1]);
        }
        var_17 -= (((arr_5 [i_1]) && (((28897 ? var_1 : 2147483647)))));
        arr_10 [i_1] [11] = -var_6;
        arr_11 [i_1] = -400346376;
    }
    var_18 = ((min(var_0, (max(var_7, var_0)))));
    #pragma endscop
}
