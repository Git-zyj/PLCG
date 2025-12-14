/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((var_0 ? (arr_2 [1] [1]) : ((((arr_0 [i_0]) ? var_3 : var_1))))) * -var_12));
        var_16 = ((~(64044 & 0)));
    }
    var_17 = (min(var_17, (((((((var_3 || var_0) ? (((var_15 ? var_7 : var_10))) : ((var_7 ? var_11 : var_8))))) ? (var_4 >= var_8) : (var_3 / var_13))))));
    #pragma endscop
}
