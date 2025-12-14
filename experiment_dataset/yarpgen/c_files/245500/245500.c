/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_16 = (min(((min(62, 1649258535))), ((-(max(-1, var_10))))));
                        var_17 ^= (min(var_8, (((var_12 && (arr_0 [i_3 - 1]))))));
                        arr_9 [6] [6] |= ((var_9 % (((arr_6 [i_1 - 4]) ? var_9 : (arr_6 [i_1 - 2])))));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_14 [i_0] [i_1 - 2] [i_0] [i_4 - 2] [i_5 + 1] = 1;
                            arr_15 [i_0] [i_0] [i_5 - 1] = var_3;
                        }
                        var_18 |= (((-(arr_12 [i_4 - 1] [i_4] [i_2] [i_2 + 3] [i_2]))));
                        var_19 -= (arr_10 [i_0] [i_0]);
                        arr_16 [8] |= (((var_12 >= var_1) <= var_11));
                    }

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        var_20 *= (((~var_15) ? ((((((var_7 ? var_15 : var_5)) > (arr_1 [i_6] [i_2]))))) : (((arr_10 [i_0] [3]) ? var_7 : (arr_10 [i_0] [i_0])))));
                        arr_20 [i_6] [i_0] [i_2] = (!var_0);
                    }
                    for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_21 -= 1;
                        var_22 = ((min(5, (arr_22 [16] [i_1 + 1] [i_1] [i_1] [i_1 + 1]))));
                        arr_24 [i_0] [i_1] [i_1 - 3] [i_2] [i_0] [i_7] = (((((1 && (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_8 = 3; i_8 < 20;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_23 = (min(var_23, 134));
                            var_24 -= 17650750884546746918;
                        }
                        arr_30 [i_0] [i_8] [i_8 - 1] [i_8 - 3] = 1833943999;
                        arr_31 [i_0] [i_1] [i_2 + 3] [i_8] = -5;
                        var_25 = (42833 >> ((((-(var_10 >> 1))) + 3174741269521579655)));
                        arr_32 [i_0] [i_8 - 2] [i_8 - 2] [i_2] [i_1] [i_0] = var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_26 = 42833;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            {
                                arr_45 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_12] [i_10 + 1] = (((((min((arr_8 [i_12]), var_9)))) > ((var_10 ? (arr_33 [i_11 + 1] [i_10 - 1]) : (arr_33 [i_11 + 1] [i_10 - 2])))));
                                var_27 = (((arr_19 [i_14] [i_12] [i_14] [i_14 - 1] [i_12] [i_14]) || ((min(13076622907568007454, 1833943999)))));
                                arr_46 [8] [i_13] [i_12] [i_10] [i_11] [8] &= (((((!(-1 < var_15)))) / var_9));
                                arr_47 [i_14] [i_12] [i_12] [i_12] [i_10 - 2] = (((((1 != -118) * (arr_3 [i_13] [i_14 + 3]))) > -var_4));
                                arr_48 [0] [i_11 - 1] [4] [i_12] [i_13] [4] |= (67108863 && 14520836799513607337);
                            }
                        }
                    }

                    for (int i_15 = 2; i_15 < 9;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                        {
                            var_28 ^= ((((min(1, var_1))) ? (min(-1, (arr_29 [16] [14] [14] [i_15] [i_16] [i_15 + 3]))) : (max(var_1, (arr_29 [i_11] [2] [i_12] [2] [i_16] [i_15 + 2])))));
                            arr_55 [6] [0] [i_12] [i_16] &= var_15;
                            arr_56 [8] &= 1;
                        }
                        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
                        {
                            arr_60 [i_10 + 1] [2] [i_17] [i_12] [i_17] |= max(1, 0);
                            var_29 = 0;
                        }
                        var_30 = (((((arr_19 [i_10 - 1] [i_12] [i_10 - 1] [9] [i_12] [i_15 - 2]) ? var_15 : var_1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
