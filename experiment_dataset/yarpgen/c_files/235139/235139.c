/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (var_0 != var_7)));
    var_15 = (var_7 - var_6);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0 + 1]) ? 61 : var_5)))));
        var_16 = var_0;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = var_1;
        var_18 -= (arr_5 [i_1] [i_1]);
        arr_6 [14] = (((max(((var_10 ? var_4 : var_2)), -var_1)) != (((arr_4 [i_1] [i_1]) ? (~var_10) : (min(var_12, 31))))));
        var_19 = (min(var_19, (arr_3 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (((arr_7 [i_2]) ? (((arr_7 [i_2]) | (arr_7 [i_2]))) : ((max(var_1, var_9)))));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_16 [17] = (max(((var_11 * (arr_14 [i_3]))), (arr_14 [i_3])));
            var_20 = (arr_9 [i_2]);
        }
        var_21 = (arr_10 [i_2] [i_2]);
        var_22 = (min(var_22, ((((arr_9 [i_2]) < (arr_10 [i_2] [i_2]))))));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_19 [i_4] = (((arr_18 [i_4 + 1] [i_4]) * var_11));
        var_23 -= (max(11, (max((arr_18 [i_4 + 1] [i_4 + 3]), 18446744073709551615))));
    }
    #pragma endscop
}
