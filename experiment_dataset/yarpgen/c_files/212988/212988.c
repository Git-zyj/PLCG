/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? (((var_1 ? ((var_3 ? 511 : var_2)) : ((var_3 ? var_13 : var_11))))) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_6 [i_0] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_4] = (min(((((~var_0) ? 1 : (((arr_7 [i_0] [14]) ? var_9 : 1076057916))))), ((0 ? ((var_8 ? 4618456961452751089 : (arr_4 [2]))) : var_0))));
                                var_16 = (min(((~((var_4 ? var_14 : var_0)))), ((((arr_2 [i_1]) < (arr_2 [i_3]))))));
                                var_17 = (min(var_17, (-9223372036854775807 - 1)));
                                var_18 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 *= ((var_11 ? var_12 : ((var_6 & (((max((arr_2 [i_6]), (arr_4 [10])))))))));
                                arr_19 [i_1] = var_6;
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= (((((arr_16 [i_0] [i_0] [i_2] [i_2]) ? (((var_10 ? var_13 : 31399))) : ((var_9 ? 14 : var_12)))) / ((((arr_1 [i_0] [i_0]) ? (arr_5 [i_2] [i_2] [i_2]) : (arr_10 [i_0] [i_1] [i_1] [i_0]))))));
                                arr_21 [i_0] [i_1] [2] [i_5] [i_6] = ((((((0 / 244) ? (arr_18 [12] [i_5] [i_0] [i_0] [i_0]) : 59496))) >= (((arr_10 [i_6] [i_5] [i_2] [i_0]) ? (arr_12 [i_6] [i_5] [i_2] [9] [i_0]) : var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, var_11));
    #pragma endscop
}
