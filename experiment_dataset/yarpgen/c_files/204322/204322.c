/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] [2] &= ((((((max(-79, -79)) || (arr_4 [8]))))));
                        var_17 = 0;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_18 = (min(var_18, (((2660891237 ? (arr_16 [19] [10] [i_2] [i_1 + 1] [i_5] [10] [i_0]) : 1634076059)))));
                            arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] [i_1 + 1] [i_1 + 1] |= ((arr_7 [i_4] [i_4] [16]) || (arr_7 [i_4] [i_1 - 1] [i_1 + 1]));
                            arr_18 [i_0] = (arr_12 [i_5] [3] [i_0]);
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] = (max((((arr_16 [i_6 - 3] [9] [13] [i_6 - 3] [i_6] [i_6 - 3] [i_6]) ? (arr_19 [i_6 - 2] [1] [i_6 + 1] [i_6 + 1] [i_6 - 2]) : (arr_19 [i_6 - 1] [i_6 - 2] [i_6 - 3] [i_6 + 1] [i_6 - 3]))), (((-79 & 1) ? ((var_11 ? 78 : (arr_20 [i_6 + 1] [i_4] [i_1] [i_1]))) : (arr_1 [i_1 - 1])))));
                            arr_22 [2] [i_0] = (arr_16 [i_6 + 1] [i_6 - 1] [i_6 - 3] [i_6 + 1] [i_6 + 1] [1] [i_6 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_19 = (arr_2 [i_2] [i_1] [i_0]);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = min((arr_1 [i_1 - 1]), -var_6);
                            arr_27 [i_0] [i_1] [i_2] [i_0] [i_7] [i_0] = ((((((1634076058 * 1) / ((((arr_10 [13] [10] [i_2] [i_4]) ? 2 : (arr_19 [i_0] [i_7] [i_2] [i_4] [i_7]))))))) ? (((-((min(7, var_10)))))) : (((arr_15 [i_0] [i_0]) * (arr_4 [i_1 - 1])))));
                            var_20 -= (min(var_4, var_0));
                        }
                        arr_28 [i_4] [i_4] [i_1 - 1] [i_4] [i_0] |= (((arr_14 [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]) < ((max((arr_16 [6] [i_4] [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]), 1)))));
                    }
                    var_21 = var_7;
                    arr_29 [i_2] [i_0] [i_2] = (min((((((1420896461 ? var_10 : 1634076059))) && (((-(arr_24 [i_0])))))), (max((42239 || var_4), 1))));
                }
            }
        }
    }
    var_22 = (!42239);
    var_23 = (max(var_23, -61));
    var_24 = var_12;
    #pragma endscop
}
