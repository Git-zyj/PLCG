/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = (((-(~var_13))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    var_15 |= (((-1862084124463335232 + 9223372036854775807) << (((((arr_0 [i_0]) ? 1862084124463335231 : var_12)) - 1862084124463335231))));
                    arr_8 [i_2] [4] [i_0] = (var_11 * -23433);
                }
                var_16 = 2927446409;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_17 &= 23437;
                var_18 = (min(var_18, ((((arr_11 [i_3]) * ((((arr_11 [i_3 - 1]) <= 1))))))));
                arr_14 [i_3 + 1] = (((((((0 ? -5330626254231546331 : -1862084124463335228))) ? -var_3 : (((arr_11 [i_4]) ? var_9 : (arr_9 [i_4]))))) - ((((arr_12 [i_3 + 1]) - (((((arr_12 [19]) || 23433)))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_19 = (min((((((25328 ? (arr_15 [i_5] [i_4] [i_5 - 2] [i_6]) : (arr_11 [i_3 + 1]))) > 40197))), (min(((var_3 ? (arr_15 [i_3 + 2] [i_4] [i_5] [i_6]) : var_9)), (1862084124463335232 / var_8)))));
                            var_20 *= (arr_15 [i_3 + 2] [i_3 + 1] [4] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_8] = (((((var_7 ? (arr_4 [i_7 - 2]) : (arr_4 [i_7 - 2])))) ? (max((arr_11 [i_8 + 1]), (arr_4 [i_7 + 1]))) : (arr_11 [i_8 - 1])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_21 = (((var_4 <= var_8) || ((((arr_24 [i_8 - 1]) ? (arr_22 [i_7 + 1] [i_8 + 1] [i_8]) : (arr_24 [i_8 - 1]))))));
                            var_22 ^= (((((-(arr_18 [i_7 - 1] [i_8 - 1] [i_9] [i_8 - 1] [20] [i_9])))) && (1862084124463335231 / 2927446413)));
                            var_23 = (min(var_23, var_8));
                            var_24 &= ((((((92 / 18145401505617175386) ? (arr_23 [i_9] [10]) : ((((arr_16 [i_7] [i_7]) || (arr_15 [i_10] [i_9] [i_8] [i_7 - 3]))))))) ? ((((((max(24, 1265146082))) > (min((arr_5 [i_7] [i_8] [i_9] [i_10]), 11)))))) : (((arr_22 [i_8 - 1] [i_10] [i_10]) - 17))));
                            var_25 = ((!(0 / var_5)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
