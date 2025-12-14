/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 = (min(2485856703, 2485856688));
                    var_12 -= (((min((arr_5 [i_1]), (arr_0 [i_1] [i_1]))) > (1184394348 * -1080853127)));
                }
            }
        }
        var_13 = ((~(arr_6 [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(864704473, 2015042528098338955)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 ^= ((((68 > ((((arr_13 [i_5]) && -9189041500376888525))))) ? (((32767 ? 252 : (arr_11 [i_0] [i_0] [16] [i_5])))) : var_9));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [13] [i_0] [13] = -9189041500376888530;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_16 = ((((min((arr_18 [i_0 + 1] [i_4 - 2] [i_7] [i_7 + 2] [0]), -var_1))) ? (((-31691 ? (max((arr_3 [i_8] [i_8]), var_0)) : (arr_16 [i_3] [i_8] [i_4] [i_7])))) : (((arr_4 [i_4]) ? var_0 : 2485856697))));
                                arr_24 [i_0] [i_0] = (max(((((max(-123, var_9))) ? (min((arr_21 [i_0] [i_4 - 1]), -12)) : (-9189041500376888530 || var_9))), -var_4));
                            }
                        }
                    }
                    var_17 = ((((max((((0 * (-32767 - 1)))), -268304384))) ? var_5 : (((166 ? var_5 : var_7)))));
                }
            }
        }
        var_18 = ((min((arr_1 [i_0]), (arr_6 [i_0] [i_0 - 1] [i_0] [i_0]))));
        arr_25 [i_0] [i_0] = ((var_6 ? (((!(arr_21 [i_0] [i_0 + 1])))) : ((((arr_2 [i_0 - 3] [i_0] [i_0 - 2]) == var_9)))));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_19 = (-(((((75 ? -49 : 16))) ? -28252 : 15228499287454030121)));
        arr_28 [5] = (((arr_3 [2] [2]) ? (((~(!250208481)))) : (min(4294967295, 93))));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_20 = (min(var_20, (((~((-(max(var_10, (arr_13 [i_11]))))))))));
                    arr_33 [i_9] [i_9] [i_11] [i_11] = ((((((-3835769802461747138 == var_8) * var_10))) ? 128 : ((var_5 * (min(15228499287454030121, -9189041500376888530))))));
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((~((-35099 + (var_5 * 536870911)))))));
                                var_22 = ((max((16440090271621730094 * 2614143987), (((2772125089 ? (arr_9 [i_11] [i_13]) : 195))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        var_23 = ((-((var_2 ? (!var_3) : (min(3591193087, (arr_39 [21] [i_14])))))));
        arr_41 [i_14] = ((var_3 ? (min((((17004502501268595261 ? var_7 : 44042))), var_2)) : (((~((((arr_40 [i_14]) || var_8))))))));
    }
    var_24 = (((((((max(35110, var_7))) ? var_2 : var_5))) ? var_2 : (min((var_0 - var_4), var_2))));
    #pragma endscop
}
