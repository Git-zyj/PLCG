/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((15091 ? 50452 : ((56 ? 25 : 9941))))) ? 7 : 50445));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_12 *= ((-var_6 > ((var_9 ? var_4 : 32))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_3] [i_2] [i_0] = ((((((((~var_7) + 2147483647)) << (45 - 45)))) ? (((209 / var_3) / 24)) : (var_3 + var_0)));
                                arr_12 [9] [i_0] [4] [i_0] [7] = (((((255 ? 12288 : 54))) ? (((var_6 || var_7) << (var_9 - 27256))) : ((var_6 ? 65 : 15091))));
                                arr_13 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0] = ((var_7 << (128 - 107)));
                                var_13 = max((0 || 13587033884636730604), var_10);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 |= ((min((max(var_6, 51267)), var_8)));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_15 = (((((var_2 << (((var_3 + 173) - 393))))) > (min((var_0 * var_5), -53248))));
                                var_16 = (max(var_16, ((((((17108295639123169051 ? 24 : var_0))) ? var_0 : 13928)))));
                            }
                        }
                    }
                    var_17 = (3 - var_5);
                    arr_26 [0] [i_6] [i_7] = ((11172546543294384436 ? var_0 : ((var_7 ? var_6 : 73))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
