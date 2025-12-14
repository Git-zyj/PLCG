/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_1 [i_0] [17]) : (((!0) ? var_0 : (arr_0 [i_0])))));
        var_10 *= (((arr_0 [i_0]) - (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_11 = (arr_0 [i_1]);
        var_12 -= var_8;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_13 = ((arr_5 [i_2 + 2]) ? (arr_3 [16]) : (arr_3 [4]));
        var_14 = (((arr_4 [i_2] [i_2 - 1]) < var_6));
        arr_9 [i_2] [i_2] = (((arr_8 [i_2 + 1]) != var_2));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_15 *= (arr_1 [i_3] [i_3]);
        var_16 = (max(var_16, (arr_0 [i_3])));
        var_17 += var_1;

        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            arr_14 [i_3] [i_4] = (arr_7 [i_3] [i_3]);
            var_18 -= (arr_1 [i_4 + 1] [i_4 - 3]);
            var_19 -= var_7;
            var_20 = ((var_2 / (127 && var_5)));
            arr_15 [i_4] = ((arr_3 [i_3]) == var_0);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 -= ((arr_3 [i_3]) != var_4);
            arr_18 [i_3] = 2147483647;
            var_22 *= (arr_5 [i_5]);
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_23 = (min(var_23, var_2));
            var_24 = (max(var_24, var_3));
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_25 -= (((var_0 % var_3) == ((((arr_6 [i_7]) >> (2174151133201024143 - 2174151133201024137))))));
            arr_25 [i_3] [i_3] [i_3] = ((var_4 / (arr_8 [i_3])));
        }
    }
    var_26 = (min(var_26, var_8));
    #pragma endscop
}
