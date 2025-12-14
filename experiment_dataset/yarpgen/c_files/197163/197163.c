/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((min(var_8, var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2 + 1] = 5722282520650362084;
                    var_11 = (min(var_11, (((!((max((((!(arr_7 [i_0] [i_0] [i_0])))), 5722282520650362084))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_12 += (arr_17 [i_3] [i_4] [i_5]);
                                var_13 = (max(((-(arr_16 [i_7 + 1] [18] [i_6 + 2] [i_6 + 2]))), (min((((arr_15 [i_4] [i_5] [i_6 + 3]) ? 1 : var_7)), (arr_19 [i_6 + 2] [i_4] [i_6 + 2] [i_7 + 1] [i_7] [i_6])))));
                                arr_20 [i_7] [i_4] [i_5] [i_6 + 2] = (max(3227100128, var_5));
                            }
                        }
                    }
                    var_14 = ((!(arr_10 [i_3])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                arr_25 [i_8] = (arr_10 [i_8]);

                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    arr_29 [10] |= (arr_19 [i_10] [i_9] [i_9] [i_8] [i_8] [i_8]);
                    var_15 *= var_9;
                    var_16 = -4154679795150432423;
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    arr_34 [i_9] [i_8] [i_8] [i_9] = 4154679795150432423;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                arr_39 [i_8] [i_8] [1] = 0;
                                var_17 *= (((~((-4154679795150432399 ? 0 : 10722)))));
                                var_18 &= ((~(arr_37 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
                            }
                        }
                    }
                }
                var_19 = ((((-(arr_2 [i_8] [18]))) + (((((((11 ? 0 : -30))) || (~16)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                arr_53 [i_14] [i_14] [i_14] [i_14] [i_14] [i_18] = ((-((((arr_40 [i_14]) && (arr_40 [i_15]))))));
                                var_20 = var_9;
                            }
                        }
                    }
                    arr_54 [i_14] [i_14] [i_16] [i_16] = ((359742038443768603 ? 1 : 1));
                }
            }
        }
    }
    #pragma endscop
}
