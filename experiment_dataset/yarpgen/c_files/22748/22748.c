/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [10] [i_1] [i_1] = ((((((arr_3 [i_0] [i_1] [i_2]) & 0))) ? ((~(arr_3 [9] [i_1] [i_0]))) : (((arr_3 [i_0] [i_1] [i_2]) ? (arr_0 [i_1]) : (arr_3 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = ((((((arr_12 [i_2] [i_3] [i_3] [i_4 - 2] [i_4] [i_4 + 1]) ? (arr_12 [i_2] [i_2] [i_3] [i_4 - 2] [i_4] [i_4 + 1]) : (arr_12 [i_1] [i_1] [i_2] [i_4 - 2] [i_4] [i_4 + 1])))) ? (((arr_10 [i_0] [i_2] [i_3] [i_1]) & (arr_11 [i_0] [i_1] [7] [i_3] [i_3]))) : (((((((arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_9 [2] [i_2] [i_2]))) == (max((arr_2 [i_0] [i_0] [i_2]), 0))))))));
                                var_14 = max((max((((arr_4 [i_0] [i_0] [i_0] [i_0]) - 65535)), ((((arr_11 [10] [i_1] [i_2] [i_2] [i_2]) + 0))))), (65527 != 7));
                                var_15 = (max(var_15, ((((arr_4 [i_3] [i_4] [i_4 + 1] [i_4]) ? (max(1337734244366008229, (arr_4 [i_2] [i_4] [i_4 + 4] [i_4]))) : (((arr_3 [i_4] [i_4] [i_4 + 1]) ? (arr_4 [0] [i_4] [i_4 - 1] [i_4]) : (arr_3 [i_4] [i_4] [i_4 + 2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = -2644058091815999860;
    var_17 = max((min(var_12, var_3)), (var_9 << var_12));
    var_18 = var_9;
    #pragma endscop
}
