/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [10] = (((max((((arr_5 [i_0] [i_1]) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_5 [20] [20]))), ((var_5 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1] [i_0]))))) & ((min(((~(arr_0 [17]))), (~163))))));
                var_18 = ((~(arr_2 [i_1 + 2])));
                var_19 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_15 [i_2] [i_2] = (min(((min(var_16, (arr_13 [i_0] [i_0] [3] [i_1 - 1] [i_1 - 1] [i_0])))), (arr_13 [i_0] [i_0] [i_0] [i_1 + 2] [i_0] [i_0])));
                            arr_16 [i_0] [i_2] [i_2] [12] [i_3] = (max(var_13, ((((min((arr_3 [i_1] [i_2]), var_16))) / 768))));
                            var_20 = ((~(((arr_5 [i_1 - 1] [i_1 + 2]) / var_9))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_19 [i_2] [i_3] [i_2] = (arr_1 [i_1 + 1]);
                                var_21 = var_10;
                            }
                            for (int i_5 = 1; i_5 < 17;i_5 += 1)
                            {
                                var_22 = ((~(min(((max((arr_0 [8]), var_1))), (min((arr_11 [i_0] [i_0] [i_2]), (arr_10 [i_0] [i_1] [i_2])))))));
                                arr_24 [i_2] [i_3] = ((~(max(var_2, -64))));
                                var_23 = (((((((var_5 ? var_9 : var_7))) ? (~var_8) : (arr_11 [i_2] [i_3] [i_2]))) == (((~(~var_16))))));
                                var_24 = ((((((arr_20 [i_3] [i_5 + 1] [i_2]) ? (arr_18 [i_0] [i_5 + 1] [i_1 + 1] [i_3] [i_2]) : (arr_20 [i_3] [i_5 + 1] [i_2])))) ? (arr_11 [i_0] [i_5 + 1] [i_2]) : ((max((arr_20 [i_0] [i_5 + 1] [i_2]), (arr_20 [i_0] [i_5 + 1] [i_2]))))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_25 = ((((max((arr_10 [i_0] [i_3] [i_2]), var_16))) ? (((~((1808581528 ? 762 : 45))))) : (((arr_23 [i_1 + 1]) ? ((var_7 ? var_0 : (arr_23 [i_0]))) : -769))));
                                var_26 = (((arr_10 [i_6] [i_6] [i_2]) ? (~var_9) : (((arr_6 [i_0] [i_0] [16]) + (arr_17 [i_0] [10] [i_2] [i_2] [i_1 - 2])))));
                            }
                            for (int i_7 = 2; i_7 < 18;i_7 += 1)
                            {
                                var_27 = (max(var_27, ((((arr_4 [i_0] [i_1] [i_7 + 3]) ? ((178 ? 1494959048 : 0)) : (max((arr_17 [i_0] [i_1] [i_2] [i_3] [i_7 + 3]), (arr_17 [14] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_2] = ((~((~(max((arr_29 [i_2] [i_0] [i_0] [i_7 - 2] [11]), var_8))))));
                                arr_34 [i_2] [i_3] = (min(((((((arr_21 [i_2] [11] [17] [17] [i_2] [i_1] [i_1]) ? (arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]) : (arr_20 [i_0] [i_2] [i_2]))) >> (((arr_1 [i_2]) - 11695888336074927214))))), ((~(arr_21 [i_2] [i_1] [i_2] [i_3] [i_1] [i_2] [i_2])))));
                                arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_7 + 3] = (((arr_25 [i_1 + 2] [i_1] [i_7 + 2] [i_2] [i_7 + 3] [i_7 + 2]) ? ((((var_5 ? var_10 : var_16)))) : ((~((1837334516 ? -776 : 1855134186163758118))))));
                            }
                        }
                    }
                }
                var_28 = (arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 1]);
            }
        }
    }
    #pragma endscop
}
