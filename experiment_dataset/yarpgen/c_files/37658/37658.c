/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_3] [i_3] = ((-(~263420252)));
                            var_20 = (min((((((min(263420252, var_13))) ? (-127 - 1) : ((20991 ? 263420252 : 20))))), (-8594271781207998230 % -21)));
                            var_21 = -39;
                        }
                    }
                }
                var_22 |= (max((min(1, 17442)), (((-2 ? 15829 : 122)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((((max(-1, (((arr_25 [i_8] [i_7] [i_5]) ? var_15 : var_9)))) != (arr_24 [i_4] [i_4] [i_4] [i_4]))))));
                                var_24 = ((-24207 ? var_19 : ((((min(var_17, (arr_25 [14] [14] [14])))) + (arr_20 [i_7 + 4])))));
                                var_25 = (min(((var_11 ? 786043437 : var_14)), (((~(~var_4))))));
                                arr_28 [i_4] [i_5] [i_6] [i_6] [9] [i_8] [1] = ((-var_1 ? 2 : ((var_18 ? var_8 : (arr_27 [i_4] [i_5] [i_8] [i_7 - 1] [i_5] [i_8])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_26 = (min(var_3, (((arr_27 [i_5] [i_5] [i_9] [i_5] [18] [i_9 - 2]) ? var_6 : var_1))));
                                arr_35 [i_9] [i_5] [i_9] [i_9] [i_11] [i_10] = ((~((var_19 ? 48093 : 1414622300))));
                                var_27 = (max(-127, ((-(arr_30 [i_9] [i_9 + 3] [i_9 - 2])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 23;i_14 += 1)
                        {
                            {
                                arr_44 [i_12] [i_12] [i_12] [i_12] [i_14] [i_4] [3] = (!63);
                                var_28 = (max(var_28, (~1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
