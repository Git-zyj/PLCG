/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 &= 19387;
        var_19 = 18446744073709551615;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_20 = (((var_14 || var_14) ? 1 : 76));
            var_21 = (max(var_21, (~65527)));
            arr_6 [i_0] [i_1] = (var_4 ^ 65527);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_2] = ((102 ^ (arr_1 [i_0] [i_2])));
            arr_11 [i_0] = (((arr_9 [i_0] [i_2]) ? var_2 : (arr_9 [i_0] [i_2])));
            var_22 = 99;
        }
        arr_12 [i_0] [i_0] = ((var_11 ? ((65527 ? (arr_2 [i_0]) : var_17)) : var_16));
    }
    var_23 |= var_9;
    #pragma endscop
}
