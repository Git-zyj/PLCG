/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = ((((max(2046994006, (1511271021 & 10481)))) ? 10493 : ((1 ? 10486 : 167))));
                                var_14 = (min(((~(arr_8 [i_0] [14] [i_3] [14] [i_2 + 2] [i_4 + 1]))), (((!(arr_8 [i_0] [12] [i_0] [i_0] [i_2 + 1] [i_4 + 1]))))));
                                var_15 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_16 [i_0] [i_5] &= ((~((((max(var_10, 10481))) ? (~1) : (((arr_7 [i_2] [i_6]) ^ var_11))))));
                                var_16 = (max(var_16, -10487));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_17 &= max(((-((-10482 ? 10513 : (arr_17 [i_2 + 3] [i_1] [i_8] [i_7] [i_2 + 3]))))), ((max(32767, (arr_2 [i_2 - 1] [i_2 + 2] [i_2 + 1])))));
                                var_18 = -10477;
                                arr_21 [i_7] [i_7] [i_2 - 1] [i_1] [i_7] = ((((max((arr_14 [i_8] [i_8] [i_2 + 2] [i_2 + 2]), (arr_3 [i_2] [i_2 + 2] [i_2 + 2])))) % (max((arr_15 [i_2 - 1] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 - 3]), (~32767)))));
                                arr_22 [i_7] = ((+(((arr_0 [i_2 + 3]) | -10487))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_19 -= ((!(((max(var_0, (arr_3 [i_9] [i_2] [i_1])))))));
                                arr_28 [i_9] [i_9] [i_2] [i_1] [i_9] = (min(0, 10495));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_20 &= (((((-10487 ? 30231 : 87))) | (arr_25 [i_2] [i_11] [i_11 + 1] [1] [i_11 - 1] [i_12])));
                                arr_35 [i_1] [i_11] = ((~(((arr_33 [i_1] [i_1] [i_11 - 1]) ^ (arr_33 [11] [i_2] [i_11 + 2])))));
                                var_21 = (max(-var_5, (((max(var_7, var_12))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 0;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((~(arr_40 [i_17] [i_13 + 1] [i_16 + 2]))))));
                                arr_50 [i_13] = (((((((max((arr_11 [i_13] [i_14] [i_14] [12] [i_16] [6]), (arr_15 [i_13 + 1] [i_14] [i_15] [i_14] [i_17])))) ? ((55 ? -56 : (arr_6 [i_13 + 1] [i_14] [i_15] [i_16] [i_13 + 1] [i_17]))) : (~822342574)))) ? 10521 : ((0 | (((max(-1, 32767))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            {
                                var_23 = (max(var_23, -1637524700));
                                var_24 |= (~32767);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 12;i_21 += 1)
                        {
                            {
                                arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] = ((0 ? (-9223372036854775807 - 1) : 4294967295));
                                var_25 = (max(var_25, (((-(arr_51 [i_13] [i_21] [1] [i_13] [i_13] [i_21]))))));
                                arr_64 [i_15] [9] [i_13] [i_15] [9] [8] = 1998162269;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
