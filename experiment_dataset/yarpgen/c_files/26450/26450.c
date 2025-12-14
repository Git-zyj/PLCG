/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(21265, var_2));
    var_21 = 0;
    var_22 = (-127 - 1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_23 = (((arr_1 [3] [9]) & (min(-1, ((var_19 ? (arr_1 [i_0] [i_0]) : 65513))))));
        var_24 = (min(var_24, 268427264));
        arr_4 [i_0] = 0;
        var_25 += (min((48485 - -91), (max(((var_3 ? (arr_2 [i_0]) : var_13)), 65535))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_26 &= 65518;
        var_27 = (arr_5 [i_1]);
        var_28 = (max(((((arr_7 [i_1]) ? (min(807081403, (arr_8 [i_1]))) : (((arr_6 [i_1]) ? 15 : (arr_8 [i_1])))))), ((0 % (arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_29 = (min(var_29, (arr_9 [i_2])));
        var_30 = (((arr_10 [i_2]) & (((arr_10 [i_2]) % (arr_10 [i_2])))));
    }
    var_31 |= (max((var_4 & var_18), ((min((max(var_13, -15084)), var_13)))));
    #pragma endscop
}
