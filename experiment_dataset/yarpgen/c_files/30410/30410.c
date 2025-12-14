/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(1643230141 <= 3669688739)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= (((var_5 ? var_12 : var_9)));
                var_15 = (-((var_5 ? var_13 : -var_6)));
                var_16 = var_5;
            }
        }
    }
    var_17 = -0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_12 [i_2] [i_3] [i_3] = var_1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = (((44905 || -15137) ? ((((!(!var_13))))) : var_2));
                                arr_20 [i_2] [i_3] [i_3] [i_4] [0] [i_3] = -1858;
                                arr_21 [i_2] [i_3] [i_3] [i_4] [i_3] [i_6] = -var_0;
                                var_18 = (min(var_18, (-15136 / var_7)));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_19 = ((!(!var_3)));
                    arr_25 [i_7] [1] [i_7] [i_7] = (((((var_7 ? var_3 : -91))) ? ((15136 ? 2066495228 : 1)) : var_12));
                }
                arr_26 [i_3] = ((-(var_2 - var_5)));
                arr_27 [i_3] [i_2] = ((-2228472068 ? -var_9 : -var_4));
                arr_28 [i_3] [i_2] [i_2] &= -var_1;
            }
        }
    }
    #pragma endscop
}
