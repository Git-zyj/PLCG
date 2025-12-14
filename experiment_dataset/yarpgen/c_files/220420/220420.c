/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((((-(arr_0 [i_0] [i_0])))) * (max(462340718758898197, 1386580298229542339)))) * ((((arr_3 [i_1] [i_1] [i_0]) & (arr_3 [i_0] [i_1] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 -= (((max((max(-1, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))), 36099)) << (250 - 196)));
                                var_12 = ((((+((max((arr_7 [i_0] [16] [i_2]), 32767)))))) ? ((max(((12779 ? 201 : (arr_7 [i_3] [i_2] [i_2]))), 0))) : (((arr_11 [i_4] [9] [i_2] [i_2] [i_2]) ? (((min(98, (arr_9 [i_0] [i_1] [14] [i_3] [i_4]))))) : 6472335752395544502)));
                                var_13 = (max(var_13, (+-18)));
                                var_14 = (min(var_14, (((250 ? 123 : 0)))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    var_15 = (min(var_15, (arr_13 [i_0] [i_0] [0] [i_0])));
                    arr_14 [i_5] [i_5] = ((((((max((arr_1 [i_0]), -55))) ? (arr_11 [i_5] [i_5] [3] [3] [i_5 - 1]) : (arr_5 [i_1]))) ^ ((((max((arr_12 [i_0] [i_5] [i_5] [i_5 - 1]), 41576))) ? (arr_2 [i_5 + 1] [i_5 + 1]) : (min((arr_8 [i_0] [i_0] [i_1] [i_0] [i_5 + 1]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
                    var_16 = (arr_0 [i_0] [i_0]);
                    var_17 = (min(var_17, (((((min((((arr_8 [i_0] [i_0] [10] [i_1] [3]) | (arr_6 [i_1]))), 1381824075))) ? ((((min((arr_11 [i_1] [2] [i_1] [2] [i_1]), 45936))) ? ((min(0, 250))) : (arr_5 [i_5 - 1]))) : (max((arr_5 [i_1]), ((((arr_11 [i_1] [i_1] [i_1] [i_1] [16]) != 250))))))))));
                }
            }
        }
    }
    var_18 = ((var_5 & ((min(var_6, -1609583832)))));
    var_19 = ((!((min((var_7 < 0), var_6)))));
    var_20 = var_2;
    var_21 = ((((22702 ? 78 : 4294967295))));
    #pragma endscop
}
