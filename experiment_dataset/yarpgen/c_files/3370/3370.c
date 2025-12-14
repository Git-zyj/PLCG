/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min(((((arr_4 [i_0] [i_1] [i_1]) != (arr_4 [i_0] [i_1] [i_0])))), ((var_6 / (min(var_3, (arr_1 [i_0] [i_0])))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (((((((~var_12) < (~var_16))))) > (arr_0 [i_2])));
                                var_20 = 1602117151;
                                var_21 = ((11533041659098505100 || (arr_1 [i_0] [i_0])));
                            }
                        }
                    }
                    var_22 = (min(var_22, (((44921 && ((min(var_10, (!-9173182582617477832)))))))));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] = var_17;
                        var_23 = (arr_2 [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_24 = (((arr_14 [i_0] [i_0] [i_1] [i_1]) - var_0));
                        var_25 = ((((max(var_9, (arr_4 [i_1] [i_1] [i_6])))) < (arr_7 [i_0] [i_1] [i_2] [i_0])));
                        arr_20 [i_0] [i_2] [i_2] [3] [i_0] = var_3;
                        var_26 = (((((min(20964, var_14)))) ? ((-(arr_7 [i_6] [i_0] [19] [i_0]))) : ((min((arr_8 [i_0] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0]))))));
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_27 = (min((arr_21 [4] [i_7] [i_7] [i_9]), var_11));
                                arr_28 [i_0] [i_0] [i_9] = (!var_1);
                            }
                        }
                    }
                    var_28 = (~var_16);
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_29 = (min(var_29, (~var_6)));
                    arr_32 [i_0] [i_0] [i_10] [i_0] = ((6913702414611046534 || var_16) ? (((((var_10 ? var_16 : var_8)) ^ ((-4430622413910446553 ? (arr_23 [i_0] [10]) : var_8))))) : 9223372036854775790);
                    var_30 = ((var_13 ? (min(((var_4 ? (arr_16 [i_0] [i_1] [i_1] [i_0]) : 577281627)), ((var_9 ? var_14 : (arr_4 [i_0] [i_1] [i_0]))))) : (arr_24 [i_0] [i_0] [i_0] [i_10] [i_10])));
                }
                var_31 = (min(var_12, (((!((max(843314337014964091, -36))))))));
            }
        }
    }
    var_32 = (min((min(((min(var_0, var_0))), (var_4 - var_14))), (((~(712041015 & var_17))))));
    #pragma endscop
}
