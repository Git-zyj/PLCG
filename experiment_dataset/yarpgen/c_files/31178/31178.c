/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((~(arr_3 [i_1] [i_1 + 2])))) ? (((1 ? (arr_2 [i_1] [i_1 + 3] [i_1]) : (arr_2 [i_1] [i_1 - 1] [7])))) : ((var_2 ? ((((30707 < (arr_1 [i_0] [i_1]))))) : (min(14254, var_7)))));
                var_12 &= ((var_2 != ((((min(51271, (arr_4 [i_0 - 1] [i_1] [i_1]))))))));
            }
        }
    }
    var_13 = (max(var_13, ((max(var_1, (max(51295, 1440439933)))))));

    /* vectorizable */
    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_14 = (51303 ? (arr_5 [i_2 + 1]) : var_1);
            arr_9 [i_2 - 1] [i_3] [i_3] &= 14281;
            var_15 = (arr_8 [i_2] [i_2 - 3]);
            arr_10 [i_3] [i_2] = (((((10726 ? (arr_5 [i_2]) : var_8))) ? var_8 : (arr_6 [i_2 + 1])));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_18 [i_6] [i_5] [i_5] [i_4] [i_4] [i_2] = (~14222);
                        arr_19 [i_6] [9] [i_5] [14] [i_2] = (((arr_5 [i_2 + 1]) < 7995));
                    }
                }
            }
            var_16 = var_2;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_17 &= -827146522;
            arr_23 [i_2] [i_7] = arr_14 [i_2 + 1] [i_2 - 3] [i_7 - 1] [i_7 - 1];
            var_18 &= ((-(arr_8 [i_2 - 3] [i_7 - 1])));
        }
        arr_24 [1] = (arr_22 [i_2 - 1]);
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_27 [i_8] &= ((((((arr_14 [i_8] [i_8] [i_8] [i_8]) ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : 16768))) % (~var_7)));
        arr_28 [i_8] = (min((((arr_26 [i_8]) ? (arr_16 [i_8]) : (arr_16 [i_8]))), (((arr_16 [i_8]) ? (arr_16 [i_8]) : (arr_26 [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_19 = ((52004 && (((!-1498518389) || (arr_22 [i_10 + 1])))));
                                arr_41 [i_9] [i_9] [i_9] [i_11 + 3] = var_0;
                            }
                        }
                    }
                    arr_42 [i_9] [i_9] [i_9] = (max(((((((~(arr_2 [i_9] [i_9] [i_9])))) ? ((51281 ? -3327 : (arr_29 [i_9]))) : (((arr_40 [i_10] [i_10] [i_9] [i_8] [i_8] [i_8]) & 1))))), var_8));
                }
            }
        }
    }
    #pragma endscop
}
