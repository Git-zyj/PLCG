/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (max((((((8070928961037063699 ? var_2 : (arr_0 [i_0])))) ? (((arr_1 [12]) ^ (arr_1 [i_0]))) : (((arr_2 [i_0]) * var_4)))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (((!(arr_1 [i_0]))))))));
        var_11 = (((var_9 && (arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = ((2305842940494217216 ? ((((var_3 == ((min((arr_4 [i_1]), var_0))))))) : var_3));
        arr_5 [1] = 4912060311158998694;
    }

    for (int i_2 = 4; i_2 < 7;i_2 += 1)
    {
        var_13 = var_5;
        arr_8 [1] [i_2] = 8070928961037063699;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_14 = ((-8070928961037063700 ? ((24036 ? 16140901133215334400 : (arr_11 [i_3]))) : var_0));
        var_15 |= (~50276);
    }
    var_16 = ((((min(((var_5 ? var_0 : var_3)), 789948833))) ? var_8 : (((((-4912060311158998695 ? 16140901133215334399 : 255))) ? (max(var_9, var_8)) : var_7))));
    var_17 = ((((((4912060311158998702 - 0) ? ((var_4 ? var_8 : var_4)) : var_8))) ? (max(var_1, 1)) : (((var_3 >> 0) ? ((120 ? 830273817883820786 : var_1)) : var_6))));
    var_18 = (min(var_18, var_8));
    #pragma endscop
}
