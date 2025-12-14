/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min((((65535 ? var_10 : (!1)))), 4174954665442511845)))));
    var_14 = ((((~var_8) * ((1 ? var_11 : var_10)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 7;
        var_15 = ((var_1 / (arr_0 [i_0] [i_0])));
        var_16 = var_12;
        var_17 -= var_7;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [i_1]);
        var_19 = 1;
        var_20 = ((!(arr_4 [i_1])));
        arr_5 [i_1] [6] = (max((((var_4 && ((min(var_0, (arr_1 [1]))))))), ((-((1 ? var_5 : var_9))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_8 [1] = var_12;
        arr_9 [i_2] [i_2] = (((((((!(arr_4 [i_2]))) ? (((1 || (arr_1 [i_2])))) : (!var_5)))) ? (((-(arr_7 [i_2])))) : (((arr_4 [i_2]) ? var_10 : var_6))));
        arr_10 [i_2] |= 1;
    }
    var_21 = var_5;
    var_22 = (max(var_22, var_12));
    #pragma endscop
}
