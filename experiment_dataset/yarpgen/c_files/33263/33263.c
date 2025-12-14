/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_16 / ((42 ? -var_0 : ((19 ? var_16 : 54906))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((max((arr_4 [i_0]), (arr_0 [i_0] [i_1]))) ^ (min(var_4, (arr_0 [i_0] [i_0])))))));
                arr_5 [i_0] [i_0] [i_0] = (min((arr_4 [i_0]), (max(247, var_12))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (max(0, (((arr_20 [i_2] [i_2] [i_6] [i_2] [10]) ? (((arr_7 [i_6]) ? var_6 : 16645)) : var_5))));
                                var_22 = (max(var_22, var_13));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_23 = ((((var_11 ? 8628722097365536542 : (arr_14 [i_8] [i_7] [i_4]))) << (var_14 - 20195)));
                                var_24 = (min(((~(arr_28 [i_2] [i_3] [i_4] [i_4] [i_8]))), (arr_21 [i_8] [i_4] [i_4] [i_4] [i_3] [i_2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_34 [i_2] &= (((min((min(2615, 603461204)), (arr_21 [i_4] [i_4] [i_9 + 3] [i_9 + 1] [i_9] [i_9 + 1] [i_4]))) | (max(((var_17 ? 123 : 61)), var_4))));
                                arr_35 [i_10] [i_10] [i_2] [17] [i_10] [i_2] = (((~28965) ? ((max(var_16, var_8))) : ((((~(arr_14 [i_2] [i_2] [i_2])))))));
                                arr_36 [i_2] [i_3] [i_2] [i_10] [i_3] = (arr_23 [i_2]);
                                var_25 = ((((min((~var_5), (max(var_8, 9818021976344015074))))) ? ((((min((arr_11 [i_3]), 39998))) ? (max(116, (arr_17 [i_10] [i_3] [i_4] [i_3] [7]))) : (~0))) : ((min(var_11, 25537)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 &= (min(((~(var_18 | var_6))), (min((min(var_12, -25066)), var_16))));
    #pragma endscop
}
