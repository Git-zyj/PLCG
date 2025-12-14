/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = max((((-34 ? 52 : (arr_9 [1] [i_1] [1] [i_1] [1])))), (min(((-34 ? 3647430800 : 196)), 1023)));
                                var_16 = ((-1 ? (((arr_10 [i_0] [i_0]) ? (arr_10 [4] [i_4]) : (arr_10 [i_0] [i_0]))) : (((-9223372036854775807 - 1) + (arr_10 [5] [5])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((min(var_3, (((arr_4 [i_0]) ? var_0 : var_14))))))));
                                arr_19 [1] [i_1] [4] [i_5] [i_6] = (((-127 - 1) ? 33 : 2107140352));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_14 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 3] [5] [i_8 + 1])));
                                arr_25 [i_0] [1] [i_0] [i_0] [i_8] [i_8] = (max(((~(arr_0 [i_0]))), (((arr_0 [i_0]) * (arr_0 [i_1])))));
                                arr_26 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_20 [i_0] [5] [i_0] [i_0] [i_0] [9]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += (max(-24, 1));
    var_20 ^= var_9;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_21 -= (+-9223372036854775793);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_22 = (min((((!(2107140352 / -7429)))), (min(-24, 7048013709217380472))));
                                var_23 = (19 >= 647536490);
                                arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] = (arr_33 [i_11] [i_11]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_44 [i_11] [i_11] [i_11] [1] [i_11] = (((max((arr_36 [i_11] [i_11] [i_11]), (!var_11)))) ^ (arr_36 [i_9] [i_9] [i_10 + 1]));
                                arr_45 [i_9] [i_9] [i_9] [i_9] [i_11] [i_9] [i_9] = ((6525939149104520546 ? 196 : 44));
                                arr_46 [i_9] [i_9] [i_9] &= ((-((min((arr_43 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 3] [i_15 - 1] [i_15 + 3]), (arr_37 [i_15] [i_15 + 3] [i_15 + 3] [i_15 + 3] [i_15] [i_15 + 4] [i_15]))))));
                                arr_47 [i_9] &= (((max((arr_30 [1]), (arr_30 [i_15]))) != (max((arr_30 [i_9]), (arr_30 [i_9])))));
                                arr_48 [i_11] = 38823;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
