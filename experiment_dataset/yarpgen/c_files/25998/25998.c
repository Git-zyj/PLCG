/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((max(-80, -96))) & (var_9 & var_2))) & ((var_7 ? ((min(var_4, 38))) : ((var_4 ? -10 : 1)))))))));
    var_11 -= ((+(((var_7 | var_4) ? (~var_1) : ((min(-10, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_12 += (((((60 ? (arr_4 [i_0] [i_0] [i_0]) : 54))) ? (((arr_2 [i_0] [i_0] [i_0]) ? (arr_2 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [i_0] [i_0]))) : (((arr_4 [i_0] [i_0] [i_1 + 3]) ? (arr_2 [i_1 + 1] [i_0] [i_0]) : -77))));
                var_13 *= (((arr_3 [10]) * (arr_3 [1])));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1 + 4] [i_1] [i_1 + 4] [6] &= ((-(arr_6 [i_0] [i_1 + 3] [i_1] [i_2 + 1])));
                    var_14 += var_5;
                    var_15 = (max(var_15, (((-(arr_6 [i_1 - 2] [i_1 + 3] [i_2 + 2] [i_2 + 2]))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((+((((arr_2 [i_1] [i_4] [i_1]) && -1))))))));
                                var_17 = (min(var_17, (((~(((arr_2 [i_0] [i_0] [1]) ? (arr_10 [i_0] [i_4] [i_4] [i_5]) : 1)))))));
                                var_18 += ((-(arr_8 [i_0])));
                                var_19 = (min(var_19, (((1 * ((-81 ? 117 : 1)))))));
                                var_20 = (min(var_20, ((((arr_13 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_11 [i_3 - 2] [i_3 - 2]))))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (arr_13 [2] [2] [i_3 + 1] [i_0] [2] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
