/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!var_4) ? var_5 : var_5)) * var_2);
    var_11 = (var_0 & var_6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_4 | (arr_0 [i_0] [i_0])))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_12 = (min(var_12, (arr_0 [2] [1])));
        var_13 = ((arr_0 [20] [i_0]) && ((max((arr_0 [2] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0])))) ? (arr_0 [3] [3]) : (max((arr_1 [6]), (0 / 1)))));
    }

    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = max((!3777669079), (!var_0));
        var_14 = ((((((((arr_6 [i_1] [i_1]) ? var_0 : (arr_1 [i_1 + 1])))) ? (arr_6 [i_1] [i_1 - 2]) : ((~(arr_2 [i_1] [i_1]))))) + (((var_0 != (((arr_6 [6] [2]) ? (arr_0 [i_1] [i_1]) : var_3)))))));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_10 [1] = (0 != 1);
        var_15 = (arr_8 [i_2]);
        var_16 = (((-((var_2 - (arr_6 [8] [8]))))) * var_3);
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_17 ^= (~(arr_11 [8]));
        var_18 = (((arr_0 [i_3 + 1] [i_3 - 3]) ? (arr_0 [i_3 + 2] [i_3 + 2]) : (arr_12 [i_3] [i_3 + 1])));

        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            arr_15 [4] [i_3] = (arr_0 [i_4 + 1] [i_3 - 2]);
            var_19 = (max(var_19, (((3777669076 ? 1099580934 : 517298216)))));
        }
        arr_16 [i_3] [i_3] = ((arr_12 [i_3 + 2] [i_3 + 1]) ? (arr_12 [i_3 + 2] [i_3 - 2]) : var_6);
    }
    #pragma endscop
}
