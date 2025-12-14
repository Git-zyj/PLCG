/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!((((~8922571904396688257) ? (~1684538216) : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = ((((var_2 == (arr_8 [i_3 + 1] [i_3 - 1]))) ? (min(var_14, (arr_2 [i_3 - 1] [i_0 + 2]))) : var_8));
                            arr_11 [11] [i_3] [i_3] [i_3 + 1] = ((!((min((~8034775921508295385), 20511)))));
                            var_18 = (min(var_18, (~0)));
                            var_19 -= (((((((arr_0 [i_0] [i_1]) ? 3357226854 : 9524172169312863377)) + ((max(4085225074, (arr_5 [i_0] [i_2])))))) - (((293 + (min(1160683965, (arr_9 [i_0] [i_1] [i_2] [i_1] [i_0 - 3]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = 919003940824688969;
                            var_21 = (min(4074846958062803499, (arr_10 [i_0] [i_5])));
                            var_22 = var_5;
                        }
                    }
                }
                var_23 = ((-(arr_13 [i_1] [i_1] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 *= (((min((arr_18 [i_10 + 1]), var_0)) - (((-(arr_21 [i_8] [i_8 - 1] [i_8 - 1]))))));
                                var_25 += (4 - 6646);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_26 = (min(10, 132));
                            var_27 *= ((((((!0) ^ 60228))) ? (((-0 ? 1 : 4193840797))) : (min(-919003940824688939, (9524172169312863392 && var_3)))));
                            var_28 ^= (min(3887156304, 1));
                            var_29 = (max(var_29, ((min(((((0 ? 1500782920 : 1)) + 1)), (((arr_19 [i_11 + 1]) ? (var_10 || 1) : var_2)))))));
                        }
                    }
                }
                var_30 = (!12);
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_31 = ((-((var_12 + (!-17546)))));
                            var_32 ^= (min((max(5141764603041587404, 113)), (((-(((arr_18 [i_7]) / var_2)))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 3; i_16 < 9;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 9;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_33 += ((0 ? 176 : 2034));
                            var_34 = (min(var_34, (arr_41 [16] [i_16])));
                            var_35 += ((0 ? ((((2607137170112303961 ? (arr_29 [i_15] [i_15] [i_16] [i_17 + 3] [i_18]) : 1)) - (arr_31 [i_15] [i_16] [1] [i_18] [i_16] [5]))) : (arr_20 [i_17 - 2] [i_18] [i_17])));
                            var_36 = (min(var_36, var_4));
                        }
                    }
                }
                arr_54 [i_15] [4] [10] &= ((~(((arr_27 [i_15 - 1] [i_15 - 1] [i_16 - 3] [i_16 - 2]) ? var_5 : (arr_27 [i_15 - 3] [0] [i_16 + 3] [i_16 + 1])))));
            }
        }
    }
    #pragma endscop
}
