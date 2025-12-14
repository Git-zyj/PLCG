/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(var_5 - 6557)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((max(1, (arr_3 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 &= arr_0 [i_1];
                                arr_13 [i_0] = -0;
                            }
                        }
                    }
                    var_13 = (((((arr_8 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1]) % 74)) < (((~((17302 ? 181 : 1)))))));
                    var_14 = (min(var_14, (187 ^ 334362911)));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_15 = (((var_2 * 127) ? -9 : (max((((arr_0 [i_0]) / 58981)), ((-(arr_0 [i_0])))))));
                                arr_19 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_5 - 4] [i_1] &= (((var_2 & (min(4557143607173975608, 32767)))));
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_0] = (arr_6 [i_5 - 1] [i_0]);
                                arr_21 [i_0] [i_5 - 3] [3] [i_1] [i_0] = (arr_14 [i_0] [i_0] [i_2] [i_0] [i_6]);
                                var_16 = (min(var_16, (-5653577878585808188 % -6418721913166489458)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_17 = (max(var_17, 191));
                arr_28 [i_7] = ((-((+(((arr_25 [i_7] [i_7 - 1] [13]) * var_6))))));
                var_18 = (min(var_18, (((((((!(arr_0 [3]))))) ? (1003641904 < var_3) : 6555)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                arr_33 [i_9] = (((((arr_26 [i_10]) & (arr_32 [i_9] [i_9] [i_9]))) / (((~(((arr_32 [i_9] [i_10] [1]) ? 1 : (arr_2 [i_10] [i_10]))))))));
                arr_34 [10] = (((((max(-1463774529, var_7)) ? var_4 : var_1))));
            }
        }
    }
    #pragma endscop
}
