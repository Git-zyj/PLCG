/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((arr_0 [i_1]) ? (((((~(arr_2 [i_0] [1])))) + var_13)) : (min((max((arr_0 [1]), (arr_3 [i_0] [6]))), (arr_4 [i_0] [i_1] [12])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [16] [i_3] [i_4 + 4] = (17528 - (((arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 4] [i_4 + 3]) ? ((max((arr_9 [i_0] [i_0] [i_0] [4]), (arr_4 [i_2] [i_2] [i_1])))) : (arr_4 [i_4 - 2] [12] [16]))));
                                var_16 = (((((9223372036854775807 ? -20425 : -9223372036854775807))) ? ((-(((arr_7 [i_3]) ? (arr_10 [6] [i_1] [1] [1]) : var_9)))) : ((var_9 % (min((arr_3 [10] [6]), (arr_7 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            {
                var_17 = (arr_17 [9] [5]);

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_5 + 1] [i_6] [i_6] [2] = ((!(144115188075855871 > 9223372036854775797)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_18 = min(var_3, (((arr_15 [i_5] [i_5 + 1]) ? (arr_26 [i_5] [i_5 + 1] [i_7]) : (arr_26 [15] [i_5 + 1] [10]))));
                                arr_32 [17] = (arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_19 = (arr_26 [i_5] [i_7] [i_6 - 3]);
                            }
                        }
                    }
                    arr_33 [i_5 + 3] [17] [10] [i_7] = ((min(9223372036854775797, -1)));
                }
                arr_34 [i_5] = (arr_17 [i_6 - 3] [i_6 - 1]);
            }
        }
    }
    #pragma endscop
}
