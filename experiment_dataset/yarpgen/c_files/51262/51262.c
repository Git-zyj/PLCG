/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((max((~var_9), (!var_5)))), 4564802611257907838));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_1] = ((((~(max((arr_1 [i_4]), (arr_5 [i_4] [i_1] [i_4]))))) >> ((((~(((arr_12 [i_0] [i_1] [i_4] [1] [i_4] [i_1] [i_3]) ? 1 : (arr_10 [i_0] [i_0] [i_0] [i_0]))))) + 30))));
                                var_19 = (((arr_7 [i_0] [i_0] [i_2] [i_3]) > (((31628 / (arr_12 [i_0] [i_0] [i_3 - 2] [i_4] [i_4] [i_4] [i_4]))))));
                                var_20 = (((((76 - (arr_8 [i_3 - 3] [i_3 - 1] [i_3 - 2])))) || 15978093700195446349));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = ((-(max((arr_8 [i_0] [i_1] [i_0]), 2468650373514105266))));
            }
        }
    }
    var_21 = max((~var_13), var_8);

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_22 -= ((~(max((arr_20 [i_8] [6]), (((arr_25 [11] [i_6] [i_6] [11] [i_8] [i_8]) ? (arr_11 [i_5]) : var_10))))));
                        arr_27 [i_6] [i_6] [1] = min(8336851867727899898, (max(8336851867727899898, -126)));
                        var_23 += ((~((-((2468650373514105266 ? var_15 : (arr_4 [i_5] [i_5])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                {
                    var_24 ^= 0;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            {
                                arr_38 [0] [i_9] [i_12] = (arr_18 [i_5] [i_9]);
                                var_25 = (~125);
                                var_26 ^= ((-(((!(arr_32 [i_10 - 1] [i_9 + 2] [i_12]))))));
                            }
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, ((((((arr_12 [6] [i_5] [15] [i_5] [i_5] [15] [i_5]) ? (arr_12 [i_5] [i_5] [1] [i_5] [2] [1] [i_5]) : (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) | (min((arr_15 [i_5]), (arr_24 [10] [i_5] [i_5] [i_5]))))))));
        var_28 = ((-(-32767 - 1)));
        var_29 *= (((((max(1, (!1))))) >= (var_1 & 10109892205981651717)));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        arr_42 [i_13] = (!var_5);
        var_30 = var_6;
    }
    #pragma endscop
}
