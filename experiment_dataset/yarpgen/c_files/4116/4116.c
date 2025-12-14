/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 ? (((var_13 || var_8) ? (~var_0) : -var_2)) : var_2));
    var_17 = (max(var_10, (max(var_2, ((max(var_14, var_15)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((max((arr_2 [i_0]), (arr_3 [i_0]))) | (arr_3 [i_0])));
        var_18 = -6195;
        arr_5 [i_0] = (i_0 % 2 == 0) ? ((min((((arr_2 [i_0]) >> (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) - 2025895132706295255)))), ((min(((~(arr_0 [i_0]))), (arr_0 [i_0]))))))) : ((min((((arr_2 [i_0]) >> (((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))) - 2025895132706295255)) + 2573587816036191156)))), ((min(((~(arr_0 [i_0]))), (arr_0 [i_0])))))));
    }
    #pragma endscop
}
