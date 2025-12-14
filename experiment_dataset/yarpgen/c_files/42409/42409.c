/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_10 = var_3;
                arr_6 [i_1] = (~var_1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((((!(arr_8 [i_0] [i_1 + 2] [i_2] [i_2]))) ? (arr_0 [i_0] [i_3]) : (((arr_10 [i_1]) >> (arr_0 [i_0] [i_1])))))) : (((arr_13 [i_0] [i_1 - 2] [6] [i_1 - 2] [i_4] [i_4 + 3]) ? -1276308917785545843 : var_6))));
                                var_11 = var_2;
                                var_12 &= (((((arr_11 [i_2] [6] [6] [i_3]) <= ((var_5 ? var_9 : 4066019003)))) ? (((var_8 <= (var_7 > var_0)))) : (((!(arr_0 [i_2] [i_1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_13 = (min(var_13, (((var_5 ? (arr_19 [i_5] [i_5 + 2] [i_6] [i_7 - 1]) : ((((arr_17 [i_5 + 2] [i_5]) != -1771796875))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_14 = ((((!(arr_15 [i_7 - 1]))) ? ((((arr_16 [i_6] [i_7 - 1]) || (arr_21 [i_9] [i_7] [i_9] [i_5 + 2] [i_7] [i_5 + 2])))) : (!-2941449618002589733)));
                                var_15 &= (min((((var_5 ? ((4066019006 ? -8 : (arr_23 [i_5] [i_6] [i_5] [i_8]))) : -28))), (((arr_21 [i_5] [i_5 + 2] [i_7] [i_7 - 1] [i_6] [i_7]) ? (arr_21 [i_5] [i_5 - 1] [i_7] [i_7 - 1] [i_6] [i_9]) : 228948290))));
                                var_16 = (min(var_16, (min((max((!13875), (min(1, 9)))), (((var_4 > (arr_24 [i_5 + 1] [i_6] [i_5] [i_5] [i_5 + 2]))))))));
                                var_17 = ((((4125285108399784601 ? (((arr_23 [i_8] [i_8] [i_8] [i_8]) ? var_4 : (arr_19 [i_5] [i_7] [i_8] [i_9]))) : var_9))) ? (arr_24 [i_5] [i_7] [i_6] [i_7] [i_7]) : ((~((-(arr_19 [i_6] [i_7] [i_7] [i_9]))))));
                                arr_25 [i_7] [i_6] [i_6] [i_6] [i_7] = (((arr_23 [7] [i_7 - 1] [i_6] [i_5]) ? ((((!((((arr_20 [i_7] [i_7]) & (arr_18 [i_5] [i_9])))))))) : (((arr_16 [i_5 - 1] [i_7 - 1]) >> (((arr_16 [i_5 - 1] [i_7 - 1]) - 2415183886))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_18 = 1137234613;
                            var_19 = ((1669312565 ? (~var_9) : (arr_17 [i_10] [i_13 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_20 = 178;
                            var_21 = (((((((arr_20 [i_15] [i_15]) ? (arr_31 [i_15] [i_14] [i_11] [i_10]) : -140935155)))) <= ((min((!-1771796875), ((!(arr_38 [i_10] [i_10] [i_15] [i_15] [i_15]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
