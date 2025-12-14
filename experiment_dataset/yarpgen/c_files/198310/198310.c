/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, ((((((~((~(arr_1 [i_0] [i_0])))))) ? (((var_0 <= -3056896756785677041) ? (((~(arr_0 [i_0])))) : 1302437700746333692)) : (((~((min((arr_0 [i_0]), (arr_0 [i_0]))))))))))));
        arr_2 [i_0] [i_0] = (~var_0);
        arr_3 [i_0] [i_0] = ((1 ? (max(0, var_3)) : (((max(32767, (arr_0 [i_0])))))));
    }
    var_16 = ((((((var_10 ? var_6 : var_12)) ? var_14 : ((var_9 ? 9 : var_9))))));
    var_17 = (max(var_0, (max((var_9 | var_0), var_9))));
    var_18 = ((var_0 ? (var_8 || -32) : (max((!var_12), (max(var_4, 1))))));
    #pragma endscop
}
