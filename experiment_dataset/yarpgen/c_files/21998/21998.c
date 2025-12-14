/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((~(min(23704, -8784365260947950821)))) & (((min((!var_9), var_9))))));
        var_10 = ((!(~-2486211175518791202)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = ((!((!(arr_5 [i_1])))));
        var_11 = ((((((arr_4 [i_1]) - var_9))) ? (min((arr_5 [i_1]), (arr_3 [i_1]))) : (((-(arr_4 [i_1]))))));
    }
    var_12 = var_9;
    var_13 = ((((var_4 ? -var_5 : var_2)) + (((var_3 ? var_7 : var_9)))));
    var_14 = ((((((var_9 ? var_7 : var_4)))) ? (((min(-13751, 0)))) : (min((((3 ? 341134135 : 25))), (min(106, var_2))))));
    #pragma endscop
}
