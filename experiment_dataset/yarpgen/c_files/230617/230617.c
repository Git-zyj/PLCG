/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_20 = (min((((arr_3 [i_0]) * (arr_0 [i_0]))), (((arr_3 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_4 [i_0] = ((~(arr_0 [i_0])));
        var_21 = (min(var_21, (((+(max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))))))));
        var_22 = (max((((arr_2 [i_0] [i_0]) <= ((max((arr_0 [8]), (arr_2 [i_0] [i_0])))))), (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_23 = var_2;
        arr_9 [i_1] [i_1] = var_8;
        arr_10 [i_1] = (((arr_2 [i_1] [i_1]) > var_14));
        arr_11 [i_1] [i_1] = ((124 ? (arr_0 [i_1]) : ((var_11 ? (arr_1 [i_1]) : var_8))));
        var_24 &= ((arr_8 [i_1]) << (((arr_8 [i_1]) - 3246404865017401188)));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_25 = (max(var_25, 128));
        arr_14 [i_2] [i_2] = (((18446744073709551609 < 20) != (((!(arr_0 [6]))))));
        arr_15 [12] = ((145 * (((arr_0 [i_2]) * ((-(arr_1 [i_2])))))));
    }
    var_26 = var_10;
    var_27 = var_17;
    #pragma endscop
}
