/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((var_4 ? 17 : -94)) | (arr_1 [i_0] [i_0])));
        var_11 -= var_4;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_12 = (max((((!(~var_2)))), ((9223372036854775807 ? var_1 : (arr_1 [i_2 - 1] [i_3 - 4])))));
                                arr_17 [i_2] = 0;
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_2] [i_2] [i_3 - 1] [i_6 + 1] = (((min((var_9 - -1), (max(0, var_10))))) && var_2);
                        arr_23 [i_2] [i_3 - 4] [1] [i_2] = (arr_2 [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_30 [i_2] = 0;
                                var_13 = ((((max(((var_4 ? (arr_0 [i_1]) : var_5)), ((max(var_7, (arr_28 [i_3] [i_3]))))))) ? (((var_5 ? ((max(0, 94))) : var_8))) : (var_2 & -94)));
                            }
                        }
                    }
                }
            }
        }
        arr_31 [i_1] = (!-94);
        arr_32 [i_1] = 9;
        arr_33 [i_1] [i_1] |= var_4;
    }
    var_14 = (min(var_14, ((max((((-(var_6 != var_6)))), -var_5)))));
    var_15 = var_0;
    #pragma endscop
}
