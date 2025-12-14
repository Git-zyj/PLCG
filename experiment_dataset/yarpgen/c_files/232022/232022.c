/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [i_0] = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_17 = (max(var_17, (max((min((arr_10 [i_1 + 1] [i_1] [i_1 - 1]), (arr_12 [i_0] [i_1 + 1] [i_2] [i_3]))), (arr_5 [i_0] [i_1 + 1] [i_4])))));
                                arr_15 [i_2] [i_1 + 1] [i_4] = (37063 > 11262767926271897724);
                                arr_16 [i_0] [i_2] [i_2] [i_2] [i_0] = (max((min(-38, (arr_13 [1] [i_1 + 1] [i_1 + 1] [i_3] [8]))), var_7));
                            }
                            var_18 = (max(-24, var_15));
                            arr_17 [i_0] [i_2] [i_2] [i_2] [i_0] = var_8;
                            arr_18 [i_0] [i_3] |= ((var_8 ? (arr_7 [i_1 - 1]) : ((var_8 ? -5 : 31))));
                        }
                    }
                }
                var_19 = ((253 ? 131008 : (arr_4 [i_0] [i_1 + 1])));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_20 -= (arr_13 [i_6] [i_6] [i_5] [1] [1]);
                                arr_27 [i_0] [i_6] [i_1 + 1] [i_5] [12] [12] = ((((max(var_2, 32)))));
                                arr_28 [i_5] [i_5] [i_5] [i_5] [1] [i_6] = var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_0 ? ((max(((var_1 ? var_1 : var_16)), var_2))) : var_11));
    #pragma endscop
}
