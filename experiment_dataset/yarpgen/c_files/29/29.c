/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((((arr_0 [i_0 + 4] [i_0 + 1]) ? (arr_3 [i_0 + 4] [i_0]) : -1)))));
        var_14 = (((arr_3 [4] [i_0 + 1]) & (((arr_3 [i_0 + 4] [i_0 + 2]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1) /* same iter space */
    {
        var_15 ^= (212 >= 10580293716431278915);
        arr_6 [4] = ((var_9 ? var_7 : ((max((arr_2 [4]), ((min((arr_1 [6]), var_2))))))));
        arr_7 [i_1] = (max((((arr_0 [i_1] [i_1]) & ((var_12 ? (arr_5 [i_1 + 3]) : 0)))), ((((((arr_2 [8]) ? var_7 : (arr_5 [i_1]))) > (arr_0 [i_1] [i_1 + 1]))))));
        var_16 = var_5;
    }
    var_17 *= (((((((min(var_7, var_4)))) / (min(var_10, var_0)))) >= ((((var_12 ? var_9 : var_12)) & (1218358400389621610 % var_0)))));
    var_18 = (!9339811147929953547);
    var_19 = (var_7 * 37788);
    #pragma endscop
}
