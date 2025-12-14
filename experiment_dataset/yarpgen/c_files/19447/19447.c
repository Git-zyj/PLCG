/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = (((arr_0 [i_0 - 1]) ? 113 : (arr_0 [i_0 + 1])));
            var_18 = (+-1);
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_7 [18] [i_0] [i_2] = (~638094394985182291);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_3] [i_2] = (((arr_1 [i_0 - 1]) ? var_13 : (arr_3 [i_0 - 1] [i_0])));
                var_19 = (arr_6 [i_2] [i_0 - 2] [i_2 - 2]);
                var_20 -= 12169;
            }
            arr_11 [i_0] [i_0] [i_2] = (~12169);
        }
        for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
        {
            var_21 = (((arr_12 [i_0] [i_0 - 2] [i_4 + 1]) ? (arr_12 [i_0] [i_0 + 1] [i_4 - 3]) : var_10));
            arr_14 [i_0] [i_0] = var_7;
            var_22 = (min(var_22, (((!(arr_9 [i_0 - 1] [i_0] [18]))))));
        }
        arr_15 [i_0] [i_0] = (((!12182) < var_16));
        var_23 = -var_11;
    }
    var_24 = (12182 ? -2147483647 : 536862720);
    var_25 = (min((max((min(var_5, var_11)), ((max(var_15, var_6))))), var_8));

    /* vectorizable */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        var_26 -= (arr_16 [i_5 + 1] [i_5]);
        var_27 = (min(var_27, (((var_0 ? var_12 : (arr_0 [i_5 + 1]))))));
        arr_20 [i_5] [i_5] &= ((!(((arr_16 [i_5] [17]) == var_2))));
    }
    var_28 = var_4;
    #pragma endscop
}
