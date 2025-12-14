/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? (((min(var_6, var_2)))) : (min((min(var_7, var_12)), (~var_5)))));
    var_14 = (min(var_6, ((~(min(var_11, 1288792764616081952))))));
    var_15 = (((var_8 && 0) | ((((var_6 ? var_12 : 1288792764616081974))))));
    var_16 |= 93;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(15122368598060101220, (((~((min(-9163, 221))))))));
        var_17 = (arr_2 [i_0]);
        var_18 = (max((((arr_1 [i_0] [3]) ? 1617951608 : (max((arr_2 [i_0]), (arr_1 [i_0] [i_0]))))), ((((1 * var_9) ? (arr_0 [i_0] [i_0]) : var_5)))));
        arr_4 [i_0] = (!-9162);
        arr_5 [i_0] = (((arr_2 [i_0]) ? (min((min(-2020098006023097756, 126)), (var_0 * var_2))) : (((min((var_1 || var_2), var_2))))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 = var_7;
        var_20 = ((((min((arr_6 [i_1]), (arr_7 [i_1 - 1])))) ? (arr_7 [0]) : ((((((var_1 ? -1617951593 : -31))) ? var_10 : var_2)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = 17157951309093469663;
        var_21 = (~-8175374571515590923);
    }
    #pragma endscop
}
