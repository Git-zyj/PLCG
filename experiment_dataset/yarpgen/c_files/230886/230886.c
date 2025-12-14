/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 *= var_17;
                            arr_11 [i_0] [i_0] [i_1] [i_3] = ((var_6 <= (((((arr_10 [i_1 - 1] [i_1 - 1]) <= var_8))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = (((((127 ? var_17 : 11))) ? ((1 ? var_18 : (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : 89));
            }
        }
    }
    var_21 = (min((((!(!2379706116291839462)))), var_3));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] = (!(((var_3 / (arr_14 [i_4 - 1])))));
                    arr_21 [i_4] [i_4] = (arr_14 [i_4 + 3]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_27 [i_7] [6] [i_7] [i_7] [i_8] |= ((((((2379706116291839491 ? -1 : 1)))) - 1));
                                var_22 ^= ((((arr_26 [i_4]) / var_4)) - var_16);
                                var_23 = (min(var_23, var_3));
                                var_24 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_8;
    #pragma endscop
}
