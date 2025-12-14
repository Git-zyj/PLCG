/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [3] [i_0] = (((arr_0 [i_1]) ? ((((!(arr_3 [i_0]))))) : (arr_0 [i_1])));
                var_10 = (arr_3 [i_0]);
            }
        }
    }
    var_11 = (((((((var_8 ? var_3 : var_6))))) | ((((min(var_6, var_2))) ? 1348679855196700310 : var_4))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_12 = (((~var_6) ? -4738455261827789062 : (68 - 105)));
                var_13 = var_9;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_14 = (max((~var_6), (min(-1348679855196700311, 7199027328611842507))));
                            var_15 &= ((71 + (max(-956954027, 1))));
                            var_16 &= arr_2 [i_5] [i_3 + 1];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_17 = (((((min(-2, -1584794542)))) >> (var_2 - 351242585)));
                                var_18 = ((!((((((arr_16 [i_8 - 1] [i_7] [i_6] [i_2]) ? 71 : 6508717129434620955)) >> (((arr_15 [i_3 + 1] [i_3 - 1]) - 32286)))))));
                                var_19 &= ((((arr_3 [20]) + (arr_14 [i_2 + 1] [15] [i_2 + 1] [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                arr_26 [i_10] &= var_3;
                var_20 &= arr_19 [i_10];
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_32 [i_11] [i_11] = (arr_19 [i_11]);
                            var_21 = (((((((((arr_10 [i_9] [i_10] [i_12]) ? (arr_31 [12] [i_10] [i_11] [i_12]) : (arr_20 [7] [10])))) ? -var_4 : 7199027328611842507))) ? (min(15, 4059257101)) : ((((!(((-(arr_29 [8] [8] [8] [i_12]))))))))));
                            var_22 = ((((((arr_31 [i_9] [i_9] [i_9] [i_12]) ? (arr_22 [i_11] [i_12]) : (arr_22 [i_10] [i_9])))) >= (min((arr_27 [i_9]), (arr_22 [i_11] [i_12])))));
                            var_23 &= (arr_3 [i_9]);
                            var_24 = ((arr_19 [i_12]) ? (!var_7) : (((arr_21 [i_12] [i_11] [i_10] [2]) >> (127 - 102))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            {
                arr_39 [i_13] [20] [i_14 + 1] &= ((min(-357350592, 1)));
                var_25 &= (((((502340744 ? 207978627 : 64))) ? ((511 ? 956954027 : -1348679855196700325)) : (((~(!1345385612))))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 19;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                arr_48 [i_16] [13] [18] [5] [i_16] = (!-1);
                                var_26 = ((((arr_38 [i_14 - 1] [i_14 - 1]) & (arr_38 [i_14 - 1] [i_14 - 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
