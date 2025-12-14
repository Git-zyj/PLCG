/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 &= ((var_18 < (arr_0 [i_0])));
        var_20 += ((31 ? 1175187906 : 3119779389));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = (max(var_21, (arr_2 [i_1])));
        arr_4 [i_1] = (arr_0 [i_1]);
        arr_5 [i_1] = ((((((arr_0 [i_1]) ? 31 : ((1 ? (arr_2 [i_1]) : var_10))))) ? (((139 % (arr_0 [i_1])))) : (arr_1 [i_1])));
    }
    var_22 = (var_5 | var_8);
    #pragma endscop
}
