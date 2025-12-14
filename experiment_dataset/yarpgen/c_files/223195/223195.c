/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((((min((min(698679481314990169, 44)), (arr_4 [i_0])))) && 3740));
                    var_18 = (max((max((arr_9 [i_2 - 1] [16] [i_2 - 1] [i_2 - 1]), (arr_9 [i_2 - 1] [4] [i_2 + 1] [i_2 + 1]))), ((((arr_9 [i_2 + 1] [0] [i_2 + 1] [i_2 + 1]) || (arr_9 [i_2 + 1] [10] [i_2 + 1] [i_2 + 1]))))));
                    var_19 = (max((((max(var_16, (arr_5 [i_0] [i_1] [12]))) - -13452816090011437753)), ((max((min(-45, -7)), ((max((arr_8 [i_0] [i_0]), var_11))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 = min((((-((-(arr_17 [i_5] [i_4] [i_3])))))), (max(var_7, 6486230189059440348)));
                    var_21 = (max(var_21, -3875877013650165094));
                    var_22 = (max(((-(arr_17 [i_3] [i_4] [i_5]))), ((var_0 ? var_8 : (arr_17 [i_3] [i_3] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_20 [10] [i_4] [10]) ? ((((min((arr_13 [i_3]), (arr_22 [i_3] [i_4] [i_5] [0] [i_7])))) ? -6486230189059440348 : -32760)) : (((((((arr_23 [1] [i_4] [i_4] [i_4] [i_4]) ? (arr_20 [9] [9] [i_4]) : 16384))) ? (((41211 ? var_3 : (arr_18 [i_3] [i_5] [1] [i_3])))) : -4788173694873136663)))));
                                var_23 = 3875877013650165091;
                                arr_25 [i_3] = (arr_21 [i_3] [i_4] [i_5]);
                                var_24 = ((~(var_7 + -8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, var_5));
    #pragma endscop
}
