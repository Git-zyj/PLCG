/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((var_10 << (!var_0)))) % (((((var_2 ? var_14 : var_7))) ? (((var_7 ? var_5 : var_4))) : -var_15)))))));
    var_17 = ((((var_1 + (var_0 + var_15))) > (((min((var_4 || var_2), var_7))))));
    var_18 = (~-var_6);
    var_19 = (min(var_19, var_9));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_20 = ((((min(1750564998611259822, 6051655349670590951))) ? (min((min(var_12, (arr_0 [i_0]))), (((~(arr_0 [1])))))) : (((((min(var_1, var_1))) ? ((~(arr_0 [i_0]))) : ((var_7 ? (arr_1 [1]) : (arr_1 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((13748294879416324897 | ((((arr_1 [i_0 + 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1]))))));
        var_21 = (min(((~(!var_1))), ((((arr_1 [i_0]) <= (arr_1 [i_0 + 1]))))));
        arr_3 [i_0] = ((((min((arr_0 [i_0]), (arr_1 [i_0]))) > (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
    #pragma endscop
}
