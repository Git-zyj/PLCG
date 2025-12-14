/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_0;
                arr_7 [8] |= ((((((arr_3 [6]) ? (arr_1 [i_1 - 1]) : var_12))) ? ((~(var_5 + -1))) : ((((arr_2 [i_0] [i_0]) < (arr_2 [i_0 + 2] [i_0 + 1]))))));
                var_16 = ((~(min(var_5, (((arr_0 [i_0]) ? 145 : (arr_2 [6] [6])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1 - 1] [i_0] = (((~(min((arr_9 [i_0] [1] [i_1]), -823731875)))));
                                var_17 = (min(var_3, (((-(arr_2 [i_0 + 1] [i_0 + 1]))))));
                                arr_16 [i_0] [i_1] [1] = (max((max((arr_4 [i_1 - 1] [8] [i_2 + 1]), ((32767 ? (arr_14 [i_4] [i_1] [8] [i_1] [i_0 + 2]) : var_11)))), (arr_4 [6] [i_2] [7])));
                                var_18 = (min((arr_8 [i_0]), -32762));
                                arr_17 [i_0] [i_0] [0] [i_1] [1] [0] = (arr_4 [i_1 - 1] [i_3] [1]);
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    arr_20 [i_5] [i_1] [i_1] [9] = (max((min(var_11, (arr_11 [i_1 - 1] [i_0 - 2]))), (arr_14 [8] [i_1] [1] [i_1] [i_1 - 1])));
                    arr_21 [i_1] = (arr_9 [i_0] [i_1] [i_1]);
                }
            }
        }
    }
    var_19 = (max(var_19, var_14));
    var_20 = ((((((-(-32767 - 1)))) ? (min(var_14, -32762)) : ((((-32767 - 1) ? var_4 : 2770))))));
    var_21 = var_3;
    #pragma endscop
}
