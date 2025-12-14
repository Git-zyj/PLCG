/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 / var_2) ? -var_3 : ((var_7 ? var_7 : 192)))) ^ (((!((max(var_1, var_5))))))));
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = var_0;
                    arr_10 [i_1] [i_1] = (~((min(-24669, 14680064))));
                }
            }
        }
        arr_11 [i_0] = ((var_12 | (((arr_2 [i_0]) * (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    arr_19 [i_0] [i_3] [i_0] [i_0] = var_2;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [i_0] [i_3] [i_3] = ((var_5 ? (max((var_7 / var_13), (((!(arr_14 [i_4] [i_3])))))) : var_4));
                        arr_23 [8] [i_3 - 1] [8] = var_6;
                        arr_24 [10] [i_4] [i_4] [i_3 - 1] [10] = (((min(((max(8184, var_12))), var_11)) << (((((arr_5 [i_5] [i_4 - 1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_4] [i_4 - 2]))) - 645708042))));
                        arr_25 [i_0] = (i_0 % 2 == zero) ? ((((max(var_3, ((var_11 >> (((arr_0 [i_0] [i_0]) - 38)))))) % (((22 ? 57351 : -51)))))) : ((((max(var_3, ((var_11 >> (((((arr_0 [i_0] [i_0]) - 38)) - 178)))))) % (((22 ? 57351 : -51))))));
                        arr_26 [i_0] [i_5] [14] [8] [i_0] = (max((max((max(var_7, (arr_12 [i_0] [i_3] [i_4]))), var_1)), ((max(var_12, (((arr_5 [i_0] [i_0]) > var_1)))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_3] [i_0] = (((((8184 * ((var_0 / (arr_13 [i_0] [i_3 - 1])))))) ? (((((1 ? var_4 : (arr_20 [i_6] [1] [i_6] [1] [i_6] [i_0]))) / (((arr_8 [i_0] [i_3] [10]) / (arr_8 [i_0] [i_3 - 1] [i_4 - 3])))))) : (var_2 * -var_11)));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_4 ? ((((var_12 == var_5) <= (arr_18 [i_0] [i_0])))) : (((!(arr_5 [i_4 + 1] [i_4 - 3]))))));
                        arr_32 [8] [i_4] [i_3] [i_0] [i_0] [8] = (((((1 ? (arr_16 [i_0] [i_6] [6] [i_6]) : var_0)) >> (((max(var_3, (arr_5 [i_6] [i_0]))) - 645708033)))) <= ((max(1, ((var_14 <= (-2147483647 - 1)))))));
                    }
                    arr_33 [0] [1] [i_4] [i_4] = (((((!var_8) ? (arr_27 [4] [14]) : (min(var_5, var_10))))) ? (((var_1 != var_0) * 14579)) : ((var_1 ? (arr_20 [i_0] [i_3] [i_4 - 1] [i_4] [i_4 - 1] [4]) : (arr_20 [i_0] [i_3] [i_4 - 1] [i_4 + 1] [i_0] [14]))));
                }
            }
        }
        arr_34 [i_0] [2] = var_14;
        arr_35 [i_0] [i_0] = ((var_6 << (((var_2 <= (arr_21 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_17 = var_4;
    #pragma endscop
}
