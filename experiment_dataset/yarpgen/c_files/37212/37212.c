/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -19914;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        var_15 = (((arr_2 [i_0]) ? ((var_9 ? (arr_1 [i_0] [3]) : (arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_16 = ((!(((var_8 ? (arr_5 [i_1]) : (arr_3 [6] [6]))))));
                    var_17 = (min(var_17, ((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((((var_9 ? (arr_0 [i_1]) : (arr_2 [i_1])))) & ((65513 ? -1 : -8)))))));
                                var_19 = (min(var_19, (((((!(arr_6 [i_1]))) && ((((arr_3 [i_4] [i_3]) ? (arr_0 [13]) : (arr_8 [i_1] [i_3] [i_4])))))))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] [i_3] [i_2] |= (arr_11 [i_3] [i_2] [i_1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_25 [i_1] |= var_12;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_20 = ((((10 ? 16659 : -127)) | (arr_22 [i_1] [i_1])));
                                var_21 = (arr_5 [i_9]);
                            }
                        }
                    }
                    arr_32 [i_1] [i_1] [i_1] [i_1] |= (((arr_27 [i_1] [i_1] [i_1] [i_1]) == (arr_27 [i_1] [i_6] [i_7] [i_6])));
                }
            }
        }
        arr_33 [i_1] = (((((var_1 ? var_12 : (arr_27 [i_1] [i_1] [i_1] [i_1])))) ? (arr_29 [i_1]) : (((arr_22 [i_1] [i_1]) ? var_10 : (arr_14 [i_1] [18] [i_1] [i_1] [18])))));
    }
    #pragma endscop
}
