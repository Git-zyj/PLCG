/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_11 = (((arr_0 [i_0]) | (arr_1 [i_0])));
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [0] [i_0] = (((arr_1 [i_0]) ? (arr_0 [i_0 - 1]) : var_5));
        arr_4 [i_0] = ((-((~(arr_1 [i_0])))));
        var_12 = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 -= (var_2 | 0);
        arr_7 [i_1] = 1;
        arr_8 [i_1] = ((18446744073709551615 ^ ((((arr_5 [i_1] [i_1]) ? 18 : (arr_5 [i_1] [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_14 = (arr_1 [1]);
        var_15 = (arr_6 [i_2] [12]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_17 [i_3] = (((max((arr_16 [i_3] [i_3]), (arr_10 [i_3]))) & 0));
        arr_18 [i_3] [1] = (min((((arr_10 [i_3]) ? (max((arr_11 [i_3] [i_3]), var_7)) : var_7)), ((max(var_2, (0 & var_4))))));
        arr_19 [i_3] = ((-(arr_0 [i_3])));
        var_16 = (0 * 0);
        var_17 = (((min((arr_16 [i_3] [i_3]), ((max(23, var_5))))) / (((min(var_6, var_5))))));
    }
    var_18 = var_10;
    #pragma endscop
}
