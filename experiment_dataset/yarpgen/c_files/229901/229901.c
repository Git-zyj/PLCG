/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((-((~(~var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [2] [i_2] [i_3] = min((var_5 * var_4), ((((((-(arr_9 [i_0] [i_1] [i_2] [i_1] [i_4])))) ? (max((arr_4 [14] [i_3] [i_1] [i_0]), var_2)) : ((min(1, 1)))))));
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_0] [i_0] = var_5;
                                arr_13 [i_2] [i_2] [i_2] [i_3] [i_2] [5] = min((((var_10 ? (min(var_1, var_5)) : (arr_8 [7] [i_2] [i_4])))), (max((var_3 < 0), (max(54, 3527359601498211124)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                var_12 = var_0;

                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_6] [i_6] [i_7] |= var_4;
                    arr_23 [i_6] [i_6] &= (((arr_19 [i_6]) ? var_4 : (arr_19 [i_6])));
                }
                var_13 = (max(var_13, -19));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        {

                            for (int i_10 = 4; i_10 < 12;i_10 += 1)
                            {
                                var_14 = (max(var_14, (((((max(var_4, (arr_29 [i_10] [i_5] [i_9] [i_10 - 4] [i_10 - 1])))) ? var_5 : (arr_15 [i_8 - 1]))))));
                                var_15 = var_7;
                            }
                            /* vectorizable */
                            for (int i_11 = 1; i_11 < 11;i_11 += 1)
                            {
                                var_16 = (max(var_16, ((((arr_21 [i_5] [i_5] [i_5] [3]) - (arr_8 [i_8 - 1] [i_11 + 1] [i_11 + 3]))))));
                                arr_34 [i_5] [i_5] [i_11] [i_9 - 1] = ((((((arr_2 [i_9] [i_11]) + (arr_25 [i_5] [i_9 + 1])))) ? (1 <= var_4) : (arr_10 [i_11] [i_6] [i_11] [i_9 + 1] [i_11 + 2] [i_11])));
                            }
                            arr_35 [i_5] [i_6] [i_8 - 1] [i_6] = (((((arr_5 [i_6]) ? (arr_4 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9]) : (min((arr_19 [i_9]), var_2))))) || ((min((((arr_2 [i_5] [i_8 + 1]) / (arr_0 [i_9 + 1] [i_6]))), ((min((arr_18 [10]), (arr_5 [i_5]))))))));
                        }
                    }
                }
                var_17 = (~var_8);
            }
        }
    }
    #pragma endscop
}
