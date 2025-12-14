/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = 1438393228;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (max((((var_12 ? (arr_3 [i_0 + 4]) : (arr_3 [i_0 + 2])))), -1));
                                var_14 += (((((((arr_11 [i_0 - 2] [i_1] [i_2 + 2] [i_3] [i_4]) ? 954329808 : 9994646998602516307))) ? var_0 : (-1 ^ 16258043400814134772))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        arr_16 [i_0 - 4] [i_0 - 4] [i_2] [i_5] |= var_9;
                        var_15 ^= 806044762850452931;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_21 [i_6] [i_2] [i_6 - 1] [i_7 - 1] = (((var_5 % ((min(65535, (arr_8 [i_2 + 2])))))));
                                var_16 = (+((min((!var_11), (arr_4 [i_6 - 1] [i_0 + 2])))));
                                arr_22 [i_0] [i_6] [i_2] [i_6] [i_7] = (arr_3 [i_2]);
                                var_17 = (((78 ? 255 : (max(var_6, (arr_9 [i_0] [i_2] [i_2] [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_25 [i_8] [i_8] = (((arr_11 [i_8] [i_8] [i_8] [i_8] [i_8]) == (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])));
        var_18 += -63;
    }

    for (int i_9 = 3; i_9 < 21;i_9 += 1)
    {
        var_19 &= (arr_27 [i_9] [i_9 - 3]);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((!((((arr_30 [i_10] [i_9 - 1]) ? (arr_28 [i_9 - 1]) : 2188700672895416843))))) ? ((var_9 | (((-(arr_28 [i_11])))))) : (((~var_7) ? (max(var_3, var_12)) : ((((arr_39 [i_13] [i_9] [i_9] [i_9]) ? -73 : (arr_31 [i_10] [i_12] [i_10])))))))))));
                                var_21 = (max((((((-1 ^ (arr_26 [i_13]))) == (arr_27 [i_9] [i_10])))), (arr_27 [i_9 - 3] [i_10])));
                                arr_40 [i_9] [i_9] [i_11] [i_12] [i_9] = var_0;
                            }
                        }
                    }
                    var_22 = (((((0 - (arr_39 [i_9 + 2] [i_9 + 2] [i_9 - 2] [i_9 + 2])))) - (max(0, (arr_27 [i_9 - 1] [i_9 - 3])))));
                    var_23 = 151;
                }
            }
        }
    }
    var_24 &= ((var_1 ? 1018609826 : (!var_5)));
    var_25 ^= ((!((max(((var_3 ? var_2 : var_12)), (var_4 - -56))))));
    #pragma endscop
}
