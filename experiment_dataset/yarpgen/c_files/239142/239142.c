/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 -= var_9;
                                var_13 = var_0;
                                arr_13 [i_0] [i_0] [i_3] [8] &= var_5;
                            }
                        }
                    }
                    var_14 = (min(var_14, (((((-113 ? (var_5 && var_6) : (max(var_3, (arr_12 [13] [12] [12] [13] [i_1] [i_1]))))) + 50294)))));

                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_15 = -108;
                        var_16 -= ((+((((-72 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_0])))))));

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_5] &= 103;
                            var_17 = ((~(max((arr_1 [17]), 3714803441))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_18 = ((max((var_5 / 255), (var_0 < var_4))) / (((~((min(var_0, 65532)))))));
                            var_19 = (((((54 ? var_4 : (arr_9 [i_0] [7] [i_5 - 1] [7])))) ? ((-((3242209011 ? var_3 : 2070)))) : ((126 ? 580163855 : 14846))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_25 [i_1] [i_1] [i_2 + 1] [i_5] [i_5] [i_2 + 1] = 15062;
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = (((((var_8 ? 127 : var_1))) || (var_7 ^ 580163884)));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            var_20 = (min(var_20, (((~(((arr_4 [i_0]) + 44289)))))));
                            arr_29 [i_0] [i_1] = (((3134770009 ? var_5 : 213)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_21 = (max(var_1, (((((var_6 / (arr_0 [9])))) * var_3))));
                        var_22 = (max(179611627, (max((var_5 + 26135), ((max(-856530460, 4294967294)))))));
                        var_23 += (arr_24 [i_0] [i_0] [i_0] [i_10] [i_10] [i_2] [i_2]);
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_36 [i_1] [i_1] [i_1] = ((((((!((min(644207028, 13004432994756855453))))))) + 28));
                        var_24 = ((((249 ? (856530463 | 26135) : 2179568198)) + ((((arr_7 [i_2 + 1] [i_1] [i_2]) >> (14040 - 14026))))));
                    }
                    var_25 = ((~(arr_2 [10])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 22;i_14 += 1)
            {
                {
                    arr_45 [11] [6] [6] = 46520565;
                    var_26 = (((((-627131038 ? 856530459 : 86))) < (arr_42 [i_12] [i_12] [6] [6])));
                }
            }
        }
    }
    #pragma endscop
}
