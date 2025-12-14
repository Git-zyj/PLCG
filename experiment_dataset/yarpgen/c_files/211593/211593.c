/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 += max((max((arr_0 [i_1]), (min(var_13, var_8)))), var_11);
                var_19 = (max(var_19, (arr_1 [i_1])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = var_17;
                                arr_13 [i_0] [1] [i_2] [i_3 - 1] [i_4] = (arr_1 [i_0]);
                                var_21 = (min(var_21, (((((min((arr_2 [i_4 + 3] [i_3 - 1] [i_1]), (arr_2 [i_4 + 3] [i_3 - 1] [i_2])))) ? (max((arr_2 [i_4 + 2] [i_3 - 1] [i_1 + 1]), (arr_2 [i_4 + 2] [i_3 - 1] [i_2]))) : ((var_5 ? (arr_2 [i_4 - 1] [i_3 - 1] [i_3]) : (arr_2 [i_4 + 3] [i_3 - 1] [i_1]))))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_22 = ((((max((arr_4 [i_0] [i_1 - 2] [i_0]), (max(var_2, var_14))))) ? var_17 : var_3));
                        var_23 -= var_1;
                        var_24 = (min(var_24, (arr_9 [i_5 - 2] [i_1] [i_1 - 2])));
                    }
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        var_25 = (min(var_25, ((max((max((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1] [i_1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]))), ((max(var_1, (arr_5 [i_6] [i_6] [i_6] [i_6])))))))));
                        var_26 |= (max((max((max((arr_19 [i_0] [i_0] [i_0] [i_2] [i_6] [i_6]), (arr_16 [7]))), ((var_5 ? (arr_14 [i_6 - 2] [i_6] [i_1]) : (arr_18 [i_0] [i_1 - 2] [i_2] [i_6]))))), (((var_2 ? ((var_0 ? var_15 : (arr_16 [i_0]))) : ((max(var_1, var_2))))))));
                        var_27 += var_9;
                    }
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_2] [i_1] [1] [i_7] = var_13;
                        var_28 = var_13;
                        var_29 = (max(var_29, ((max(((var_4 ? (((max((arr_3 [i_1 - 2]), var_4)))) : (max(3558427177942356826, (arr_17 [i_1] [i_7]))))), (arr_18 [i_1 + 1] [i_7 + 1] [i_1 + 1] [i_2]))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_30 = var_2;
                        var_31 = (var_5 ? var_5 : (arr_21 [i_1 - 1] [i_1 - 1]));
                        var_32 = (max(var_32, ((var_8 ? var_4 : (arr_12 [i_8 - 1] [i_8 - 1] [i_1 + 1] [i_1 + 1] [12])))));
                    }
                }
                arr_27 [i_0] [i_0] = (max((min(var_7, (max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_10)))), (arr_8 [i_0] [19] [i_1 - 1] [i_1] [i_1 - 1])));
            }
        }
    }
    var_33 = var_10;
    #pragma endscop
}
