/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 &= var_6;
    var_13 &= (((((((var_8 ? 1 : 1))) ? ((1 ? 1 : var_10)) : 89)) - var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_5 [i_1] [i_1]);
                                arr_12 [i_1] [i_1] [i_1] [5] [i_4] = (arr_10 [i_0] [i_2] [19] [i_3] [i_1]);
                                var_14 = ((+(((arr_3 [i_1 + 1] [i_1 + 1]) ? -75517387 : -8072996861866886019))));
                                var_15 = (max(var_15, 2222737486415552010));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = (!1);
                        arr_17 [i_5] [i_2] [i_2] [i_0] &= (((((((arr_6 [i_0] [i_1] [i_2] [0]) || 3323595724)) ? (var_1 + 19) : ((((arr_1 [i_0]) + (arr_9 [i_0] [i_0])))))) - (((((arr_8 [i_1] [i_1] [i_1] [i_2] [i_1 + 1]) == var_1))))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_16 = ((((((min((-127 - 1), 50973))) ? 6396265424047752648 : (arr_2 [i_1] [i_2] [i_6]))) / (((((1 / var_5) || (75517386 || 3186471139)))))));
                        arr_22 [i_0] [i_1] [i_2] [i_1] [i_2] [16] = (((~-1776312337) ? ((231 ? 1 : (min(216, -9223372036854775796)))) : ((((arr_7 [i_0] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [i_1 + 1]) << (((-102 + 123) - 20)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                var_17 = (((arr_24 [i_7]) ? (((+((var_2 ? (arr_25 [i_7] [i_8] [i_8]) : (arr_26 [i_8])))))) : ((14514 ? ((-(arr_24 [i_7]))) : var_0))));
                var_18 &= (((arr_25 [i_7] [i_7] [i_8]) << 0));
            }
        }
    }
    #pragma endscop
}
