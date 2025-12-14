/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((((var_9 ? 251 : var_10))) && var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((arr_0 [i_1 - 1]), (((((var_13 ? 462515759 : (arr_3 [i_0] [i_0] [i_0]))) * 32753)))));
                var_18 = ((!((!((min(0, (arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [15] [i_2] = -20;
                            arr_12 [0] [i_2] [2] [0] = arr_8 [i_2] [3] [i_2];

                            for (int i_4 = 1; i_4 < 24;i_4 += 1)
                            {
                                var_19 = (max(-1762979532, 127));
                                arr_15 [i_2] [i_3] [i_2 - 2] [i_1] [i_2] = (((((((0 ? (arr_8 [i_2] [i_1] [i_1]) : var_12))) ? (((arr_9 [i_2]) ? (arr_14 [i_0]) : var_11)) : 201)) < 0));
                                var_20 = (max(var_20, ((((arr_13 [i_2 + 1] [i_2 - 4] [i_3 + 1] [i_4 + 1] [23]) + ((853365143 + (arr_13 [i_0] [i_3] [i_3 - 1] [i_0] [i_0]))))))));
                                arr_16 [i_2] = arr_10 [i_1] [i_1 + 1] [i_3 - 2] [i_4 - 1];
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_20 [i_5] [i_1] [14] [i_3 - 1] [i_5] &= ((arr_18 [i_0] [i_1] [i_1] [i_3 - 1] [i_5] [i_5]) >= (arr_18 [i_5] [i_3 - 2] [10] [i_0] [10] [i_5]));
                                arr_21 [i_2] [i_0] [13] [i_0] [i_0] [i_0] [i_2] = var_6;
                                var_21 = ((arr_10 [i_1] [i_1 - 3] [i_3 - 2] [i_3]) ? 536870912 : (arr_18 [i_1] [i_1] [i_1 - 3] [i_1 - 3] [i_2 + 3] [i_2]));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_22 = (max(var_22, (((18 ? 245 : (((!(!2621032026)))))))));
                                arr_24 [i_6] [i_3 - 1] [i_2] [i_2] [i_0] [16] = ((!(arr_8 [i_2] [i_1 - 3] [i_2 + 3])));
                                arr_25 [12] [i_1] [i_2] [i_6] [i_6] |= ((((((((-2147483647 - 1) ? -37 : -32567))) / ((134 ? (arr_14 [11]) : -1471339011499563649)))) & (((((226 ? 16097 : (arr_22 [i_0] [i_1 - 1] [0] [i_3] [16]))) | ((max((arr_10 [i_0] [i_2 + 1] [i_3] [i_2 + 1]), 240))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
