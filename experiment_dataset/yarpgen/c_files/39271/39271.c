/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [4] = ((!((min((arr_4 [i_0] [i_0] [1]), (arr_3 [i_0] [i_1]))))));
                arr_6 [i_0] [6] = ((~(((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))));
                var_16 |= (((536870912 ? (arr_1 [i_0] [i_1]) : (arr_0 [i_0]))));
                arr_7 [i_1] = var_13;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 6;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_17 = (~var_4);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_18 = (arr_14 [2] [i_4] [2]);
                                arr_20 [i_2] [8] [i_4] [8] [i_6] [i_5] &= arr_10 [i_4];
                            }
                        }
                    }
                    var_19 = ((-(((!(arr_16 [i_2] [i_2] [i_2] [3] [i_3 + 2] [i_3]))))));
                }

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    arr_25 [4] [i_3] [i_3] [i_7 - 1] = ((((min((arr_0 [i_7 + 2]), 11771))) ? -536870917 : ((~(((arr_0 [9]) + (arr_14 [i_2] [i_3] [i_7])))))));
                    arr_26 [i_2] [i_2] [1] [i_3] = (arr_8 [1] [i_3]);
                    var_20 = var_6;
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_21 = ((var_7 ? (max((!var_0), (arr_13 [6] [0] [i_8]))) : (((-((var_5 ? -536870917 : var_0)))))));
                    arr_29 [i_2] [i_3] [i_3] = (max((arr_28 [1] [9] [i_8] [i_8]), (arr_23 [i_2] [i_3] [i_3] [i_8])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_34 [i_2] [i_3] [i_8] [2] [i_9] [i_2] [i_9] = (((((var_3 & (arr_27 [i_10 + 1] [i_3 - 1])))) ? var_8 : (max((((!(arr_21 [i_2] [i_3] [i_3])))), (184 / var_3)))));
                                var_22 = (max(var_22, (((!(((-var_14 ? (-127 - 1) : (arr_9 [i_2 + 4] [9])))))))));
                                var_23 = (min(var_23, ((((((arr_22 [i_3 + 1] [0] [0] [i_2 + 1]) ? (arr_22 [i_3 + 1] [8] [8] [i_2 + 1]) : (arr_22 [i_3 + 1] [4] [4] [i_2 + 1]))) < var_0)))));
                                arr_35 [i_2] [i_2 + 2] [i_2] [i_2] [i_2] [i_3] = ((!(-536870912 * 552502741)));
                            }
                        }
                    }
                }
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    var_24 = (min(var_24, var_4));
                    var_25 = ((arr_1 [i_2 + 2] [i_2]) ? (arr_33 [i_3] [i_3] [i_3] [i_3]) : (max((~var_6), 17)));
                    var_26 = (max(var_26, -var_11));
                }
                arr_39 [i_3] = ((-(((arr_31 [i_3] [i_3 - 1] [i_3 + 2] [6] [i_3]) ? (max((arr_18 [i_2] [i_3]), -536870906)) : (1 < 3925390393)))));
            }
        }
    }
    var_27 = ((511 ? -1493996883 : -536870921));
    #pragma endscop
}
