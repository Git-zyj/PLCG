/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((var_2 && (((var_0 << ((((var_1 >> (var_7 - 50849))) - 1192463)))))));
    var_12 = (min(((((min(var_10, var_8))) ? var_9 : var_0)), var_5));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) ? (arr_0 [i_0]) : 87));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_0 [i_0]) < (arr_0 [i_0])));
            var_14 = (arr_1 [i_0]);
        }
    }
    #pragma endscop
}
