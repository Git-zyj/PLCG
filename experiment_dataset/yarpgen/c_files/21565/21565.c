/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((var_9 ? (((var_6 ? 0 : var_18))) : (min(var_1, var_16)))) & ((min(var_7, (min(var_2, 1)))))));
    var_20 = ((((var_7 & var_1) ? ((min(var_3, var_15))) : var_10)));
    var_21 = ((var_7 >= (((!var_3) ? (var_17 % var_11) : var_9))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_22 -= (((((max(-1659470913, -6)) == ((((arr_1 [4] [4]) <= var_14)))))) & ((min(((((arr_1 [i_0] [i_0]) >= (arr_0 [i_0] [i_0])))), (max(var_17, (arr_1 [i_0] [0])))))));
        arr_2 [9] = (min(var_0, (max((max(2, var_10)), ((((arr_1 [i_0] [i_0]) >= (arr_0 [i_0] [i_0]))))))));
    }
    #pragma endscop
}
