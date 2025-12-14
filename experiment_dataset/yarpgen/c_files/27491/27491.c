/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 -= ((+((((((arr_0 [i_0] [i_0]) ? -5948355042234341037 : var_0))) ? (((max(var_0, (arr_2 [6]))))) : ((var_3 ? var_11 : (arr_0 [7] [2])))))));
                var_16 = ((((max(((var_0 ? (arr_1 [i_1]) : var_1)), (!var_0)))) ? (min((var_11 && var_3), (((arr_3 [i_0] [i_0]) / (arr_2 [i_0]))))) : ((min((((arr_2 [i_0]) & var_1)), ((var_12 ? var_12 : var_7)))))));
                arr_4 [i_0] [i_1] [i_0] = var_8;
                var_17 += (((((var_12 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((((arr_0 [i_0] [i_0]) < var_3)))) : (max(32512, var_9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_4] = ((min((arr_10 [i_3] [i_3]), var_14)));
                    var_18 = ((-(((arr_6 [i_2]) ? (arr_6 [i_4]) : (arr_6 [i_2])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                var_19 = (max(var_19, ((((~var_13) ? (((arr_2 [0]) ? var_4 : (arr_20 [i_5] [8]))) : var_0)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_8] [8] [8] [i_9] [i_8] |= 5948355042234341059;
                                var_20 = ((~(arr_28 [i_5])));
                                arr_34 [i_5] [i_6] [1] [i_8] [i_9] = (max((((var_3 >= (arr_24 [i_6] [i_7] [i_8] [i_9])))), (((arr_24 [i_5] [i_6] [i_8] [1]) | (arr_24 [i_5] [i_6] [i_7] [i_6])))));
                                var_21 = (min((arr_12 [i_6]), (((arr_26 [i_5] [i_7] [i_8]) - (arr_7 [i_5] [i_9])))));
                                var_22 = (min(var_22, ((((arr_8 [i_5]) >= (max((max(var_8, (arr_19 [i_5]))), var_3)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((min((min(var_4, var_10)), (var_8 - var_8))) + (((var_5 ? var_3 : -1680724838)))));
    #pragma endscop
}
