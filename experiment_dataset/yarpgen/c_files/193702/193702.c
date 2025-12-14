/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] [i_4] [i_3 - 4] [i_4] [i_2] [i_2] = (((((min(var_6, -1))) <= -4)) ? (arr_6 [i_2]) : var_0);
                                arr_15 [i_0] [i_2] = ((~(((-4 + 2147483647) >> 0))));
                                arr_16 [i_0] [i_1 + 1] [9] [i_0] [i_1 + 3] = min((arr_10 [i_1] [i_2] [i_4 - 4]), (((!(arr_5 [i_0] [i_0] [i_2])))));
                                var_12 = (min(((!(arr_7 [i_3 + 1] [i_1 + 2]))), (((arr_9 [i_1 + 1] [i_1 - 1] [i_2] [i_3] [i_3 + 2] [i_4 - 3]) || 2882998317))));
                                var_13 = (min((arr_12 [i_0] [i_1] [i_2] [i_1] [i_4 + 1]), (arr_2 [i_3 + 2])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_14 = (arr_10 [i_0] [i_0] [i_0]);
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] = ((~((0 ? -21669 : 21656))));
                    }
                    arr_21 [i_0] [13] = ((4 < (~255)));
                }
            }
        }
    }
    var_15 = var_6;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_16 += (arr_12 [3] [i_7 - 1] [3] [i_7 - 1] [i_7 - 1]);
                                arr_35 [i_10] [6] [i_10] [i_10] [6] [4] [i_7 - 1] |= (min((-2147483647 - 1), 51));
                                var_17 *= ((((arr_18 [i_6] [i_9] [i_6] [i_7 - 1] [i_10]) ? var_10 : var_4)));
                                var_18 += var_9;
                            }
                        }
                    }
                    var_19 = (((arr_9 [i_6] [i_7 - 1] [i_8] [i_8 - 1] [i_7 - 1] [i_7]) ^ (arr_12 [11] [i_7 - 3] [11] [i_8 + 2] [i_8 - 1])));
                    arr_36 [i_6] [i_6] [i_6] [i_6] = var_5;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_51 [i_11] [i_11] [i_13] [i_13] [i_15] [i_15] = (((((-(arr_9 [i_11 - 1] [17] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1])))) ? (((arr_40 [i_11 - 1] [i_11]) / 8380416)) : ((((arr_40 [i_11 - 1] [i_11]) ? var_3 : (arr_9 [i_11 - 1] [i_11] [i_11] [i_11 + 1] [i_11] [i_11 + 1]))))));
                                var_20 = -3371194365517703475;
                            }
                        }
                    }
                }
                var_21 = (min((((min(var_7, 2047)) ^ (((min(var_6, (arr_18 [i_11] [i_11] [i_11] [i_12] [i_12]))))))), (((~(arr_3 [i_11 - 1]))))));
            }
        }
    }
    #pragma endscop
}
