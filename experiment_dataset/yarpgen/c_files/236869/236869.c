/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((~((+(((arr_4 [i_1] [i_2]) ? var_6 : (arr_9 [i_0] [i_0] [i_3] [i_3 - 1] [i_0])))))));
                            var_18 = (arr_6 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_19 = ((((var_10 && (!39))) ? var_4 : (((arr_17 [i_0] [i_4 + 1] [i_5] [i_5] [i_5] [i_5]) ? (arr_17 [i_4 + 1] [i_4 + 1] [i_5] [i_5] [i_4 + 1] [i_5]) : (arr_17 [i_1] [i_4 + 1] [i_5] [i_5] [i_4 + 1] [i_5])))));
                            var_20 |= (max(0, var_10));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_21 = (arr_21 [i_8]);
                            arr_29 [i_9] [i_7] [i_7] [i_7] [i_6 + 2] [i_6 + 3] |= (max((max((((arr_26 [i_6]) >> (var_10 + 1790129432))), (!var_9))), ((var_15 ? var_10 : (!234)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_22 = (arr_26 [i_11]);
                                var_23 = (min(((~((min(-21, (arr_18 [i_11])))))), (((arr_30 [i_6 + 3]) ? (((arr_31 [i_12] [i_7] [i_7]) ? var_7 : (arr_34 [i_7] [i_10] [i_10] [i_10]))) : (arr_35 [i_6] [i_7] [i_7] [i_11] [i_6 - 1] [i_10])))));
                                var_24 = var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
