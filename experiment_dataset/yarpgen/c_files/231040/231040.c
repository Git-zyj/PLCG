/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_8 ? var_14 : (arr_1 [i_0 + 1])))) ? (arr_1 [i_0 + 1]) : (max((arr_1 [i_0 + 2]), var_1))));
        var_15 = (arr_1 [0]);
    }
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_17 = (arr_14 [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1 - 2]);
                                arr_16 [i_1 - 1] [i_2 + 1] [i_4] [i_4] [5] = (((arr_4 [i_1] [i_1 - 2]) ? ((var_7 ? ((var_4 ? var_9 : var_14)) : var_9)) : ((var_5 | (min((arr_10 [1]), var_6))))));
                                var_18 = (min(((var_8 | (arr_14 [i_2 + 1] [i_5] [i_3] [i_5] [i_1 + 1]))), (((var_5 ? (arr_10 [i_2 + 1]) : (arr_10 [i_2 + 1]))))));
                                var_19 = ((((min((arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]), var_2))) || ((((arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]) * (arr_11 [i_2 + 1] [i_2 - 1] [i_2] [2]))))));
                            }
                        }
                    }
                    var_20 = (((arr_5 [i_1] [i_2 - 1] [i_1 + 2]) ? ((min(var_14, (arr_11 [9] [i_2 - 1] [i_2 - 1] [i_2 + 1])))) : (arr_10 [i_2])));
                    arr_17 [i_3] = (((((arr_9 [i_1] [i_2 - 1]) ? (arr_9 [i_2] [i_2 - 1]) : var_13))) ? (arr_4 [i_1] [i_2 - 1]) : (((((arr_9 [i_1] [i_2 - 1]) >= (arr_9 [i_1] [i_2 - 1]))))));
                }
                arr_18 [i_1 + 1] [i_1 + 1] = ((((var_1 ? (var_14 - var_3) : (arr_15 [i_1]))) + (((var_1 << (var_9 + 9168221810427433354))))));
            }
        }
    }
    #pragma endscop
}
