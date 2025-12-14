/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = ((min(((-9223372036854775807 ? var_8 : -6980732902910063785), (((254 ? (arr_3 [i_1]) : (arr_1 [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 1] [i_0] [i_2] [i_0 + 1] [i_0] [i_0 + 1] = (((((116 < (arr_8 [i_0 - 1] [i_0 - 2] [i_3 + 2] [i_4 - 1])))) == var_4));
                                arr_12 [i_4] [i_4] |= min(((-(min((arr_0 [i_3] [i_0]), (arr_3 [i_0 - 2]))))), (((arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 3] [i_3] [i_3]) % (arr_6 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 3] [i_3 + 1] [i_3]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_12 |= ((((((arr_3 [i_6]) > -9223372036854775804))) ^ (var_4 != -9223372036854775804)));
                                var_13 *= ((-((~(arr_2 [i_1] [i_5])))));
                                var_14 = 14415339287136014759;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 12;i_8 += 1)
                            {
                                arr_22 [i_0] = (((arr_7 [i_0 - 2] [i_0 + 2]) <= (arr_19 [i_0] [i_1] [i_0 + 2] [i_5 - 2] [i_1] [i_8] [i_5])));
                                var_15 = ((1 != ((var_6 >> (var_5 - 1389118288)))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0 - 2]) << (9223372036854775806 - 9223372036854775746)));
                            }

                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                var_16 *= (min(((((min(522240, (arr_7 [i_0] [i_9])))) - (min(-9223372036854775804, 100)))), 0));
                                var_17 &= (max((min((arr_8 [i_9] [i_5] [11] [i_0]), (max((arr_18 [i_0 - 3] [i_6]), var_4)))), (arr_16 [i_9] [i_6] [i_5] [i_1] [i_0] [i_0])));
                            }
                            for (int i_10 = 1; i_10 < 9;i_10 += 1)
                            {
                                var_18 += -126;
                                var_19 = (min(((~((var_7 ? var_8 : var_7)))), ((~((var_7 / (arr_1 [i_0])))))));
                                arr_31 [i_0] [1] = ((4611686018360279040 < ((((arr_25 [i_0] [i_1] [i_1] [i_6] [6] [i_1] [i_1]) ? var_0 : (arr_25 [i_0] [i_0 - 3] [i_5] [i_6] [i_0 - 3] [5] [i_1]))))));
                                var_20 = (min(var_20, (((((-(min(-9223372036854775807, 93)))) < (((240 ? 2113929216 : 73))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 140;
    #pragma endscop
}
