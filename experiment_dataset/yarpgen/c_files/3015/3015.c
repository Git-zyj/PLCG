/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -5758986507852257347;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_12 = ((~(((~var_5) ? (((arr_0 [i_0 - 2]) ^ 696489663)) : var_2))));
        arr_2 [i_0] = (((arr_0 [1]) ? (arr_1 [19]) : (((arr_0 [i_0 - 1]) + ((696489669 & (arr_1 [i_0 - 1])))))));
    }
    var_13 *= (min(var_2, var_9));
    var_14 = (max(var_14, ((((((min(var_2, (!var_4))))) * (min((((var_2 ? var_6 : var_9))), var_3)))))));
    var_15 = ((var_6 ? var_3 : (696489661 | -696489687)));
    #pragma endscop
}
