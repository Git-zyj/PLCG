/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((((max((arr_3 [i_0] [i_1] [i_4]), (arr_4 [16] [16] [i_1] [i_3]))))) ? (arr_3 [11] [i_1] [8]) : ((-(arr_8 [i_0] [1] [i_4] [i_3] [i_4] [0]))));
                                var_21 = 85;
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 |= ((min(var_11, (min((arr_6 [i_0] [i_1] [1] [i_1]), (arr_6 [i_0] [1] [i_5 - 1] [i_6]))))));
                        var_23 = (((arr_16 [i_0] [i_1] [1] [i_6] [i_1] [i_5 - 1]) ? var_14 : ((((arr_3 [i_1 - 1] [i_1] [i_6]) ? (arr_1 [i_0]) : (arr_0 [i_6] [i_0]))))));
                    }
                    var_24 = (arr_14 [i_5] [i_1] [i_0] [i_0]);

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        var_25 = (arr_12 [15] [15]);
                        var_26 = (max(var_26, (arr_8 [2] [i_1] [i_5] [i_1] [i_1] [13])));
                        var_27 = (max(var_27, -710035849));
                        var_28 = (arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        var_29 = (arr_18 [i_1 + 2] [i_7 + 1] [i_5]);
                    }
                }
                for (int i_8 = 4; i_8 < 16;i_8 += 1)
                {
                    var_30 |= (max((arr_6 [i_1 - 1] [i_8 - 3] [i_8 - 4] [i_8 - 4]), 43777));
                    var_31 = (min(var_31, (arr_17 [i_0] [i_1 - 2])));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_32 |= (arr_8 [15] [13] [i_1] [i_1] [i_9] [i_9]);
                    var_33 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
