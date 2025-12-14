/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] = 6963718692915145957;
                var_18 = -32746;
                arr_6 [1] [1] = (arr_4 [i_0 - 3] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_19 = ((!(((~(arr_10 [i_2]))))));
                                var_20 = ((0 ? (arr_13 [i_3] [i_4] [i_5] [i_6]) : (((arr_1 [i_5]) ? 1 : 1970591004))));
                                arr_18 [i_2] [i_3] [i_2] [i_3] [i_5] = (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            }
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((min(-208, (max((arr_8 [i_7]), (arr_11 [i_7] [i_7] [i_7]))))) > (((-(arr_11 [i_5 + 1] [i_3 - 1] [i_4]))))));
                                var_21 = (max(((((16383 || 255) || ((max(-1, 128)))))), (((arr_19 [i_3] [i_3] [i_5 + 1] [i_3]) ? (arr_19 [i_3] [i_3] [i_5 + 1] [i_5 + 1]) : 1))));
                            }
                            var_22 = (max(var_22, (((1 >= (((((-(arr_11 [i_3] [i_4] [i_5])))) ? (max((arr_19 [i_5 + 1] [i_4] [i_3] [i_2]), var_11)) : var_17)))))));
                        }
                    }
                }
                var_23 = (max((max(32766, var_13)), 120));
            }
        }
    }
    var_24 = ((-1048064 ? var_5 : ((-65535 ? ((120 ? 18446744073709551607 : 1)) : (max(18055359771579064667, 24651))))));

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_24 [i_8] = ((~(((1 <= (24 & 11006))))));
        arr_25 [i_8] = (-(((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_19 [10] [i_8] [i_8] [i_8]) : 32767)));
        arr_26 [i_8] [i_8] = (((((-(var_7 ^ var_14)))) ? ((((243810826 - (arr_22 [i_8] [i_8]))))) : (min((arr_7 [i_8] [i_8]), (((var_8 ? (arr_7 [i_8] [i_8]) : (arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    #pragma endscop
}
