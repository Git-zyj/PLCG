/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_1] [i_2] [i_4] [i_4] = ((!((((((250360085 ? (arr_0 [i_2]) : (arr_5 [i_1] [16])))) ? (arr_5 [i_3] [i_1 - 2]) : 1)))));
                                arr_16 [i_4] [i_2] [20] = ((((min((arr_1 [i_1 - 2] [i_1 - 1]), -27628))) ? (min((arr_1 [i_0] [i_1 - 1]), var_4)) : (((min(var_6, (arr_1 [i_1] [i_1 + 1])))))));
                                arr_17 [i_4] [3] [i_2] [i_2] [i_0] [i_0] = (min(27600, 0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_1] [23] [i_2] [i_2] [i_1] [i_1] = 27627;
                                arr_24 [i_0] [i_2] [i_2] [i_2] [i_5] [i_6] = (arr_4 [i_2] [i_0]);
                                arr_25 [i_2] [i_0] [i_2] [i_2] = ((arr_7 [i_2] [i_2] [i_5]) ? (((arr_7 [i_0] [i_2] [i_0]) ? (arr_7 [i_2] [i_2] [i_2]) : 1550957572)) : var_8);
                                arr_26 [i_0] [21] [i_0] [23] [i_2] [i_0] = (var_8 ? 21 : 1);
                            }
                        }
                    }
                    arr_27 [i_0] [i_2] [10] [i_2] = min((arr_12 [0] [0] [i_1] [i_1 - 2]), (min(1, var_8)));
                    var_14 = 52662;
                }
            }
        }
    }
    var_15 = (!var_2);
    #pragma endscop
}
