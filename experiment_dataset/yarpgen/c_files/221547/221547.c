/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((min(4294967295, (arr_0 [i_0] [i_0]))), (((var_2 == (arr_0 [i_0] [9])))))), ((((max(1, 1)) ? ((var_4 ? 0 : 0)) : var_15)))));
        var_16 = ((arr_1 [i_0]) ? ((((((arr_2 [i_0] [i_0]) ? -7803 : (arr_0 [i_0] [i_0])))) ? ((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]));
        var_17 = (((((-(arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0]) - -18446744073709551615)) : (((((min(var_7, var_10))) ? var_7 : (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0)))))));
        arr_4 [i_0] [5] = var_12;
    }
    var_18 = (151 != 7151515264279566755);
    var_19 = (var_5 > (((var_12 * (var_14 & var_4)))));
    var_20 = (max(((5803746345933363989 << (1 - 1))), (min(var_13, ((var_8 ? var_7 : var_1))))));
    #pragma endscop
}
