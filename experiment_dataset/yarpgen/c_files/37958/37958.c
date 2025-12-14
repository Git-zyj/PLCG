/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] |= (max(((max((arr_6 [i_1] [i_1]), (arr_5 [i_2] [i_0 + 1])))), (max((min((arr_7 [i_0] [i_1] [i_0]), (arr_1 [i_0] [i_2]))), (arr_8 [i_0] [i_1] [0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_2] [i_2] [i_1] [i_2] |= (arr_17 [i_1] [4] [i_2] [i_1]);
                                var_13 |= (arr_1 [i_0 + 3] [i_0 + 3]);
                                arr_19 [2] [i_0] [i_2] [i_2] [2] [18] [i_0] = (max(((((arr_8 [i_0] [i_0 - 4] [i_0 - 2]) == (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [0] [i_0 + 1] [i_4 + 1])))), (((arr_0 [i_0 - 1] [i_0 - 2]) << (arr_0 [i_0 + 2] [i_0 + 3])))));
                                var_14 = (max(((((arr_6 [i_0] [i_1]) ? (max((arr_13 [i_0] [i_1] [i_2] [i_2]), (arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 - 2]))) : (((max((arr_12 [14] [i_1] [i_1] [14] [i_4]), (arr_5 [i_0 - 2] [i_0 - 2])))))))), (((arr_9 [i_0] [i_1] [i_2]) ? (arr_9 [i_0] [i_0 - 2] [i_0]) : ((max((arr_14 [i_0 - 2] [i_0 - 2] [i_3] [i_0]), (arr_15 [8]))))))));
                            }
                        }
                    }
                    var_15 |= (((max(155, 59))) ? (max((arr_10 [i_1] [i_1] [i_2]), (min(6756145847356954452, 0)))) : (((max((arr_6 [i_1] [i_0 + 1]), 41)))));
                    var_16 = (max(var_16, ((max((max((arr_2 [i_1]), (arr_16 [i_0] [i_0 + 3] [i_2] [i_1] [i_0 + 3] [i_1] [4]))), -1)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                {
                    var_17 = -1;
                    var_18 = (max(var_18, (arr_25 [i_7 - 2])));
                    var_19 = (min((min(-57, 0)), 1));
                    var_20 = ((~((-13811 ? 1 : -14))));
                }
            }
        }
    }
    var_21 = (max(-31744, 0));
    #pragma endscop
}
