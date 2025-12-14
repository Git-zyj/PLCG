/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((var_16 + 1836629243) ? 518358954 : (max(var_12, var_16))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (((((~(arr_4 [i_1])))) + (((((((arr_3 [i_0] [i_1] [i_2]) && 1591226360)))) & (max(2097151, -2336914913190920054))))));
                    arr_9 [i_1] [10] = (arr_2 [i_0]);
                    var_21 &= ((max((168 % -4008246541172055969), (min((arr_4 [i_2]), 2336914913190920054)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_4 - 2] [i_1] [i_2] [i_3] [i_4] [i_1] = ((-(min(9223372036854775794, 2336914913190920053))));
                                var_22 -= 111;
                                var_23 = ((-2336914913190920050 <= (((max((arr_6 [i_0] [i_1 - 1] [i_4 - 1] [i_1 + 1]), (arr_0 [i_4] [16])))))));
                            }
                        }
                    }
                    arr_15 [i_2] [i_2] [i_0] &= (arr_12 [16] [i_1] [i_1] [i_1] [i_1 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            {
                arr_22 [i_5] = (((arr_18 [i_6]) ? 124 : (arr_21 [i_5] [i_5])));
                var_24 = (max(var_24, 12727895180094675540));
                arr_23 [i_6] [i_6] [i_6] |= 1484686097;

                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_28 [i_5] [i_5] [17] |= ((((arr_17 [i_5] [i_7]) + 6307048155306847615)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_25 = (max(234436959, (((~(arr_20 [i_6 - 2]))))));
                                var_26 = (arr_21 [i_6 - 1] [i_6 + 2]);
                            }
                        }
                    }
                    var_27 = (~6307048155306847628);
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_41 [i_10] = ((((((!(((162 ? 1511484078 : 12139695918402704000))))))) == ((~(2336914913190920054 + -11976)))));
                                var_28 = -8102043153575127357;
                            }
                        }
                    }
                    var_29 = (min(var_29, (((!((((arr_35 [i_5] [i_6] [10] [i_6]) ? (arr_35 [i_6 - 2] [9] [i_6 - 2] [i_10]) : (max((arr_31 [13] [i_6 + 2] [i_6] [13] [i_5]), (arr_24 [i_5] [i_5] [12])))))))))));
                    var_30 = (arr_18 [i_6]);
                    var_31 = 168;
                }
            }
        }
    }
    var_32 = (min(var_32, (!var_16)));
    #pragma endscop
}
