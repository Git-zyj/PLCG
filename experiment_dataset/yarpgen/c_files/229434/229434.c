/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        var_19 = ((!(((+(max((arr_1 [i_0]), var_1)))))));
        arr_4 [0] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_20 = (((arr_8 [i_1 - 1]) ? (((arr_5 [i_1 - 1]) ? (arr_5 [7]) : 0)) : (((-(((var_8 < (arr_7 [i_1] [i_1 - 1])))))))));
        var_21 |= (min(((((((arr_7 [i_1 - 1] [i_1 - 1]) / 1))) ^ (((arr_6 [i_1]) ? 7364346737305173879 : (arr_7 [i_1] [i_1 - 1]))))), ((((-32767 - 1) ? (min(1, var_11)) : (var_5 - var_7))))));
        var_22 = (((((0 ? var_0 : (arr_6 [i_1 - 1])))) || ((max(var_8, var_1)))));
        var_23 |= ((((min(32753, 2997508481))) ? (arr_6 [i_1]) : (((-692046257402220394 + 9223372036854775807) >> (2374924746269272269 - 2374924746269272217)))));
    }
    var_24 = (min((!var_11), (((min(var_1, (-9223372036854775807 - 1))) > ((min(-987598895, var_6)))))));
    var_25 |= var_3;
    #pragma endscop
}
