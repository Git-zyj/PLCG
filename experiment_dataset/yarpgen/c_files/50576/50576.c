/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [0] &= -1;
        var_11 = ((((((min(1, var_1)) < (((var_8 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))))))) >= -2));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_8 [20] [17] = ((!(~var_4)));
        var_12 = ((!((max(var_6, (arr_5 [i_1]))))));

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [13] = (arr_11 [i_1] [i_2] [i_2]);
            var_13 |= ((((max((arr_11 [18] [i_2 - 1] [i_2 - 1]), (arr_11 [12] [i_2 - 1] [i_2 - 1])))) ? ((((arr_11 [10] [i_2 - 1] [i_2 - 1]) ? (arr_11 [10] [i_2 + 1] [i_2 - 1]) : (arr_11 [6] [i_2 - 1] [i_2 + 1])))) : (min(var_5, var_8))));
        }
        var_14 = (max(((min(var_1, var_4))), (((arr_4 [i_1] [i_1]) >> (((((arr_1 [i_1]) | 1)) - 92))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_15 = var_10;
        arr_17 [i_3] = ((~(arr_7 [i_3 - 1])));
        var_16 = (((arr_1 [i_3 - 1]) | var_10));
    }
    var_17 = 189;

    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_22 [0] = (((arr_6 [i_4 - 2] [i_4 - 1]) << (((arr_6 [i_4 - 2] [i_4 - 1]) - 87))));
        var_18 = ((~((~(arr_19 [10] [4])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_25 [i_5] = ((1 ? 1 : var_8));
        var_19 += (((arr_9 [i_5] [i_5]) > var_9));
        var_20 = (((arr_23 [i_5]) / (((arr_1 [i_5]) + (arr_23 [i_5])))));
    }
    #pragma endscop
}
