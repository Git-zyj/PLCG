/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [3] [i_0] = ((((max(58022, 29))) ? (~10001071035106107425) : (arr_0 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (arr_3 [i_1]);
                                var_21 = ((-var_0 ? 11627 : (min((51 | -8903), var_6))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = (min(((((arr_15 [i_0] [i_0] [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 1] [i_5 + 1]) | (arr_15 [i_0] [i_0] [i_5 - 1] [i_5] [7] [i_0] [i_5 - 1])))), (var_19 + var_10)));
                                arr_20 [i_0] [i_1] [9] [i_1] [i_1] = ((~(arr_7 [7] [7] [i_1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_23 = ((32767 ? 8902 : -8903));
                                var_24 -= (~-71);
                                arr_33 [i_9] [10] [i_9] [i_8] [i_9] [i_9] [i_9] = ((((((((arr_26 [i_8] [i_8] [i_8]) ^ 247))) ? 236 : (8902 + 3874067609481425417))) <= (((max((arr_23 [i_7] [16]), (arr_23 [5] [i_9])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_38 [i_7] [i_8] [i_8] [i_8] = (min(-23058, ((((arr_32 [i_8] [1] [i_12 + 1] [i_12 + 1] [i_13] [i_13]) <= (arr_23 [16] [i_8]))))));
                                var_25 *= 30131;
                                arr_39 [i_8] [i_8] = 32565;
                                arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_13] = (((((~((-(arr_23 [i_8] [i_8])))))) || (~-8902)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_26 = (max(0, var_17));
                                var_27 *= ((((max((arr_42 [6] [i_7] [i_9] [16] [i_14] [12]), (arr_27 [10] [i_9] [14]))) + 30131)));
                            }
                        }
                    }
                    arr_46 [i_8] [i_7] [i_8] [i_9] = (arr_28 [i_7] [i_8] [i_9]);
                }
            }
        }
    }
    var_28 = var_16;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            {
                var_29 = (min(-30132, ((97 % ((1098814680 ? 255 : 23628))))));
                arr_53 [i_16] [3] = ((~((min(-30150, -30)))));
            }
        }
    }
    #pragma endscop
}
