/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max((~var_16), ((min(65535, var_10)))))) < (min((max(var_7, 12992208546349351478)), var_1))));
    var_21 &= var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_22 = ((var_0 | (var_19 | var_3)));
        var_23 = -var_0;
        arr_2 [i_0] = (var_17 > 3080754786);
        var_24 &= (var_3 & var_19);
        arr_3 [i_0] = (((arr_1 [i_0]) == 9223372036854775807));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((~((-(min(1, var_17))))));
        arr_7 [10] = (min(var_5, (max((arr_0 [i_1]), 12992208546349351478))));
    }
    #pragma endscop
}
