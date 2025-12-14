/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_1;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0]) ? (max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))));
        var_12 = (min((((var_10 && (arr_1 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 19783)) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((arr_3 [i_1]), ((max(var_3, (arr_5 [i_1] [i_1]))))));
        arr_8 [15] = (((((min(1695226154, -748209097)) + (arr_6 [i_1]))) == (min((7 / 1695226154), (((arr_6 [i_1]) ? var_3 : var_6))))));
    }
    #pragma endscop
}
