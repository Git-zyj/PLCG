/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((((((arr_1 [1]) && (arr_1 [i_0]))))) + (((arr_1 [i_0]) + var_9))));
        arr_2 [i_0] &= 21617;
        arr_3 [1] [1] = (arr_1 [i_0]);
    }
    var_21 = 8228375671669143718;

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((((-(max(3234678809, -7838142607486938956))))) ? ((((77 + 890141595) ? ((-(arr_4 [i_1]))) : (((arr_5 [i_1] [i_1 + 2]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1])))))) : -5799182400588663707);
        arr_7 [i_1] = 1;
        arr_8 [i_1] = (0 * 4290830699);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_22 = arr_12 [6] [i_3] [6];
                    var_23 = (min(var_23, (((((min(var_16, var_5))) ? ((((((1 >> (arr_12 [i_2] [i_3] [i_4])))) & ((var_17 << (49945 - 49915)))))) : 6908242542960991953)))));

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_24 -= var_6;
                        var_25 = (((arr_14 [i_2] [i_2] [i_2 - 1] [i_2 - 1]) / ((((((1 ? var_14 : 58225))) ? (arr_16 [i_2] [i_2 - 1] [i_3] [i_4] [i_2] [i_5]) : (var_11 * 88673943))))));
                        arr_18 [i_5] [i_4] [i_3] [i_3] [11] [i_2] = (((((arr_12 [i_2] [i_4 + 1] [i_4 + 1]) ? (arr_12 [i_5 - 1] [i_4 - 1] [i_3]) : (arr_12 [i_4 - 1] [i_3] [i_2 - 1]))) & 2147483647));
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_26 = (min(255, (((arr_22 [i_4 - 1] [i_3]) ? (arr_11 [i_3] [i_4 - 1]) : var_1))));
                        arr_23 [i_3] = max(((((max(3416806657, 5479089505455720905))) ? (((100 ? 14402 : -97377954))) : ((-(arr_13 [i_2 - 1] [i_2 - 1]))))), ((~(min(0, 3928910967)))));
                    }
                    var_27 -= (((((~148) & (arr_12 [i_4 + 1] [i_4 + 1] [i_2 - 1]))) & (((arr_10 [i_2] [i_3]) | (arr_9 [i_2])))));
                    arr_24 [i_4] [i_3] [i_3] [i_2] = (((((((~64) & -25)) + 2147483647)) >> ((((~((0 ? var_3 : 9047)))) + 9068))));
                }
            }
        }
        var_28 = (((arr_9 [i_2]) == (arr_17 [6] [6] [6] [i_2 - 1] [10])));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_28 [i_7] = var_14;
        arr_29 [i_7] = ((((0 << (-4435524505452363189 + 4435524505452363219))) + (arr_26 [i_7])));
        var_29 = ((-3846174638 ? -16383 : ((21013 / (arr_25 [i_7])))));
    }
    #pragma endscop
}
