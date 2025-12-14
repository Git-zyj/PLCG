/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 |= ((+(((arr_11 [i_4 + 2] [i_4 - 1] [i_1 + 1] [i_0 + 1]) - (((max(1, var_0))))))));
                                var_13 ^= (arr_5 [i_0] [i_0] [i_3]);
                            }
                        }
                    }
                }
                arr_12 [i_1] = (min(((((-9 ? 3918602441 : -9)))), var_0));
                arr_13 [i_0] [i_1] = 77;

                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_14 *= ((((((arr_4 [i_5 + 2] [i_5 + 1]) % (arr_4 [i_5 + 2] [i_5 + 2])))) ? var_10 : (arr_6 [i_0] [i_0] [i_0] [i_6])));
                        var_15 = (arr_3 [i_0 - 2] [i_1 + 2] [i_1 - 3]);
                        arr_18 [i_0] [i_1] [i_5] [i_6] = (((((~(arr_3 [i_0 - 2] [i_1 - 2] [i_5 + 1])))) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : ((-((~(arr_6 [i_6] [i_5] [i_0] [i_0])))))));
                    }
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        var_16 = (max(var_16, ((((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) ? (((arr_16 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) - (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (min((arr_8 [i_0] [i_0] [i_5] [i_5]), -var_6)))))));
                        arr_22 [i_7] [i_7] [i_0] [i_7] [i_0] |= (((arr_10 [i_0 - 2] [i_1 - 2] [i_0 - 2] [i_7 - 2]) ? ((-(arr_8 [i_0 - 1] [i_1 - 1] [i_5] [i_7 - 4]))) : ((~(arr_8 [i_0 - 1] [i_1 + 2] [i_1] [i_7 - 3])))));
                        arr_23 [i_0] [i_5] [i_5] [i_5] = ((((!(arr_20 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7]))) ? (((arr_20 [i_7 + 1] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7]) ? (arr_19 [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1]) : (arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7]))) : ((min((arr_20 [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_7] [i_7]), (arr_20 [i_7 + 1] [i_7 - 4] [i_7 - 2] [i_7] [i_7 - 2]))))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_5] = (arr_6 [i_5] [i_1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_17 -= var_4;
                                arr_31 [i_5] [i_1] [i_5] [i_8] [i_5] [i_5] = (max((arr_9 [i_0 + 1] [i_1 - 2] [i_9 - 2]), (((arr_30 [i_0] [i_1] [i_5] [i_5] [i_1]) ? ((-(arr_19 [i_8] [i_8] [i_8] [i_8]))) : (7484887514057110725 != var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 *= ((((min(var_5, var_10))) ? (max(var_10, var_5)) : ((((max(246361436, var_5))) ? ((var_1 ? -3831 : var_4)) : (min(var_11, 1187777606))))));
    #pragma endscop
}
