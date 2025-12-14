/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = 31543;
                            var_14 = (((31542 && -31543) ? (!-31543) : ((~(~var_3)))));
                            arr_10 [i_0] [i_0] = -31530;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_15 = ((~((-(((!(arr_14 [i_0] [i_0] [i_4] [i_5]))))))));
                            arr_17 [i_0] [5] [i_0] [i_0] [i_0] = (31549 + -31543);
                            var_16 = ((-((-(arr_2 [i_0])))));
                            var_17 = (min(var_17, (arr_0 [i_0] [i_0])));
                            var_18 &= ((((max(31531, 31540))) ? ((-(arr_15 [1] [6] [i_1 - 1] [i_5]))) : ((~(arr_14 [i_1 + 2] [6] [i_1 - 1] [i_1 + 1])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_19 = ((-((min(31531, 31542)))));
                                var_20 = (((((-((31549 ? 31540 : 31531))))) ? 31550 : ((min(-31528, (arr_12 [i_8 - 1] [i_7 - 1] [i_7 + 1]))))));
                                var_21 = (!31527);
                                var_22 = (~31527);
                                arr_31 [0] [i_7] [12] [0] [i_10] = -31542;
                            }
                        }
                    }
                    arr_32 [i_8] [i_7] [i_6] [i_6] = (!31541);
                    var_23 = ((~((-31565 ? 31531 : 31528))));
                }
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
