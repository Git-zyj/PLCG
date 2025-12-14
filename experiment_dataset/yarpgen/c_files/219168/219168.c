/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -9656;
    var_17 = ((var_3 || (((91 ? (min(2085896060, 18446744073709551615)) : ((min(var_7, var_7))))))));
    var_18 = var_0;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 *= (((+((var_7 ? (arr_1 [i_0 - 1] [i_0]) : 26679)))));
        var_20 = (((arr_1 [i_0] [i_0]) / (arr_0 [i_0] [i_0 + 2])));
        var_21 = (max(var_21, ((((var_15 | var_7) ? ((17592186044415 | (arr_0 [i_0] [i_0]))) : (((min(246, 26679)))))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (min((min((8388096 < 3219309460843683784), -853538692)), ((min(0, (((21459 <= (arr_1 [i_1] [i_1])))))))));
        var_23 = (min(var_15, 9545));
        var_24 = (max(var_24, ((((((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : -89)) - (((arr_1 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))))))));
    }
    #pragma endscop
}
