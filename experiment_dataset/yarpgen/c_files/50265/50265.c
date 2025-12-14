/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (max(-172677669, var_7));
    var_16 = (((((var_6 ? 120 : 1859461836)) ? -30 : (2690647746118646495 % var_2))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_2 - 1] = (max((arr_1 [i_2 - 1] [i_4 + 2]), ((~(arr_0 [i_0 + 1])))));
                                var_17 += (((arr_6 [i_4 - 1] [i_4 - 1] [i_2 - 2] [i_0 + 1]) << ((((min((arr_6 [i_4] [i_4 - 1] [i_2 + 1] [i_0 + 1]), (arr_6 [i_4 + 1] [i_4 + 1] [i_2 + 1] [i_0 - 2])))) - 1975))));
                                var_18 += var_3;
                                var_19 *= (((80 ? -23626 : -80)));
                                var_20 *= (min(3496298584, (arr_8 [i_4] [i_4 - 1] [i_2] [i_4 + 1] [i_4] [i_4] [i_2])));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0 + 1] [i_1] [i_2] = ((!((max(-4, (arr_6 [i_0] [i_2 - 1] [i_2] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [10] [8] [i_5] [i_6] [i_0] [i_5] = ((((((((~(arr_12 [i_1] [i_2] [i_1])))) ? (arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_0 [i_0 - 1])))) & ((~(arr_12 [i_2] [i_2 + 1] [i_2 + 1])))));
                                var_21 += -8091715575268354926;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_28 [7] [i_8] [7] = (min(((((((arr_19 [i_9] [i_7]) ? var_0 : var_2))) ? var_13 : 2690647746118646498)), 0));
                    arr_29 [i_7] [i_7] = (((~58439) ? 4660445513591006980 : 0));
                }
            }
        }
        var_22 = var_1;
        var_23 = (max((((!(arr_24 [i_7] [i_7] [i_7])))), (((arr_24 [i_7] [i_7] [i_7]) % (arr_24 [8] [i_7] [i_7])))));

        for (int i_10 = 2; i_10 < 10;i_10 += 1)
        {
            arr_32 [12] = 23636;
            arr_33 [i_7] [i_10] = var_1;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_24 = (((!((12842732932959045015 == (arr_27 [i_7] [i_7] [i_11]))))));
            var_25 ^= (((((4553773853724547749 ? var_7 : (((arr_31 [i_7] [i_7]) | var_4))))) ? (arr_23 [i_7] [i_7]) : (1859461836 | 3496298615)));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_40 [i_12] = (arr_36 [1]);
        var_26 = (arr_38 [i_12]);
        var_27 ^= 113;
    }
    #pragma endscop
}
