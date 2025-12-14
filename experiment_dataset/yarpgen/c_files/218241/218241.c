/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_6 ? ((~((var_1 ? var_1 : 8)))) : var_5)))));
    var_11 = 57344;
    var_12 = ((var_7 ? var_2 : (((var_3 ? 57344 : 8195)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 *= (max((-2147483647 - 1), (arr_1 [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (!12903465261976393583);
                                var_14 = ((((max(var_9, (arr_0 [i_0] [i_0])))) ? 5608456950772826485 : (((44869 / (-127 - 1))))));
                            }
                        }
                    }
                    arr_18 [12] [i_1] [i_1] [i_1] = ((16377042064706397313 ? ((((((arr_4 [i_0]) ? var_8 : 4139273108))) ? (57344 || 137) : ((~(arr_6 [i_0]))))) : (max((arr_10 [10] [i_0] [i_1] [12]), (arr_10 [1] [i_0] [i_1] [i_2])))));
                    var_15 = (((~var_5) <= ((max((((arr_12 [i_0] [11] [11] [i_0] [i_2]) ? var_6 : 1)), var_9)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_16 *= ((9201285971285830122 ? 1 : 1541));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_17 ^= ((((var_8 ? (((arr_14 [i_5]) ? var_3 : var_4)) : (arr_10 [i_7] [i_7] [i_7] [i_7])))) || (((max((arr_29 [i_5] [i_5]), var_2)))));
                            arr_31 [i_5] [i_6] [i_7] [i_8] = ((-(max(var_4, ((var_1 ? (arr_13 [i_5]) : (arr_5 [i_8])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
