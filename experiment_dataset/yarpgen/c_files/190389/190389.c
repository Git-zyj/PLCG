/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_4] [i_0]);
                                var_15 -= (max((((54782 <= ((var_4 ? (arr_7 [i_3]) : (arr_3 [i_3] [i_2] [i_4])))))), (arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_3])));
                                var_16 = ((-(arr_7 [i_1])));
                                var_17 = (i_1 % 2 == 0) ? (((((max((arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]), var_2))) ? (((arr_9 [i_3 + 2] [i_2] [i_2] [i_3 - 4] [i_4]) >> (((arr_5 [i_3 - 3] [i_0 - 1] [i_2] [i_1]) - 121)))) : (((arr_5 [i_3 - 4] [i_1 + 1] [i_2] [i_1]) ? 10755 : (arr_5 [i_3 - 2] [i_1] [i_2] [i_1])))))) : (((((max((arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]), var_2))) ? (((arr_9 [i_3 + 2] [i_2] [i_2] [i_3 - 4] [i_4]) >> (((((arr_5 [i_3 - 3] [i_0 - 1] [i_2] [i_1]) - 121)) + 53)))) : (((arr_5 [i_3 - 4] [i_1 + 1] [i_2] [i_1]) ? 10755 : (arr_5 [i_3 - 2] [i_1] [i_2] [i_1]))))));
                                var_18 = 8178313074666826013;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (((((min(var_6, var_4))) ? 63833 : ((-(arr_3 [i_1] [i_1] [i_0 + 4]))))));
            }
        }
    }
    #pragma endscop
}
