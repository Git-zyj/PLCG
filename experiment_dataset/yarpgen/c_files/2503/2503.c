/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 &= (max(((((var_3 ? var_5 : var_9)) + (arr_1 [i_0]))), (arr_1 [i_0])));
        var_14 = ((((!(arr_2 [i_0] [i_0]))) ? (max((arr_2 [i_0] [i_0]), var_11)) : (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_15 = (var_7 / var_6);
            var_16 = (arr_6 [i_1]);
            var_17 &= (((arr_6 [i_2]) / (arr_5 [i_2])));
        }
        var_18 ^= var_6;
        arr_9 [13] = (arr_7 [i_1] [i_1] [i_1]);
    }
    var_19 = var_3;
    var_20 -= var_0;
    #pragma endscop
}
