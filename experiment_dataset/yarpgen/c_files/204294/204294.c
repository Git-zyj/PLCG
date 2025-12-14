/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (min(56818, (arr_3 [i_0] [i_2 - 1])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_22 = -1;
                            var_23 -= -53;
                            var_24 = ((-(arr_9 [i_4] [i_4] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_1 + 1])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 = (min(var_25, 302285630));
                            var_26 -= (arr_3 [i_0] [i_1]);
                        }
                        var_27 = (((3 <= -13) ? -302285628 : -302285631));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_28 = ((arr_4 [i_0] [i_2 - 1] [5]) + (((arr_4 [i_0] [i_2 + 2] [i_2]) ? (arr_12 [1] [i_2 + 2] [1] [i_6] [i_1 + 3]) : (arr_12 [i_0] [i_2 + 1] [i_2] [i_6] [i_1 + 1]))));
                        arr_19 [i_0] [i_0] [i_0] [i_6] = (arr_6 [7] [i_1] [i_2 + 1]);
                        arr_20 [i_0] [i_1 + 4] [i_2] [i_6] = (((max(36672, (arr_6 [i_0] [i_0] [i_0]))) ^ ((((min(53, (arr_7 [3] [i_1 + 3] [i_0])))) ^ ((max((arr_13 [i_0] [i_6]), -3)))))));
                        var_29 = (((max(var_14, (arr_17 [i_2 + 2] [6] [i_2 + 1] [i_2] [i_1] [i_1 + 4]))) & (((-(arr_14 [i_0] [i_6] [2] [i_2] [i_2] [i_1 + 2] [i_0]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_7] [i_7] [i_2] [i_2] = ((67 >> (-883629161 + 883629177)));
                        var_30 = (((((var_5 ? var_3 : (arr_11 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? ((4701 ? ((var_18 ? (arr_4 [8] [12] [12]) : var_18)) : ((-(arr_3 [i_0] [i_2]))))) : (arr_0 [i_0] [12])));
                        var_31 -= ((((((1 ? -1616769848 : (arr_8 [i_0] [7] [i_0] [i_0]))))) - 114));
                        var_32 = (min(var_32, ((((1616769848 ? 2625469244 : 1))))));
                    }
                    arr_25 [4] [1] [i_2] = (((43589 ? 10 : -5651636490642945175)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_33 = (min(var_33, (arr_21 [i_0] [i_0] [i_0])));
                                arr_32 [0] [i_8] [0] [i_0] = ((~(arr_5 [i_8] [i_8])));
                                arr_33 [i_0] [i_1] [i_2] [i_8] [i_9] [1] = (arr_4 [i_8] [i_1 + 4] [i_0]);
                                var_34 = (arr_14 [i_0] [i_1] [i_2] [i_8] [i_9] [i_9] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 = (max(var_18, -var_4));
    #pragma endscop
}
