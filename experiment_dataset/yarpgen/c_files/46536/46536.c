/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 0 : (min((arr_1 [i_0]), -9135453121662788174))))) ? ((1 ? (((min(233, (arr_1 [i_0]))))) : (((arr_1 [i_0]) ? var_10 : (arr_1 [i_0]))))) : (((min((max(1, (arr_0 [i_0]))), (max((arr_1 [i_0]), var_4))))))));
        arr_3 [i_0] [i_0] = (min(((min(((min(1, 1))), ((var_7 ? var_1 : (arr_1 [i_0])))))), (min(4528460849514754508, ((max(var_3, (arr_1 [i_0]))))))));
        var_18 = 1;
        var_19 &= ((min(((arr_1 [i_0]), (((arr_1 [i_0]) ? 1 : var_7))))));
        arr_4 [i_0] = (((min(((min((arr_1 [i_0]), (arr_0 [i_0])))), ((3465754653 ? (arr_1 [i_0]) : var_10))))) ? (max((((arr_1 [i_0]) ? var_0 : 1)), ((max(1, var_17))))) : (((((min((arr_1 [i_0]), var_15))) ? ((max(1, var_14))) : (arr_0 [i_0])))));
    }
    var_20 = (max((max(((1 ? 1 : 0)), 1)), ((1 ? ((1 ? 1 : 1)) : 1))));
    var_21 *= (max(((min((max(26716, var_12)), ((min(var_15, 1)))))), (min(((max(var_14, var_0))), ((1 ? var_6 : var_0))))));
    var_22 = ((min((min(var_5, var_5), ((max(1, var_1)))))));
    var_23 = (min(var_23, ((max(1, (((max(175, 1)))))))));
    #pragma endscop
}
