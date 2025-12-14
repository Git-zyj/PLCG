/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_8 [i_0] [i_0] [i_2] [i_1] [i_2] [i_3] = (arr_1 [i_2] [i_3]);
                        var_19 = 0;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((max(var_14, var_8)) - (arr_13 [i_0] [i_0] [i_1] [i_0] [i_4 + 1] [i_1] [1])))))));
                                var_21 = ((((arr_0 [i_2]) ? var_4 : var_5)) - (((((var_9 ? (arr_4 [8]) : (arr_13 [i_0] [i_0] [i_0] [10] [i_0] [i_4] [i_5])))) ? (((arr_2 [6] [i_1] [i_0]) >> 36)) : var_3)));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_22 *= ((var_0 ? var_10 : ((((!(arr_22 [i_8] [i_8 + 1] [i_7 + 1] [i_8 + 1] [i_7] [i_7 + 1])))))));
                        arr_23 [i_6] [18] [i_0] [i_0] [i_6] = (((arr_14 [i_7 + 1] [2] [i_6] [i_6] [i_6] [1] [i_6]) ? var_5 : (((max((arr_15 [i_0] [i_6] [i_0]), (arr_11 [i_7] [13] [i_7] [i_7] [i_7])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_23 = (min(var_23, (!-36)));
                                var_24 *= (((arr_1 [10] [i_10]) >> ((((((-53 ? (-9223372036854775807 - 1) : (arr_7 [i_0] [i_6] [6] [i_9] [i_9] [i_10]))) - -9223372036854775798)) + 25))));
                                var_25 = (arr_4 [i_7]);
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_0] [i_0] = ((~((17670689159386094188 ? 36 : 7414551033123262155))));
    }
    #pragma endscop
}
