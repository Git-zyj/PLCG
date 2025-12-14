/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 -= ((113 >> (var_2 + 3400079461525271433)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 += var_12;
                                var_18 = var_8;
                                var_19 *= -var_1;
                                arr_12 [i_4 + 1] [i_3] [i_2] [i_4 - 1] [i_4] [i_3] [i_2] = -6204214408366901467;
                            }
                        }
                    }
                    var_20 -= var_14;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_21 = (((arr_17 [i_6 - 1] [i_6] [i_6]) < (46185 & -2025059708)));
                        var_22 = (min(var_22, -var_9));
                    }
                }
            }
        }
    }
    var_23 = ((((((6281428823616895579 ? var_0 : -6281428823616895580)))) || 3056455713));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    arr_29 [i_8] [i_8] [i_8] [i_8] = (min(((max(var_7, (((!(arr_11 [i_8] [8] [i_8] [5]))))))), (max((1040187392 + -6373839190101808282), -6281428823616895580))));
                    var_24 = ((-(max(29, 6373839190101808285))));
                    var_25 = (min(var_25, ((((arr_19 [i_8] [i_9] [i_10] [i_9] [5]) ? ((min(-var_3, (-32767 - 1)))) : (max((((-1817660048 ? 107 : (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8])))), (((arr_19 [i_10] [i_10] [i_9] [i_8] [i_8]) ? 6281428823616895579 : var_9)))))))));
                    var_26 = (min(var_26, 21786));
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 7;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_27 = (min(((6281428823616895580 ? 1051833361 : 14)), 7));
                                var_28 = (((max((arr_4 [i_8] [i_8] [i_12 - 2] [i_11 + 1]), 101)) << ((((76 ? (~5031155463137522679) : ((-5365065109752703379 ? -6281428823616895580 : 2016)))) + 5031155463137522702))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                {
                    arr_44 [i_13] &= 2782089149;
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_29 += (((~var_9) | (max(125965225239900169, 5365065109752703378))));
                                var_30 ^= 11;
                                var_31 = 18446744073709551607;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
