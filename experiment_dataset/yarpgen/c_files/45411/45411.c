/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (var_7 != var_10);
    var_13 = (min(var_13, var_0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((arr_0 [i_0]) << (((((arr_1 [i_0]) | (arr_0 [i_0]))) - 17268503124835629025)))) : (((arr_0 [i_0]) << (((((((arr_1 [i_0]) | (arr_0 [i_0]))) - 17268503124835629025)) - 18446744073709543408))));
        var_14 = (max(var_14, ((min(((((max((arr_1 [4]), (arr_1 [2])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [0]) : (arr_0 [i_0]))))), (((arr_1 [10]) & (min((arr_0 [5]), (arr_0 [i_0]))))))))));
    }
    #pragma endscop
}
