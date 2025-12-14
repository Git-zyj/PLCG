/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 &= ((((!((!(arr_4 [i_0] [3] [i_1]))))) ? ((((var_13 ^ 118) || var_7))) : (arr_0 [15])));
                var_18 -= (((((var_15 << (((-33 + 62) - 15))))) ? (~-116) : ((min((max(118, (arr_3 [i_0 + 1]))), (arr_4 [i_1] [i_1] [i_1]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_15 [i_5] = ((((!(arr_8 [i_2] [i_2]))) ? (((!(arr_9 [i_5] [i_5])))) : (((arr_4 [i_2] [i_2] [i_2]) * (-127 - 1)))));
                        arr_16 [i_5] = (((arr_12 [i_2 + 1]) > (arr_12 [i_2 - 2])));
                        var_19 += arr_9 [i_5] [i_2];
                        arr_17 [i_2] [i_3] [i_4] [i_2] |= (arr_14 [i_2 - 1] [3] [i_2 + 1]);
                    }
                }
            }
        }
        var_20 = arr_3 [i_2 - 2];
        var_21 *= var_4;
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_22 = (max(var_22, (((((max((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) & ((min((arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_13 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
        var_23 = var_3;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                {
                    arr_24 [2] [4] [i_8] = ((((min(var_13, (arr_8 [8] [i_8])))) / ((39 ? (arr_18 [i_6]) : (arr_20 [10] [11])))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_24 &= arr_10 [11] [i_7];
                                var_25 = -6;
                                var_26 = ((-(((!(((-107 ? -107 : 121))))))));
                                var_27 = (min((arr_28 [i_10 - 1] [11] [12] [i_10] [i_10 - 1] [9]), ((127 ? (((var_2 || (arr_12 [i_6])))) : (arr_13 [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8])))));
                                var_28 = (min(var_28, (arr_19 [i_10])));
                            }
                        }
                    }
                    arr_29 [i_8 - 1] = (0 / -13);
                }
            }
        }
        var_29 = ((!((max(((-13 ? 25 : -121)), ((56 / (arr_19 [0]))))))));
    }
    #pragma endscop
}
