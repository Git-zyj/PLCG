/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_5;
    var_12 = var_9;
    var_13 -= ((((min(var_10, var_10))) < var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_3] = (min(0, -1));
                            arr_12 [i_3] [i_3] = (max((max(var_5, (arr_1 [i_1 - 1]))), (((var_5 || (var_10 != -14))))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (1 ? 7 : ((((4294967295 ? -12 : 79)) / (((arr_1 [i_0]) << 2)))));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_23 [i_5] [i_1 - 1] = (((-(arr_21 [i_4 + 2]))));
                                arr_24 [i_6] [0] [i_0] [0] [i_0] &= (((arr_18 [i_4 - 1] [i_1 - 1] [i_0] [i_0]) == ((max(65535, var_7)))));
                                arr_25 [i_5] [i_1] [i_4] = (((((var_3 ? (arr_10 [i_0] [i_0] [i_5] [i_6]) : var_4))) ? ((1 >> (6182213475495297608 - 6182213475495297586))) : (arr_19 [i_4] [i_5 + 1])));
                                var_14 = ((((-(arr_20 [i_0] [i_1] [i_4] [i_5] [i_6] [i_5] [i_6])))) ? (arr_20 [i_6] [i_5] [i_4 + 1] [i_1 + 1] [i_1 + 1] [i_5] [i_0]) : (((arr_20 [1] [1] [i_4 + 2] [i_5 + 1] [i_6] [i_5] [i_4 + 2]) ? -40328307 : (arr_20 [i_6] [i_5] [i_5] [i_4] [i_4] [i_5] [i_0]))));
                                arr_26 [i_0] [i_0] [i_4] [i_5] [i_6] = (arr_5 [i_5] [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                }
                arr_27 [i_0] [i_1 - 1] [i_1 + 1] = (((max((arr_7 [i_1 + 1] [i_1] [i_1] [i_1]), (arr_7 [i_1 - 1] [i_1] [i_1] [i_1])))) - (((arr_7 [i_1 + 1] [i_1] [i_1] [i_1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_0] [i_0] [i_0]))));
                var_15 = ((-19 >= (max((((arr_18 [i_0] [i_0] [i_0] [i_1]) + var_10)), (arr_19 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
