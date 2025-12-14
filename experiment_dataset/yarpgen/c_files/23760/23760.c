/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? (((!(((var_8 ? -22001 : 93)))))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = var_11;
                    var_14 = -22009;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 += (!((min((117055031 - 4150089178749216756), ((((arr_8 [i_0]) - 1)))))));
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_4] = (arr_7 [i_3] [i_1] [i_2] [i_3] [i_4]);
                                var_16 = (((4294967294 ? (arr_4 [i_0] [i_0] [1]) : var_5)));
                                var_17 = (min(var_17, -116));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_18 += var_6;
                    var_19 = arr_18 [i_5] [i_5 - 3] [i_5];
                    var_20 = (arr_19 [i_5] [i_6 + 1]);
                    arr_21 [i_5] [i_6] [i_5] [i_7] = 57915;
                    arr_22 [i_5] = (((arr_14 [i_5]) ? (arr_14 [i_5]) : (arr_14 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
