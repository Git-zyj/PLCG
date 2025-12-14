/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_5 | var_3);
    var_12 = (max((((var_9 ? var_0 : (2097151 != var_7)))), ((((max(var_2, var_1))) ? var_6 : var_10))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? (((3997725596 != (arr_0 [i_0])))) : (arr_2 [i_0])))) ? 33787 : (arr_0 [i_0]));
        arr_5 [i_0] = ((((min((arr_3 [i_0]), 33787))) ? (((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [11]))) : (arr_3 [i_0])));
    }
    var_13 = (-9223372036854775807 - 1);
    var_14 = (max(var_10, ((max((var_6 <= 63), (var_3 > var_3))))));
    #pragma endscop
}
