/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = (min((arr_4 [i_2 - 1] [i_2 + 2] [i_4]), (((!(arr_1 [i_0]))))));
                                var_22 = var_12;
                            }
                        }
                    }
                    var_23 = ((((((((arr_11 [i_2 + 1] [i_1] [i_0] [i_0] [11] [i_0]) == 6611))) - ((65535 ? (arr_1 [i_0]) : (arr_13 [i_2] [i_2] [i_0] [i_0] [i_0] [i_0]))))) < ((((arr_3 [i_2 - 1] [i_2 - 1] [i_0]) || (arr_3 [i_2] [i_2 + 2] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_28 [i_5] [i_5] [i_7] [13] [i_7] = ((3168580533774454026 ? 3168580533774454026 : 113));
                                var_24 = var_3;
                                var_25 = (arr_19 [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_33 [i_11] [i_11] [i_7] [1] = (arr_18 [i_5]);
                                arr_34 [0] [i_7] [i_7] [i_10] [i_11] = var_10;
                                var_26 = (((arr_21 [i_5] [i_11]) ? (((max((arr_19 [i_6] [12] [i_10]), (arr_22 [i_6] [18] [i_7] [i_11]))))) : (((arr_30 [i_7]) - (arr_15 [i_11])))));
                            }
                        }
                    }
                    arr_35 [i_7] = (min(((15278163539935097580 ? 15278163539935097575 : 15278163539935097580)), -var_14));
                }
            }
        }
    }
    #pragma endscop
}
