/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = ((~(arr_12 [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1])));
                                arr_13 [i_4 - 2] [i_1] [i_1] [i_0 - 1] = ((((max((arr_4 [i_0 + 1] [i_3]), (max((arr_7 [i_0] [5] [1] [6]), (arr_2 [i_1] [i_0 - 1])))))) ? ((0 ? 109 : 1)) : ((min((arr_6 [i_0 - 1] [2] [i_3]), (arr_6 [i_0 + 1] [i_0] [i_0 - 1]))))));
                                arr_14 [i_0] [i_0 + 1] [1] [i_2] [i_2] [i_1] [i_4] = ((~(((arr_0 [i_0 - 1] [i_0]) ? (arr_0 [i_1 + 1] [i_2]) : (arr_0 [i_3] [i_4 - 1])))));
                                var_15 += ((+(((arr_2 [i_1 - 1] [i_0 - 1]) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0] [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_1] = 467;
                var_16 = (min(var_16, ((min((arr_12 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]), (((arr_12 [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_1] [i_1 - 1]) < (arr_12 [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))))));
            }
        }
    }
    var_17 = (((((max(var_3, var_10)))) ? ((var_9 ? ((var_4 ? var_8 : 1)) : (!var_9))) : var_1));
    var_18 = ((var_2 ? var_7 : var_2));
    var_19 = ((-467 ? 103 : 251));
    #pragma endscop
}
