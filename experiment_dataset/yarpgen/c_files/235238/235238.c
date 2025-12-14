/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (((arr_2 [i_0 - 3]) != 192));
        var_16 = var_9;
        var_17 -= (((arr_0 [i_0]) ? (arr_3 [i_0]) : (42331 ^ 23214)));
        arr_5 [i_0] [i_0] = (((arr_2 [i_0 + 1]) >= (arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] |= (arr_7 [i_1]);
        var_18 = ((42338 ? (((var_5 ? var_2 : 23187))) : (arr_7 [i_1 + 1])));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_13 [1] = ((var_15 ? (arr_11 [i_2] [i_2] [i_2]) : (arr_6 [19] [i_3])));
            var_19 = (max(var_19, (((((arr_7 [i_2 + 2]) ? (arr_9 [i_2 + 2] [i_2 - 1]) : var_10))))));
        }
        var_20 += (min(42319, (min(((var_2 ? var_0 : (arr_11 [13] [13] [i_2]))), ((max(23217, var_14)))))));
        var_21 = (min((min(((max(23204, (arr_9 [i_2 + 1] [i_2 + 1])))), (min(var_1, var_8)))), (min(((max(var_3, 23192))), var_6))));
    }
    var_22 = (max(var_22, var_7));
    var_23 = var_7;
    #pragma endscop
}
