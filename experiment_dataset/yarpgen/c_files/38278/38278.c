/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-((max(var_8, 255)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, ((((~(arr_2 [i_0])))))));
        var_14 = (min(var_14, ((min(((((((1 ? (arr_1 [i_0]) : var_11))) + (min(3385059447, 22))))), 9591446098667313476)))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        var_15 = var_10;
        var_16 &= ((((max(var_3, (((arr_0 [i_1] [i_1]) ? var_10 : var_8))))) <= (((var_5 + 3385059461) * (arr_0 [i_1] [i_1 + 2])))));
        var_17 = ((-(arr_6 [i_1 - 1])));
        var_18 = (((((((!(arr_3 [i_1]))) ? (arr_1 [i_1 - 1]) : (arr_2 [i_1])))) || 3385059447));
        var_19 = (min(8692948326014700508, ((-(arr_3 [i_1 + 1])))));
    }
    #pragma endscop
}
