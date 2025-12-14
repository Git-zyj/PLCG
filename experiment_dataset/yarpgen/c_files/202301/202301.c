/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((((min(((var_4 ? var_5 : var_13)), var_16))) ? ((-1832650955 ? var_13 : var_0)) : (min(-6, (min(var_3, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_18 ^= ((~(((var_16 >= 22) ? 0 : (arr_4 [i_0] [1])))));
                    arr_8 [i_0] [i_0] = ((-((((arr_5 [i_0 - 1]) < (!-6))))));
                    var_19 = ((((max(11576444162130188262, ((((arr_0 [i_0]) ? var_12 : (arr_0 [i_0]))))))) ? (((((max(var_1, var_1))) >= 4))) : var_16));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = var_16;
                                arr_17 [i_3] [i_3 - 3] [i_0] = (((((min(var_0, var_8))) ? ((var_14 ? 2132791240053039984 : var_13)) : -32)));
                                var_21 = (max(var_21, ((min(var_1, ((((max((arr_9 [i_3] [1] [i_3] [i_0] [i_0]), 1))) ? (((arr_14 [i_3] [i_3] [i_3] [i_0]) / var_14)) : ((min(var_7, var_13))))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_25 [i_0 - 1] [i_0 - 1] [2] &= -8;
                            arr_26 [i_0] [i_1] [i_5 + 3] [i_0] = (-1 == (((!((((arr_0 [i_0]) ? (arr_22 [i_0] [i_6]) : 5683352537379092975)))))));
                            arr_27 [i_0] = ((((((arr_10 [i_0]) ? ((var_13 ? 38109 : 6)) : var_11))) ? -5689347791530501207 : ((((arr_24 [1] [1]) ? (arr_11 [i_0] [i_0] [i_0] [7] [i_0]) : var_11)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
