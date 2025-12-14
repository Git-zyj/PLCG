/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (((arr_1 [5] [i_0]) ? -104 : (arr_1 [i_0] [i_0])));
        var_17 = (((((127 ? (arr_1 [i_0] [i_0]) : 109))) ? (var_9 % 127) : ((-108 ? 17447561834816597372 : 1))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = (!var_15);
            var_19 = (4294967295 <= var_13);
        }
    }
    var_20 |= ((-(((max(var_12, var_11))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = (min(var_21, ((var_15 ? (((arr_4 [i_2] [i_2]) ? 1 : var_5)) : (!var_10)))));
        arr_7 [i_2] [i_2] = (((((var_11 ? (arr_1 [i_2] [i_2]) : (arr_5 [i_2])))) ? 17136326787216443527 : (((var_1 ? (arr_6 [i_2] [i_2]) : -459171070)))));
    }
    #pragma endscop
}
