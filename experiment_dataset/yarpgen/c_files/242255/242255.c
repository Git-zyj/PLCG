/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = arr_2 [i_0] [i_1];
                var_20 = max(var_10, (min((((arr_2 [0] [4]) ? var_13 : var_10)), (2097151 ^ var_1))));
                var_21 = max(-1, 1168172460);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((~((~(arr_10 [i_0] [i_0] [i_2] [i_3] [18] [i_3])))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -518273748;
                            }
                        }
                    }
                    var_23 = (((-2036248435 ? 1806750732 : -2097152)) * ((-1 ? 0 : (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_1] [i_2]))));
                    arr_13 [i_0] [i_1] [i_1] [i_0] = var_18;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_24 = (((arr_3 [i_0] [i_0 + 1]) >= (arr_19 [i_5 + 1] [i_0 + 3] [i_1 - 2] [i_1 - 2] [i_0 + 3])));
                                arr_20 [14] [i_0] [i_0] [i_0 + 4] [i_0] [i_0] = -1309074404;
                                arr_21 [i_0] [i_1 + 4] [6] [i_5] [i_1 + 4] = ((arr_3 [i_0] [i_5 + 1]) ? (arr_3 [i_0] [i_5 + 1]) : (arr_3 [i_0] [i_5 + 1]));
                                var_25 = var_6;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [2] [i_7] [i_8] [i_9] = var_2;
                                arr_30 [6] [11] [2] [i_8 - 1] [i_8] [i_0] [i_8] = ((arr_28 [i_0] [i_0] [13] [i_0 - 1] [i_8 + 1]) ? ((-1806750735 - (arr_25 [i_0 + 4] [i_0]))) : ((((501109702 || (arr_23 [i_0] [i_7 - 1] [17] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
