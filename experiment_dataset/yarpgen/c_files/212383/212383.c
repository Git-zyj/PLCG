/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, -var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [2] = ((~(arr_3 [i_1] [i_1 - 2])));
                var_13 = max((!-121), -var_3);
            }
        }
    }
    var_14 = ((var_11 ? (max(var_2, var_9)) : 1));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_4 [7] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_14 [i_2] [6] [i_4] [4] [i_5] = (arr_1 [i_2] [i_4]);
                        var_16 = 6739;
                        arr_15 [5] [i_3] [i_3] [i_3] [i_3] = (var_9 * var_10);
                        arr_16 [i_4] [i_4] [i_4] [8] |= (arr_13 [i_2] [i_3] [i_3] [i_4]);
                        arr_17 [9] [i_3] = ((!(arr_13 [i_5] [i_5 - 2] [i_5 - 2] [i_5])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (~384);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_28 [4] [i_7] [5] = (((0 != -296364568379119430) & (5968999657142091658 | -6720)));
                    var_17 = ((((((arr_19 [i_6]) ? 511 : -6728))) ? ((((!(arr_7 [0]))))) : var_5));
                }
            }
        }
        arr_29 [i_6] [i_6] = var_11;
    }
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        var_18 = (-1973638447929828671 & (((~((max(121, -125)))))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 12;i_12 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            arr_42 [i_13] [i_12] [5] [8] [8] [i_12] [i_9] = (((arr_31 [i_9 + 2]) == 10448676532376171017));
                            var_19 = ((arr_41 [i_12] [i_9 - 1]) ? (arr_41 [i_12] [i_9 + 1]) : var_6);
                            arr_43 [i_9] [7] [i_10] [i_9] [15] [13] [i_12] = (((arr_38 [i_9 + 1] [i_12 + 3]) ? var_7 : (((arr_31 [7]) ? 164 : (arr_38 [i_9] [i_13])))));
                        }
                        var_20 = var_7;
                        var_21 = (min(var_21, ((max(((max(65529, var_5))), var_0)))));
                        arr_44 [i_12] [i_11] [i_12] = (max(((0 * ((32760 ? 125 : 127)))), 15325));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        arr_49 [i_14] = (arr_48 [i_14] [i_14]);
        arr_50 [i_14] = (var_6 && var_9);
        var_22 = (min(var_22, var_3));
    }
    #pragma endscop
}
