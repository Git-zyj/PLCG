/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_10 [i_2] [i_2] [i_2])));
                                var_19 += ((-29792 | ((((1 ? 0 : (arr_9 [i_4] [i_4] [i_4]))) - (min((arr_6 [i_1]), (arr_17 [i_4])))))));
                                arr_18 [i_0] [i_1] = var_3;
                                var_20 = ((max((0 == var_13), (var_6 + 14))));
                                arr_19 [i_0] [i_4] [i_3] [i_2] [i_1 - 1] [i_1 - 2] [i_0] = arr_16 [i_0] [i_1] [i_2] [4] [i_4];
                            }
                        }
                    }
                }
                var_21 = ((1 ? (((2024882766 > 32736) ? (((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]) ? (arr_0 [i_1 - 2]) : (arr_4 [i_0]))) : (!4193959069))) : (var_3 == -14211874805217326792)));
            }
        }
    }
    var_22 += var_11;
    #pragma endscop
}
