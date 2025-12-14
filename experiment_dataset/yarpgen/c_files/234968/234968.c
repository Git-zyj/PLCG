/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (((arr_3 [i_2]) && (arr_9 [i_0] [i_0] [i_0] [i_0])));
                            var_21 = ((31492 ? (((!(arr_6 [i_2] [i_3 - 1] [i_1 - 1] [i_2])))) : (arr_0 [2] [i_3 - 1])));
                            var_22 = ((+(((arr_9 [i_1 + 2] [1] [i_3 - 1] [i_3 - 1]) ? (arr_9 [i_1 - 2] [i_1] [i_3 - 1] [i_3 - 1]) : (arr_9 [i_1 - 2] [i_1 - 2] [i_3 - 1] [i_1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_23 ^= min(var_4, (arr_15 [i_1] [i_1] [i_1]));
                            var_24 = (min(var_24, (((((arr_14 [i_5 - 1] [i_5] [i_5 + 2] [i_5]) > (arr_14 [i_5 + 2] [i_5] [11] [i_4]))) ? var_6 : ((-0 ? (max((arr_9 [i_1 - 1] [i_1 - 1] [i_4] [0]), var_14)) : var_2))))));
                            arr_16 [i_5] [i_0] [i_5] = (max(((((((arr_12 [i_5 + 2] [i_4] [i_1]) ? var_11 : (arr_3 [i_0])))) ? (31493 && 1853251136) : (((arr_0 [i_0] [i_4]) ? -542131945 : var_11)))), -32757));
                            var_25 = (max(var_25, (((((((!((((arr_11 [i_5]) ? var_13 : (arr_1 [i_0] [i_0])))))))) ^ ((var_17 & (((min(-31493, var_5)))))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_26 = 1746431279;
                    var_27 *= (+((((max((arr_6 [i_6] [i_6] [8] [i_6]), var_8))) ? (arr_1 [i_6] [i_7 - 1]) : (arr_8 [4] [i_7] [i_8 - 1] [4] [i_6 - 4]))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            {
                                var_28 = ((-(arr_28 [3] [3] [i_8 - 1] [i_6] [i_6 - 2] [i_6])));
                                var_29 *= (((((((min((arr_9 [5] [5] [i_9] [i_10]), (arr_2 [i_6 + 2] [i_7])))) ? (var_2 < 650024447) : (min((arr_20 [i_8]), (arr_18 [i_9])))))) ? (min(650024447, 1992807907)) : var_15));
                                var_30 = (min(var_30, ((((((((((arr_18 [i_6 - 4]) ? (arr_20 [i_9 + 1]) : 31492))) ? (var_16 + 3020812371) : (arr_29 [i_6] [i_7 - 1] [i_10 - 1])))) ? (arr_28 [3] [i_7 + 4] [i_7 + 4] [3] [i_10] [i_7 - 1]) : (arr_11 [15]))))));
                                var_31 = 53774;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_32 = (arr_26 [i_8 - 1] [4] [i_8 - 1] [11]);
                                var_33 ^= (!(((max((arr_0 [i_6] [i_7]), var_13)))));
                                var_34 ^= (((max((((arr_28 [i_6] [i_6] [i_6] [i_8] [i_11] [i_12 - 1]) + (arr_24 [i_6 + 2] [i_7 - 1]))), (min(var_0, (arr_22 [2] [i_8] [i_7]))))) > (11762 | var_14)));
                                var_35 *= ((var_8 ? (arr_17 [i_11]) : (arr_33 [i_6] [i_6] [i_6 - 4] [i_6 - 4] [i_6] [i_6])));
                                var_36 = (arr_27 [i_6] [1] [i_8] [i_8]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
