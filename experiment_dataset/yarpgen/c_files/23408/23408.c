/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 += (((107 ? var_0 : (max(var_18, 25187)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (min(var_22, (((~(((arr_4 [4] [i_1 + 2]) | ((-8987502107190758828 ? (arr_3 [4] [i_1 + 2] [i_2]) : var_15)))))))));
                    var_23 += var_11;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_24 *= 117;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_25 = 2994;
                            var_26 = (max(var_26, (-43 % 1)));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [i_3] [i_1] [i_2] [i_0 - 1] [i_1] [i_0] [i_0] = ((-6133722226337637791 ? (arr_11 [2] [2] [2] [2]) : ((~(arr_1 [i_0])))));
                            arr_18 [i_0 + 2] [i_0 + 2] [6] [i_0] [i_5] = (arr_6 [i_0]);
                        }
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [1] [0] &= ((((((((arr_11 [9] [2] [i_2] [i_6]) << (37655 - 37640)))) > (arr_5 [i_6] [i_6] [i_6] [i_6]))) ? (arr_8 [i_0 + 2] [i_0] [i_0] [4]) : (arr_16 [i_0 + 2] [i_0 + 2] [i_1 + 1] [i_2] [i_2] [i_6])));
                        var_27 = -48;
                        arr_22 [i_0] [i_0] [i_2] [i_0] = (((((arr_10 [i_0] [i_1] [1]) < 439)) ? (arr_4 [i_0] [i_1 - 1]) : -719705754));
                        arr_23 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [9] = (arr_13 [i_2] [i_2] [i_0] [2] [i_2] [6] [i_2]);
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_26 [i_0 + 2] [i_0] [i_0] [i_7] = ((2790380116 % ((var_14 ? (arr_14 [i_0] [i_1] [i_2] [i_1] [i_7]) : (arr_0 [i_0] [i_2])))));
                        arr_27 [i_0] [i_0] [i_0] = ((~(arr_12 [i_1 + 2] [i_1 + 1] [i_0] [i_0] [i_0 - 1] [i_0])));
                        var_28 += (~1382520105247194874);
                    }
                }
            }
        }
    }
    var_29 = var_13;
    #pragma endscop
}
