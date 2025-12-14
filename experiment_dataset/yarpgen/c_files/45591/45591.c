/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_13 = (arr_1 [1]);
        arr_2 [i_0] = (((max(((122 ? (arr_1 [i_0 - 1]) : -122)), (arr_0 [i_0])))) && (arr_1 [1]));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_14 = (max((-106 / 120), (((arr_4 [i_1 - 3]) ? (arr_4 [i_1]) : (((arr_4 [i_1]) ? -117 : -121))))));
        var_15 = (((((+((-123 ? (arr_3 [i_1]) : 120))))) ? (((var_11 ? (((-1272657918 ? -117 : 1))) : (min(255, 4294967272))))) : (((65514 ? (arr_4 [i_1]) : var_6)))));
    }
    var_16 &= (max((6144 == var_10), 1));
    #pragma endscop
}
