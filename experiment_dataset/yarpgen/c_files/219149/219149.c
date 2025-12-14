/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = 2147483647;
    var_18 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2 - 1] [i_2] = -var_13;
                        var_19 = (~((3221225472 ? 2147483647 : (-2147483647 - 1))));
                        arr_11 [i_2] [i_1] [i_2] = (max(((~((var_4 ? var_11 : var_15)))), ((((((~(arr_1 [i_0])))) & (arr_5 [i_2] [i_2 - 3] [7] [i_3 + 1]))))));
                        arr_12 [i_2] = (arr_7 [i_2] [1] [i_3 - 1] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_20 = 31;
                            var_21 = (max(54, (-2147483647 - 1)));
                        }
                        arr_20 [i_0] [i_2] [i_4] = (((~31) ? var_15 : ((((((33554431 ? (arr_16 [i_0] [i_0] [i_0] [i_2] [i_2] [5]) : var_0))) ? (arr_6 [i_2 - 2]) : (arr_16 [i_0] [i_1] [i_0] [i_4] [i_2 + 1] [i_0]))))));
                        var_22 = ((((!(arr_7 [i_2] [i_2 - 3] [i_2 - 1] [i_2 - 3]))) ? (min((arr_9 [i_2] [i_1]), (max((arr_7 [i_2] [i_2] [16] [i_4]), var_3)))) : (((((max((arr_18 [i_2] [i_2] [i_2] [i_1] [i_0] [i_2]), 4752597957094168066))) ? (arr_9 [2] [2]) : (((arr_3 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_2] [i_1] [i_1] [i_2]))))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [15] [i_2] [i_2] = ((((((arr_16 [i_0] [i_0] [i_1] [i_2] [i_6] [11]) ? var_7 : (arr_1 [i_0])))) ? ((min(var_6, (!3676948625516701485)))) : (arr_19 [i_0] [i_0] [4] [i_2] [i_6])));
                        arr_24 [i_2] = ((((((((arr_17 [i_0] [i_1] [0] [13] [i_6]) ? 1 : (arr_19 [i_0] [i_1] [4] [i_2] [i_1])))) ? (((var_2 && (arr_18 [i_2] [i_1] [i_2] [i_6] [i_6] [i_6])))) : (arr_14 [i_0] [i_1] [i_2 + 1] [0] [i_1] [i_1]))) > ((5718774826270740619 ? (((arr_13 [i_0] [i_1] [i_2]) ? 90791727 : (arr_17 [i_0] [1] [i_1] [i_2 - 2] [i_6]))) : (arr_19 [i_1] [i_1] [i_1] [i_2] [i_2])))));
                        var_23 = (arr_9 [i_2 - 2] [i_0]);
                    }
                    arr_25 [i_2] [i_1] [i_1] [i_2] = (arr_13 [i_2 + 1] [i_2 + 1] [i_2 - 1]);
                    var_24 = ((~(((62 + 4752597957094168071) ? (arr_1 [i_2]) : (((4752597957094168066 ? 119 : (arr_16 [i_0] [i_0] [i_1] [i_2] [i_0] [1]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_25 = (((!140) || ((!(127 || var_5)))));
                                arr_30 [i_8] [i_2] [16] [i_2] [i_0] = ((+(((arr_29 [i_2] [i_2] [i_2 - 1] [3] [i_2] [11] [i_2]) / (arr_29 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [13] [9] [i_2])))));
                                arr_31 [i_2] [i_7] [i_8] = ((1073741824 && (((((max(var_2, 42)))) <= (arr_7 [i_2] [i_2] [i_2] [i_2 - 3])))));
                                var_26 = (((((22 % (arr_22 [i_8] [i_0] [i_2] [i_7] [i_7])))) && (165 * var_9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((var_8 * (var_8 - var_1)));
    #pragma endscop
}
