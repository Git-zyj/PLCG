/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((1561448211 ? 62 : 0)), (~255)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [0] [0])))) ? 657768097 : (arr_1 [i_0] [i_0 - 1]))), (((!(arr_0 [i_0]))))));
        var_15 = (min(var_15, (((((((-9223372036854775807 - 1) ? 0 : 27))) ? (max((arr_0 [2]), 616403670)) : ((~(arr_0 [2]))))))));
        arr_3 [i_0] = ((8 ? ((-860851314 ? 95 : 13608028555685060996)) : ((max(var_7, (arr_1 [i_0 + 2] [i_0 + 2]))))));
        arr_4 [8] &= (((((~(arr_1 [i_0 + 1] [i_0 + 1])))) ? ((max(var_6, (arr_1 [i_0 + 2] [i_0 - 1])))) : (~4568118025981431177)));
    }
    var_16 = (max((((var_11 ? var_2 : 144))), ((var_10 ? var_6 : var_8))));
    var_17 = (((((var_2 ? var_5 : var_6)) ? var_2 : var_2)));
    #pragma endscop
}
