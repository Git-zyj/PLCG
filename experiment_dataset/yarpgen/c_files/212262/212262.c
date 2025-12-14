/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 &= ((((((var_14 == (arr_0 [i_0] [i_0]))) ? (max((arr_2 [i_0] [i_0]), (arr_1 [i_0]))) : var_14)) & -var_13));
        var_19 &= ((((((arr_1 [i_0]) > (arr_0 [i_0] [i_0])))) >> (((arr_0 [i_0] [i_0]) + 21))));
        arr_3 [i_0] = var_4;
        arr_4 [i_0] [i_0] = ((((min(var_4, (min(var_16, var_0))))) & ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_20 = 2556816510;
        arr_7 [i_1] [i_1] = (204783994 < 204783998);
        arr_8 [i_1] [i_1] = (((((4090183306 & (arr_5 [i_1]))) | (((204784007 ? var_0 : var_8))))));
        var_21 = (max(var_21, var_17));
        var_22 += (arr_5 [i_1]);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = ((!((max(204784015, 1738150772)))));
        var_24 = ((!(((var_2 ? (arr_11 [i_2] [i_2]) : var_16)))));
    }
    var_25 = max(var_2, (((var_10 ? var_15 : var_15))));
    #pragma endscop
}
