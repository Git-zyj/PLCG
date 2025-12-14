/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((var_16 + (max(170, var_8)))), var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : var_14);
        var_21 = (max(var_21, ((((((arr_0 [17]) ? (arr_2 [16] [i_0]) : -18978))) ? 1916355659 : 0))));
        arr_3 [i_0] [i_0] = ((0 != ((10 ? 10 : var_2))));
        var_22 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1] = ((((22057 + var_11) ? ((max(1, (arr_0 [4])))) : (arr_1 [i_1]))));
        var_23 = (min(var_23, (((((((arr_6 [18]) <= (arr_6 [4])))) << (((arr_6 [1]) - 4288)))))));
        arr_8 [i_1] = ((!((((max(var_14, 1)) << (!-77))))));
        var_24 ^= ((((!(((var_13 ? (arr_4 [i_1 + 1] [i_1 - 2]) : (arr_0 [17])))))) ? (arr_4 [i_1] [i_1 - 1]) : (arr_2 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_25 |= (max(1, 106));
        var_26 = (max(4294967295, var_8));
    }
    var_27 = (((max(var_11, (var_17 - var_6))) != ((max(((var_1 ? var_0 : var_3)), (max(var_0, var_14)))))));
    var_28 = (max(((((0 ? var_15 : 0)) << 0)), (max(var_4, ((14685988272701042354 ? var_5 : var_2))))));
    #pragma endscop
}
