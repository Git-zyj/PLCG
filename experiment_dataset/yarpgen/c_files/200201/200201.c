/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_14, 26));
    var_19 = 13;
    var_20 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_21 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_22 = var_6;
        arr_2 [i_0] = ((!(arr_0 [i_0] [i_0])));
        var_23 = (min(var_23, (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_24 &= ((-(arr_4 [i_1] [i_1])));
        var_25 = (arr_4 [i_1] [i_1]);
        var_26 = (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : ((var_5 ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))));
    }
    var_27 &= (((((var_12 || 206) && ((min(1727681710, var_7))))) || var_7));
    #pragma endscop
}
