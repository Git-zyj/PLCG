/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [1] [i_0] = 1;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = var_3;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [1] [i_3] [i_3]);
                                arr_17 [i_0] [1] = (min(1, ((((1 ? 4642 : 1)) >> ((var_9 ? 1 : 1))))));
                                arr_18 [i_2] = min(var_5, 18446744073709551605);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_5] [i_6] = (max((((var_9 - var_1) - 450550465)), var_2));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                arr_35 [i_5] [i_5] [i_5] [i_5] [i_7] [i_5] = 1;
                                arr_36 [i_6] [12] [i_6] = var_2;
                                arr_37 [i_5] [i_5] [1] [i_7] = (min((1 & 1), 1));
                                arr_38 [14] [i_5] = (((arr_28 [i_8] [i_6 - 1] [i_9] [i_8] [i_9] [0]) | 0));
                                arr_39 [i_7] [i_7] = ((32767 && (450550489 - 1)));
                            }
                            for (int i_10 = 2; i_10 < 16;i_10 += 1) /* same iter space */
                            {
                                arr_42 [i_10] [i_10] [i_7] [i_10] [i_10] = (max((max(var_0, (max(var_4, (arr_27 [i_5] [i_7] [i_10 - 2]))))), (((var_5 ? 0 : (arr_33 [i_5] [i_10 - 2] [i_7] [i_8] [i_6 - 1]))))));
                                arr_43 [i_5] [i_5] [i_6] [i_5] [1] = (((arr_28 [i_10 + 2] [i_6 + 1] [i_6] [i_8] [i_10 - 2] [i_7]) ? 1 : var_2));
                                arr_44 [i_7] [i_7] [i_6 - 2] [i_7] [1] [i_6 + 1] = (min(((~(arr_33 [16] [i_8] [i_7] [0] [i_5]))), ((max((arr_32 [i_5] [i_6 + 1] [i_7] [i_8] [17]), (arr_29 [i_5] [i_7] [1] [i_10]))))));
                                arr_45 [i_5] [6] [i_7] [i_6] [6] [1] = ((var_9 ? (((((-32767 - 1) ? 1 : var_9)) ^ (arr_19 [i_6 - 1]))) : (((var_4 < (!4))))));
                            }
                            for (int i_11 = 2; i_11 < 16;i_11 += 1) /* same iter space */
                            {
                                arr_48 [i_6] [i_6] [i_6] = ((max((450550478 || 1), (var_5 + 1963168207325675370))));
                                arr_49 [i_5] [i_5] [i_5] = (((min(22875, 1))) || (((18261286665266585179 ? 1 : var_1))));
                            }
                            for (int i_12 = 2; i_12 < 16;i_12 += 1) /* same iter space */
                            {
                                arr_53 [i_5] [i_6] [i_5] [i_5] [i_7] = (1 && -var_8);
                                arr_54 [i_7] = (arr_28 [i_6] [i_6] [i_7] [i_12 + 3] [i_12 + 1] [i_12 + 3]);
                                arr_55 [i_6] [i_7] [i_7] [i_6] = ((~((~(arr_47 [1] [1] [i_6 - 2] [13] [i_12 - 1] [i_12 + 3])))));
                                arr_56 [i_5] [i_6] [i_12] [i_8] [i_8] = ((1 ? (((!((max(1, (arr_28 [i_6 + 1] [i_6] [i_12] [1] [i_12 - 2] [i_6 + 1]))))))) : ((35 ? var_0 : 32078))));
                            }
                            arr_57 [i_7] [i_7] [i_7] [12] [i_5] = var_1;
                            arr_58 [i_7] [i_7] [i_7] [1] = (0 || 1);
                            arr_59 [8] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] = var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
