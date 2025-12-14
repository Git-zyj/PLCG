/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(((var_4 ? var_11 : ((var_11 ? var_12 : var_1)))), var_5)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((((((-(arr_1 [i_0])))) ? (arr_0 [i_0]) : ((((arr_0 [i_0]) <= var_12)))))) || ((max((arr_1 [i_0]), ((~(arr_0 [i_0])))))));
        var_17 = ((1 ? -23 : 23));
    }
    var_18 = ((var_4 / (-23 % 27)));
    #pragma endscop
}
