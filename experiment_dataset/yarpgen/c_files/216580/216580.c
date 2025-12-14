/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((-162091440 ? (min(var_4, var_5)) : (max(((2097151 ? var_3 : 13)), (~-17664)))));
    var_19 = -2436;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+((((arr_1 [i_0] [i_0]) > (arr_0 [i_0]))))));
        arr_4 [i_0] = (((1 / 90) + 785098785));
        var_20 = (max(var_20, var_7));
    }
    #pragma endscop
}
