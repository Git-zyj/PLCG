/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 -= (min((arr_0 [1]), 27));
        var_14 = var_5;
        var_15 += (((arr_0 [6]) ? var_7 : (((arr_0 [12]) ? 1 : (arr_0 [2])))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 2] [i_1 + 1] |= (((min(96, var_7))));
        arr_7 [i_1 + 2] = ((((min(4294967294, 287667426198290432))) || (((127 ? 536870896 : 562949953421311)))));
        var_16 = (max((((!(arr_1 [i_1 - 2])))), (~-64)));
        arr_8 [i_1 + 1] = ((~(arr_0 [8])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_17 = ((!((((max(var_5, var_4))) && 202))));
        arr_11 [15] [i_2] = (min((((arr_1 [i_2]) || (((arr_2 [i_2] [i_2]) >= -1)))), (!2021962266)));
        arr_12 [3] [1] = (!(arr_9 [i_2]));
    }
    var_18 *= ((((((((3474527229325543724 ? 16777215 : var_2))) ? var_10 : 15))) ? (((var_11 >= 32767) ? var_0 : var_9)) : var_10));
    var_19 = ((((((~var_6) | ((1125899906842623 ? 4294967281 : var_3))))) ? var_0 : var_2));
    #pragma endscop
}
