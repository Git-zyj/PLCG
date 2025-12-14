/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = (arr_1 [i_1] [5]);
                var_10 = (max(var_10, ((((arr_1 [i_1] [9]) > ((min(92, 23192))))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_11 = (min(((~((var_1 ? var_2 : (arr_2 [i_1]))))), 11548));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [6] [i_4 + 2] |= var_8;
                                arr_17 [i_0] [i_1] = ((((min(var_7, 71))) < (min((((var_1 > (arr_6 [i_0] [i_1])))), (~var_7)))));
                            }
                        }
                    }
                    var_12 = ((!((max(11548, 43226)))));
                }
                arr_18 [i_1] = ((32667 < (max((arr_1 [i_0] [3]), var_0))));
                arr_19 [i_1] = (max(((~(arr_12 [i_0] [i_1] [i_1]))), -52));
            }
        }
    }
    var_13 = (min(var_13, (((var_6 ? (((((15672 ? -105 : var_0))) ? var_3 : var_3)) : (((((44024 ? var_1 : 16201702885554664172))) ? var_8 : ((max(var_1, var_8))))))))));
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                arr_25 [i_5 + 1] = (arr_20 [i_6 + 1] [i_6 + 2]);

                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    arr_28 [1] [i_6] [i_7] = (min((min(var_3, (arr_27 [i_5 - 1] [i_6 - 1] [i_7] [i_7 - 1]))), ((((arr_27 [i_5 + 2] [i_6 + 2] [i_7] [i_7 + 4]) < (arr_27 [i_5 + 2] [i_6 + 2] [i_7] [i_7 - 3]))))));
                    var_15 = max(13246432102683498933, -52);
                    arr_29 [i_5] [i_6 + 2] [i_6 + 2] [i_7] = ((((min((arr_26 [i_5 - 2] [i_6 + 1] [i_7 - 3] [i_5 - 2]), 111))) ? ((max(((21511 ? 185 : (arr_20 [i_5] [i_7 - 3]))), (arr_27 [i_5 - 1] [i_6 + 2] [i_6 + 2] [i_7 - 1])))) : ((-(var_3 / var_0)))));
                    arr_30 [i_5] [i_6 - 1] [i_7] = (((37046 ? -2 : 19133)));
                }
                for (int i_8 = 3; i_8 < 15;i_8 += 1)
                {
                    arr_33 [8] [8] [9] &= (min((((((-(arr_23 [i_5] [4] [i_8])))) ? var_9 : var_7)), ((var_4 ? ((var_6 ? (arr_31 [i_8 - 2] [i_6] [5]) : 49324)) : -98))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_16 = ((-(((min((arr_31 [i_5] [i_5] [i_5]), var_0)) ^ var_2))));
                                arr_41 [i_9] [i_6 + 1] [14] [i_9] [i_10] = 80;
                            }
                        }
                    }
                }
                arr_42 [i_6] |= ((11693 ? -70 : -110));
            }
        }
    }
    #pragma endscop
}
