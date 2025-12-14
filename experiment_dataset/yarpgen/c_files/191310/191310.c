/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(-14, var_3))) ? ((var_10 ? var_2 : var_7)) : var_4));
    var_12 = 255;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_13 = var_1;
        arr_4 [i_0] [i_0] = ((!((((((-(arr_1 [i_0])))) ? var_10 : 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 = (max(var_14, (((!(((~(arr_3 [i_1])))))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_2] = (((arr_8 [i_4] [i_2] [i_2]) ? (arr_0 [i_2 + 3]) : (arr_12 [i_2 - 2] [i_1])));
                        arr_18 [i_2] = var_9;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_22 [i_5] [i_2] [4] [i_2] [i_1] = (((var_5 < (arr_1 [i_1]))));
                            arr_23 [i_2] = (!-29);
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_15 = ((var_1 ? var_6 : ((-1 ? var_8 : -25089))));
                            var_16 = ((var_10 * (((!(arr_1 [i_4]))))));
                        }
                    }
                }
            }
        }
        var_17 = (((~1) ? ((((((arr_24 [i_1] [i_1] [i_1] [1]) + 2147483647)) << (((arr_25 [i_1] [i_1] [i_1] [i_1] [11] [i_1]) - 5704441595246044915))))) : ((1 ? 17048196810352583905 : var_0))));
    }
    #pragma endscop
}
