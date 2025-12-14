/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = ((arr_7 [i_2 - 3] [i_2 + 1]) ? 23 : (arr_7 [i_2 - 3] [i_2 - 1]));
                        var_16 = (min(var_16, (((-57 ? (arr_10 [i_3] [i_2 - 2] [i_2 + 1] [i_2 - 2]) : (arr_2 [i_2]))))));
                        arr_12 [1] [i_3] [i_2] [10] = var_0;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_4] [i_1] [i_2] [i_4] = (((var_9 * var_7) ? -8439658690360036701 : (var_9 - var_6)));
                        arr_16 [i_0] [i_1] [i_2] [i_4] [i_0] = var_10;
                        arr_17 [i_4] = ((~((var_14 ? var_7 : var_1))));
                        var_17 = (((arr_11 [i_2 - 3] [i_4] [i_2 + 1] [i_2 - 1] [20] [i_4]) ? ((((arr_4 [i_4]) <= (arr_13 [i_4] [i_4])))) : (arr_8 [i_0] [i_2 - 3] [i_2 - 1] [3])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_18 = (arr_13 [i_0] [i_5]);
                        var_19 = (((arr_7 [i_2 - 2] [i_2 - 2]) ? ((min((arr_3 [i_2 - 1] [i_1] [i_2]), (arr_14 [i_2 + 1] [i_2 - 1] [i_0] [i_5])))) : var_8));
                        var_20 = (min(var_20, (((-((-(max(var_1, (arr_7 [i_0] [i_0]))))))))));
                        var_21 = max((((((var_6 ? (arr_7 [i_0] [i_1]) : var_2))) ? ((((!(arr_19 [i_0] [i_1] [i_1] [i_5]))))) : var_5)), ((min((var_11 | var_11), var_2))));
                        arr_20 [i_0] [i_1] [i_2] = max((((!((max(0, (arr_8 [i_0] [i_1] [i_0] [i_5]))))))), (arr_8 [i_2 - 2] [i_0] [i_2] [i_5]));
                    }
                    var_22 = (((((-(((!(arr_1 [i_0]))))))) ? ((2147418112 ? (arr_5 [i_0] [i_1]) : ((var_7 ? var_12 : (arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))) : ((((!(arr_2 [i_2 + 1])))))));
                    var_23 = ((((max((((arr_18 [i_0] [i_0] [i_1] [2]) ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : var_9)), (arr_0 [i_0] [1])))) ? (((arr_3 [i_2 + 1] [i_2 + 1] [i_2 - 3]) & (arr_14 [i_2 + 1] [i_2 - 2] [i_1] [i_2 - 3]))) : (((var_2 <= (((2147418134 || (arr_13 [i_1] [i_1])))))))));
                }
            }
        }
    }
    var_24 = var_11;
    var_25 = (min(var_25, var_14));
    var_26 = (((var_12 && 2147549158) ? ((~(var_8 % var_12))) : (~-var_0)));
    var_27 = ((((((0 ? var_5 : var_13))) ? (max(var_12, var_13)) : var_6)) % var_10);
    #pragma endscop
}
