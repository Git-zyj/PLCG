/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] = min((arr_4 [i_0]), var_16);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, 3910309173));
                                arr_16 [i_4] [i_0] [i_0] [1] [i_0] = (min((min(828890060, -121)), (min(-var_0, (~var_7)))));
                                arr_17 [i_0] [7] [i_2] [i_0] [i_2] [7] &= var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((-((min((!48), 1))))))));
                            arr_31 [i_8] = ((!(arr_26 [i_8 - 1] [i_8 - 1] [i_5 - 2])));
                            var_22 += (((-(((arr_30 [i_6] [i_7] [i_8]) - (arr_24 [i_5] [i_6] [i_7] [i_6]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_23 = (arr_19 [0] [i_9]);
                            arr_38 [i_5] [i_6] [i_9] [i_5] [i_9] |= (min(103, -828890056));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
