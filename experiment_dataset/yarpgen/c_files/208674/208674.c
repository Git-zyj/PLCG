/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((2 ? (var_1 * var_3) : (((max(var_3, var_3)))))) << (var_11 - 11469)));
    var_13 = -1;
    var_14 = ((!((var_9 > (min(var_11, var_6))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((~(min(((1 ? 15788 : (arr_1 [i_0] [7]))), (var_9 && var_8)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_15 += var_8;
            arr_8 [i_0] [i_1] = ((((137438953471 ? 1 : (arr_0 [i_0] [i_1]))) - (arr_6 [i_0] [i_0] [i_0])));
        }
        var_16 = (max(var_16, ((max((arr_7 [i_0] [i_0] [i_0]), 137438953484)))));
        var_17 = ((var_9 ? ((((var_0 >> (137438953471 - 137438953450))) - (arr_1 [i_0] [i_0]))) : var_2));
        var_18 = (((min((max(1, var_4)), -1)) - var_6));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 = ((67108800 ? 30 : (arr_9 [i_3])));
            var_20 |= (((1 - 1) ? ((1 ? 1 : (arr_9 [i_3]))) : (arr_9 [i_3])));
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_23 [i_2] [i_4] [i_5] [i_6] = ((!(((min(-67108801, var_0))))));
                        arr_24 [i_2] [i_4] [i_4] [i_2] [i_5] [i_2] = (((var_5 ? ((var_1 ? var_0 : (arr_13 [i_4] [i_4] [1]))) : (arr_18 [i_6] [i_6] [i_6 - 2] [i_6 + 2]))));
                        var_21 |= var_6;
                        arr_25 [i_2] [i_4 + 3] [i_6] [i_4 + 3] [4] [i_5] = (min(var_3, ((max((arr_14 [i_4] [i_5] [i_6]), var_5)))));
                    }
                }
            }
        }
        arr_26 [i_2] = var_4;
        arr_27 [i_2] = max((27716 >= 1), -var_8);
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_22 = (max(var_22, 1));
                        var_23 = (min(var_3, (arr_34 [i_7] [i_9 - 2] [i_9 - 3])));
                        arr_40 [i_7] [i_8] [i_9] [i_10] = (((((((((arr_33 [i_7] [i_8 + 2] [i_9]) + 2147483647)) << (((arr_21 [i_7] [i_8] [i_9] [i_10]) - 15987))))) ? (arr_11 [i_8 - 1] [i_8 + 1]) : 0)));
                    }
                }
            }
        }
        var_24 = -25915;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 15;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                arr_53 [i_7] [15] [i_7] [15] [i_14] = (((((arr_44 [i_12 - 1] [i_12 - 1]) || 1)) ? (arr_10 [i_14]) : ((((max(var_11, var_3))) ? (arr_38 [i_7] [i_11] [i_11] [i_7]) : (max(var_6, (arr_37 [i_7] [0] [i_12] [i_13] [i_14])))))));
                                arr_54 [1] [15] [1] [i_13] [i_7] = 1723241025;
                                arr_55 [i_14] [i_7] [i_12] [i_7] [i_7] = var_8;
                            }
                        }
                    }
                    var_25 = (((~1) & 0));
                    var_26 += ((1 >= (arr_46 [i_7] [i_12 - 1] [i_12])));
                    arr_56 [i_7] [i_7] [i_11] [i_12] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
