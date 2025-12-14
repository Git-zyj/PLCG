/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, (((((-(arr_1 [10]))) * ((max((arr_1 [4]), (arr_1 [4])))))))));
        arr_2 [i_0] = 32574;
        var_21 += (((138 ? 154 : 127)));
    }
    var_22 = var_14;
    var_23 &= ((-13 ? (((var_1 > (min(109, var_14))))) : 41));
    var_24 = (var_5 ? var_17 : ((-var_6 ? -2147483647 : var_0)));
    #pragma endscop
}
