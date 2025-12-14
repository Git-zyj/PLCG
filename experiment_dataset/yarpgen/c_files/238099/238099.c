/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (var_14 * var_13);
        var_17 = ((((-21475992 / (arr_0 [i_0]))) * (((-var_4 + ((12727854877888359508 ? 8064 : var_4)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_18 = ((-(((arr_4 [i_1]) & (((arr_3 [i_1]) ? 0 : (arr_4 [5])))))));
        var_19 = (((((arr_3 [i_1]) ? (arr_3 [i_1]) : var_11)) << (((arr_3 [i_1]) - 10269421623977422537))));
    }
    var_20 = var_2;
    var_21 = var_12;
    #pragma endscop
}
