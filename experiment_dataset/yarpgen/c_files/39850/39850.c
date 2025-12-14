/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-var_18 ? (9223372036854775807 || var_11) : (((((var_3 ? var_6 : var_0))) ? var_4 : ((var_0 ? var_4 : var_17)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = (arr_2 [14] [14]);
        arr_3 [i_0] = (max(((((((arr_1 [i_0]) ? 2772 : 62748))) ? (arr_0 [i_0 - 1]) : ((22341 ? (arr_1 [i_0]) : var_3)))), var_13));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] = (min((arr_5 [i_1 + 2] [i_1]), ((min((max((arr_4 [i_1]), (arr_5 [i_1] [i_1 + 2]))), ((-(arr_4 [i_1]))))))));
        arr_7 [i_1] = (max(62763, (((((max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) <= (22341 < var_14))))));
        arr_8 [i_1] = (min((max(((max(var_10, var_9))), (-32767 - 1))), ((max((arr_4 [i_1]), (arr_5 [i_1] [i_1 - 1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_21 = (max(var_21, (arr_4 [i_2])));
        arr_13 [i_2] = (((arr_11 [i_2]) ? (arr_5 [i_2] [i_2]) : (arr_2 [i_2] [0])));
    }
    var_22 = (!var_5);
    #pragma endscop
}
