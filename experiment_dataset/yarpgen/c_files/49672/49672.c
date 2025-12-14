/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((((((((var_9 ? 1 : var_3))) & (max(5655251250892411126, var_3))))) ? ((~(1 & 9123216265784706394))) : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((arr_0 [i_0]) <= var_9))) & (((arr_4 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2] [i_3] = ((394226014 ? 1 : 38));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_0] [i_2] = var_2;
                                arr_16 [i_2] [i_3] [i_2 + 2] [i_1] [i_2] = var_7;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_20 [i_2] [i_2] = ((max((arr_3 [i_0] [i_0]), (arr_5 [i_5] [i_2]))));
                                var_15 = 35;
                                var_16 = 9151314442816847872;
                            }
                            for (int i_6 = 2; i_6 < 24;i_6 += 1)
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_2] [12] [i_6] [24] = ((((max(1, var_9))) ? 1 : ((((((max((arr_7 [i_2] [i_6 + 1] [1]), (arr_2 [15]))))) < (max((arr_3 [i_1] [i_0]), (arr_18 [i_2] [i_1] [i_1] [i_1] [i_1]))))))));
                                var_17 = (!1073741568);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_18 = (((arr_7 [i_0] [i_2] [i_7]) ? var_2 : ((((arr_12 [i_7] [i_3 - 1] [i_2] [i_1] [i_0]) && var_10)))));
                                var_19 = (min(var_19, (((-913475440507831834 ? 3221225727 : 1)))));
                                arr_30 [i_0] [i_1] [i_2] [i_0] [i_2] = ((1 ? ((-10510 ? 1 : 116)) : var_9));
                            }
                            var_20 = var_2;
                            var_21 = (((arr_14 [i_3 - 1] [i_3 - 2] [i_2 + 1] [i_2 + 3] [i_2 + 3]) ? ((((max(var_0, var_2))) ? (arr_1 [i_0]) : (max(30994, var_9)))) : (((((var_0 & (arr_4 [i_0]))))))));
                        }
                    }
                }
                arr_31 [i_0] [i_1] [i_1] = ((-var_9 ? ((((max(0, var_3))) ? ((max(-115, 1))) : (arr_24 [0] [i_0] [i_0] [i_1] [i_0] [i_1]))) : (((arr_8 [i_0] [i_0]) ? (((!(arr_21 [20] [i_1] [i_0] [i_0] [20])))) : (arr_8 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 11;i_9 += 1)
        {
            {
                var_22 = (((((((max((arr_12 [1] [i_9 + 1] [i_9] [i_9] [i_9]), 3221225728))) ? (((var_11 ? 1 : -54))) : var_9))) ? var_1 : var_11));
                var_23 = (max(var_23, (3221225472 | var_2)));
                arr_36 [6] [7] [i_9] = var_3;
                var_24 = ((var_2 ? (arr_28 [18]) : (arr_28 [8])));
            }
        }
    }
    #pragma endscop
}
