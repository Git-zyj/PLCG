/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (arr_10 [i_0] [17] [i_3] [i_4]);
                                var_15 = (max(var_15, (((arr_0 [i_3 + 2] [i_4]) << (((((arr_1 [i_0] [i_2]) ? (arr_1 [i_0] [i_1]) : (arr_0 [i_2] [i_4]))) - 3667152994643782236))))));
                            }
                        }
                    }
                }
                var_16 = ((((((arr_4 [5] [17] [5]) / (arr_12 [20] [i_0] [i_0] [i_1] [8])))) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : var_1));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_5] [i_6] = (arr_6 [i_0] [11] [6]);
                            var_17 = ((-((-(((arr_11 [i_6] [i_6] [1] [i_1] [13] [i_0]) - 0))))));
                            var_18 = ((((((126 ? 59525056 : 3828277031))) ? var_5 : ((-(arr_15 [1] [i_1] [i_5] [11] [i_0] [i_6]))))));
                            arr_19 [i_6] &= (max((arr_12 [i_0] [i_0] [21] [18] [i_0]), ((((((arr_17 [5]) + 738114780))) ? (max(var_1, (arr_11 [i_0] [i_0] [6] [i_1] [i_5] [i_6]))) : ((((arr_6 [i_0] [i_1] [i_1]) + (arr_9 [i_5] [4] [i_0]))))))));
                            var_19 += ((1 << (2147483647 - 2147483642)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
