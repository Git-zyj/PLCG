/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((41903 < ((((min(var_7, var_4)) >= (!var_3))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_2 [i_0] [i_0])));
        var_12 += (arr_2 [1] [i_0]);
    }
    var_13 = ((var_1 ? ((41928 ? var_6 : var_6) : 41916)));
    var_14 = var_0;
    var_15 = (min(41928, 23608));
    #pragma endscop
}
