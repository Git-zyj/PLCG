/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((var_14 ? -20 : 44853))))) ? ((var_0 ? (var_4 == 8758239161262169605) : (1 % 4184250547618834036))) : (min((var_9 > var_0), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = -1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_18 = (max(var_18, (arr_0 [i_0])));
                                var_19 = (min((((arr_0 [i_1]) ? (arr_11 [i_1] [i_2] [i_3] [i_4]) : (arr_11 [i_2] [i_1] [i_2] [i_3]))), (arr_14 [i_4] [0] [i_1] [i_2] [i_3] [i_4])));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 12;i_5 += 1)
                            {
                                arr_19 [i_3] [i_3] [i_2] [i_1] [i_0] = ((((((arr_2 [i_0] [i_1] [13]) ^ 1))) ? (arr_14 [i_3] [i_5] [i_5 - 2] [i_5 + 3] [i_0] [i_3]) : ((((arr_16 [i_5 - 2] [i_3] [i_2] [i_1] [i_0]) && (arr_15 [i_0] [i_0]))))));
                                var_20 = (min(var_20, ((((arr_14 [i_3] [i_5] [i_5 + 2] [i_5 - 3] [i_5 + 3] [i_3]) ? (arr_14 [i_1] [i_5] [i_5 + 2] [i_5 - 3] [i_5 + 3] [i_1]) : (arr_14 [i_0] [1] [i_5 + 2] [i_5 - 3] [i_5 + 3] [i_0]))))));
                            }
                            var_21 = (max(var_21, (((((min((arr_15 [i_1] [i_3]), (arr_15 [i_2] [i_1])))) - (arr_11 [i_1] [1] [i_1] [i_1]))))));
                            var_22 = (arr_6 [i_0] [i_1] [i_0] [i_3]);
                            var_23 = 14262493526090717560;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
