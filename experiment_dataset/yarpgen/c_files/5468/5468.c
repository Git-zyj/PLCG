/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, var_5));
        arr_2 [i_0] = (((243 % -104) + -121));
        arr_3 [i_0] = ((1436943803 ? (var_8 == -109) : (2 + var_14)));
        arr_4 [11] = arr_0 [i_0];
        arr_5 [8] [3] = 126;
    }
    var_18 = (min(var_18, -522766228));
    var_19 = ((14546592719082861046 || (((var_9 || var_4) || var_15))));
    var_20 = 5663200962783724476;
    #pragma endscop
}
