/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [15] = (((arr_2 [i_0]) ? 19840 : (arr_2 [i_0])));
        var_11 &= var_5;
        arr_4 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_12 = ((arr_2 [i_1]) ? (((arr_2 [i_1]) ? (arr_1 [i_1]) : var_7)) : ((107 ? ((0 ^ (arr_8 [i_1]))) : ((((arr_5 [i_1] [i_1]) ? 16861 : (arr_8 [i_1])))))));
        var_13 = (max(var_13, (((((-866760660 ? (arr_2 [i_1]) : (arr_2 [i_1]))) * (((arr_0 [i_1] [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_1]))))))));
        arr_9 [0] [15] = ((((((arr_1 [i_1]) ? (arr_2 [i_1]) : var_1)) * ((((arr_6 [i_1]) >= (arr_0 [i_1] [i_1])))))));
        var_14 = (min(var_14, (((!((((((16861 ? -16861 : (arr_7 [i_1])))) ? ((4096 ? var_2 : (arr_5 [i_1] [i_1]))) : var_3))))))));
        var_15 = (max((min(112, -1433633015)), (~var_2)));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_16 = -11700;
        var_17 = (max(var_17, (max(((((arr_10 [15]) == (arr_10 [i_2])))), ((-11672 ? (arr_10 [i_2]) : (arr_10 [i_2])))))));
        arr_12 [3] = (max((((~903861840) ? (arr_7 [i_2]) : var_0)), (((arr_1 [i_2]) ? (arr_1 [i_2]) : var_8))));
    }
    var_18 *= -16846;
    #pragma endscop
}
