/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 9223372036854775807;
    var_19 = (((~(var_8 - 3720))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_0 [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0]))))));
        var_20 = (((((-((var_1 ? var_8 : (arr_0 [i_0] [i_0])))))) ? (min((arr_2 [i_0]), (min(var_13, (arr_1 [6] [17]))))) : (((arr_1 [i_0] [i_0]) ? (arr_1 [5] [i_0]) : (arr_1 [19] [9])))));
        var_21 = (min(var_21, ((+((((((arr_1 [i_0] [i_0]) ? 3720 : 37098))) ? (arr_0 [i_0] [i_0]) : ((var_4 ? (arr_1 [i_0] [i_0]) : 19))))))));
    }
    #pragma endscop
}
