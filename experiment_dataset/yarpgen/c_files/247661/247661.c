/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (((((-(max((arr_10 [18] [i_1] [i_0]), (arr_3 [i_2])))))) ? 7982804681096506085 : 117));
                                arr_13 [i_0] [20] [i_2] [20] [20] = (((((((((arr_6 [i_0]) ? 1 : (arr_1 [15])))) ? (((!(arr_0 [i_0])))) : (((arr_11 [i_4 - 1] [17] [i_3] [i_2] [i_1] [7] [i_0]) ? 202 : (arr_6 [i_0])))))) ? 0 : var_7));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [9] |= 0;
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [1] [0] |= (arr_1 [i_0]);
                    var_18 = ((!((((((0 ? (arr_7 [19] [19] [i_1] [i_0]) : 1))) ? (max((arr_6 [i_2]), 330806865)) : (~0))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = (~1);
                                arr_21 [i_1] = ((!((((arr_11 [10] [i_1] [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
                                arr_22 [i_0 + 1] [i_1] [i_2] [i_5] [17] = (((min((arr_16 [16] [i_0] [i_0 + 1] [2] [i_0 - 1]), (arr_16 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))) ? (((arr_17 [i_5] [i_6] [i_2] [i_0 + 1]) & -0)) : (((((((arr_5 [i_0] [i_0]) ? 0 : 1))) && var_3)))));
                                var_20 = -5256292527195119990;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_22 = ((!(min(1, (arr_16 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                var_23 = (var_11 ? (!var_3) : ((min((arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_24 = (((arr_7 [i_7] [i_9 + 2] [i_9 + 2] [i_8 - 1]) ? ((((1742761160 && (-9223372036854775807 - 1))) ? (((arr_34 [3] [i_8] [i_9] [i_8] [i_11]) ? 53536 : 2552206135)) : (arr_18 [8] [12] [i_9 + 2] [i_8 - 1] [i_7] [i_7]))) : (min((arr_9 [i_8] [i_8 - 1] [i_8] [i_9] [i_9 + 2] [i_10]), (min(232057077, 1))))));
                                arr_35 [i_7] [i_8] [i_10] [i_11] = 0;
                                var_25 = (max(var_25, (arr_10 [i_11] [i_8] [18])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_10 && var_0);
    #pragma endscop
}
