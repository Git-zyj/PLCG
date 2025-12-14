/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~var_7), ((-var_6 ? -8326837543865012 : (min(var_10, 8326837543864994))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((((min(((min(8191, 22284))), ((var_14 ? 7567 : var_8))))) ? (((min(1, var_0)))) : (((!(arr_5 [14] [i_1] [14])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 ^= var_9;
                            arr_12 [i_3] [i_0] [i_0] [6] [i_0] [i_0] = ((-(min((arr_7 [i_2] [i_2] [i_2] [i_0]), (((-7561 ? (arr_0 [i_0]) : var_3)))))));
                        }
                    }
                }
                var_18 ^= var_10;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((min(240, (arr_23 [12] [i_5] [12] [i_6 - 1] [i_6 - 1] [i_8])))) ^ ((min((arr_23 [10] [10] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8]), (arr_23 [i_4] [0] [8] [i_6 - 1] [i_6 - 1] [i_6 - 1])))))))));
                                arr_24 [i_7] [i_7] [23] [i_7] [23] [i_4] = (min(((3194324381 ? (arr_14 [i_6 - 1] [i_6 - 1]) : (arr_14 [i_6 - 1] [i_7]))), (arr_14 [i_6 - 1] [i_6 - 1])));
                                var_20 = (((((-((min(1, var_10)))))) ? var_11 : (((arr_15 [i_7] [i_5] [i_4]) ? ((~(arr_19 [i_4] [i_6 - 1]))) : (arr_19 [i_5] [i_5])))));
                                var_21 ^= (~-2606798598280170026);
                                arr_25 [i_4] [i_5] [i_6 - 1] [i_4] [19] = (~-1);
                            }
                        }
                    }
                    arr_26 [i_4] [i_4] [i_4] = (((-(min((arr_20 [i_6 - 1] [3] [i_6] [0] [3] [i_4]), (arr_14 [i_4] [6]))))) | ((((arr_23 [22] [i_6 - 1] [i_5] [i_4] [i_4] [i_4]) ? (((!(arr_13 [i_4])))) : (!2606798598280170025)))));

                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        var_22 = (min(var_22, ((min(((3 ? (arr_20 [12] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_5]) : 1)), ((8191 ? (arr_20 [i_6] [i_6 - 1] [i_6 - 1] [4] [1] [i_9]) : 1)))))));
                        arr_29 [i_4] = (((arr_20 [i_6 - 1] [i_6] [i_6 - 1] [i_9 + 2] [i_9 + 1] [i_4]) ? (((var_6 ? 232 : 251))) : (arr_21 [i_4] [i_5] [i_4] [i_9])));
                        arr_30 [i_4] [11] [2] [11] = (min(((min((((!(arr_19 [i_4] [i_4])))), var_10))), var_3));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 &= ((!(arr_23 [i_4] [i_5] [i_5] [i_5] [i_10] [i_5])));
                        arr_33 [i_10] [i_5] [i_6 - 1] [i_4] [22] = (((min((arr_18 [i_6] [i_6] [i_4] [i_6]), (arr_17 [i_4] [i_4] [i_4]))) - var_6));
                        arr_34 [i_4] [i_5] [i_4] [20] = (min(var_5, (min(((-(arr_21 [i_4] [5] [i_5] [i_4]))), ((min(var_11, -8326837543864995)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
