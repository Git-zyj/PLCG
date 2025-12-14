/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 = (max(var_21, ((((arr_1 [i_0]) == (arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_22 = var_0;
        arr_4 [i_1] = 2592578967779136359;
        var_23 = (min((arr_3 [i_1]), var_0));
        arr_5 [0] [i_1] = ((max((arr_2 [i_1] [i_1]), (arr_2 [i_1] [i_1]))));
    }
    var_24 += ((var_14 ? 97 : ((((max(var_11, 97))) ? ((65535 ? 0 : var_1)) : 97))));
    #pragma endscop
}
