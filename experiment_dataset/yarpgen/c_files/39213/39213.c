/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_14 ^ var_6) ? (min(-32765, var_4)) : (((var_8 ? -47 : var_8)))));
    var_17 = (max((((var_5 & 1093287423) ^ (~var_13))), var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = arr_7 [1] [10] [10] [0];
                            arr_10 [i_0] [5] [i_0] [10] [i_0] = (((arr_9 [i_0] [i_0 + 2] [i_0] [i_3]) <= (arr_9 [8] [i_1] [i_2] [0])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_19 = -39;
                                arr_22 [i_6] [6] [i_4] [2] [i_0 + 3] = ((var_11 ? ((var_8 ? (arr_21 [2] [2] [i_0] [i_0 - 2]) : ((max((arr_4 [i_0] [1]), var_12))))) : 1));
                            }
                        }
                    }
                }
                arr_23 [i_0 - 1] [i_0 - 1] [i_0] = (((arr_3 [i_0 + 3]) >= ((18966 ? 32765 : (arr_3 [i_0 - 1])))));
                var_20 = (min(var_20, (arr_7 [i_0] [6] [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_21 = 65535;
                                var_22 += (((((arr_17 [i_0 - 2] [i_7] [i_7]) <= 1)) ? (((arr_17 [i_0 - 2] [1] [i_0]) / 50)) : (((arr_17 [i_0 - 1] [0] [i_1]) ? (arr_17 [i_0 + 3] [i_7] [i_7]) : (arr_17 [i_0 - 1] [i_8] [i_9])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {
                arr_38 [i_10] [2] [i_10] = (min((((~(arr_36 [i_10])))), ((~(arr_37 [i_11])))));
                var_23 += (((max((((arr_35 [7] [i_11] [i_11]) ? -32765 : var_7)), (arr_36 [i_10]))) <= ((((var_0 ? 1 : 149))))));
            }
        }
    }
    var_24 = ((1 ? 1 : 1692429225));
    #pragma endscop
}
