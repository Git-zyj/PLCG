/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_1] = var_8;
                                arr_13 [i_4] [i_1] [i_2] [i_3] [i_4] [i_3] = (((((var_6 - var_6) ? var_3 : (((var_9 ? var_1 : var_4))))) / (((var_9 ? var_8 : var_6)))));
                                arr_14 [i_4] [i_4 + 1] [i_3 + 2] [i_2 - 2] [i_1] [i_1] [i_4] = (max((var_5 + var_9), (var_6 || var_1)));
                                arr_15 [i_0] [i_1] [i_2 - 2] [i_1] |= ((-var_10 ? (!var_10) : (!var_3)));
                            }
                        }
                    }
                }
                arr_16 [i_0] [21] = ((((min((var_3 / var_8), var_8))) ? (((!var_2) ? var_2 : var_11)) : ((-(var_0 / var_11)))));
            }
        }
    }

    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        arr_20 [i_5] = (min(((-((var_7 ? var_11 : var_1)))), (var_11 * var_2)));
        arr_21 [i_5] = (((((~var_7) ? var_3 : (var_8 / var_1))) != (var_4 == var_3)));
    }
    var_13 = var_11;
    #pragma endscop
}
