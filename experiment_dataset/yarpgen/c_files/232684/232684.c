/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 = -1748726200;
                                arr_13 [i_1] [i_3] [i_1] = (max((max((arr_10 [i_0] [i_3 + 3] [i_1 - 2] [i_3 - 1]), (arr_6 [17]))), (arr_1 [12])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_12 = ((!((!(arr_6 [i_0])))));
                            arr_19 [i_0] [i_0] [i_5] [i_1] = ((+(((arr_16 [i_1 + 1] [i_1] [i_1 - 2] [i_6]) ? (arr_6 [i_0]) : var_5))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_13 = var_2;
                                var_14 = (!-9700546131959997452);
                            }
                        }
                    }
                    var_15 = ((((arr_29 [i_7] [i_9] [i_9] [i_8]) ? 63820 : (arr_15 [i_7] [i_9] [i_8] [i_9]))));
                }
            }
        }
    }
    #pragma endscop
}
