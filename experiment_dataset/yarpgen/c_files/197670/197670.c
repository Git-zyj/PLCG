/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((-var_5 ? var_4 : (min((min(var_5, var_9)), (~-61))))))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_14 = (min((!-78), -78));
        var_15 = ((((!(!-55))) ? (((arr_2 [2] [i_0 + 1]) ? var_2 : (arr_2 [i_0 + 2] [i_0 + 1]))) : -74));
        var_16 = ((((min((arr_1 [i_0] [i_0 + 2]), (arr_1 [4] [i_0 + 1])))) ? (((((min(-123, (arr_1 [7] [4])))) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_2 [0] [i_0])))) : (((arr_0 [i_0]) ? (min(var_11, var_10)) : ((min(-1, var_8)))))));
        var_17 = (((((!((min((arr_1 [i_0] [i_0]), 18182284562284689145)))))) >= ((264459511424862471 ? 53 : (arr_2 [i_0] [9])))));
    }
    var_18 = ((((((((-78 ? 4212437620 : var_1))) ? var_0 : -var_7))) ? var_1 : (((var_7 <= var_12) * -1255107547))));
    #pragma endscop
}
