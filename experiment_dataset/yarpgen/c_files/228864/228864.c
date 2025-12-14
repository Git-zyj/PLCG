/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(((251 / (arr_1 [i_0]))), (arr_1 [i_0])));
        var_14 |= ((((max((((arr_1 [11]) ? (arr_1 [i_0]) : -1)), (arr_1 [i_0])))) ? (min((((arr_0 [i_0]) ? var_7 : (arr_0 [10]))), (((var_11 ? (arr_1 [i_0]) : 5454))))) : ((max((arr_0 [i_0]), ((var_7 ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_15 = (max((!-1), (max((max((arr_0 [i_0]), 60081)), var_1))));
    }
    var_16 = (min(var_16, var_3));
    var_17 = (~var_12);
    var_18 = var_12;
    #pragma endscop
}
