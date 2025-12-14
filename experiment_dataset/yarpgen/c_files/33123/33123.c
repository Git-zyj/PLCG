/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((((((var_9 ? 447774942 : 447774942))) | (~-3140480664640777249))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (arr_1 [i_3 + 2]);
                                arr_12 [9] [i_1] [i_1] [i_4] [i_4] = ((!(arr_0 [i_3 + 2] [i_4 + 1])));
                                arr_13 [3] [i_4] [3] = var_7;
                            }
                        }
                    }
                    var_16 = arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [1] [14];
                    var_17 = ((!(((1 ? (arr_7 [i_2] [i_2] [1] [i_0]) : 13284316265212363396)))));
                    var_18 = (6086922833222344152 == (arr_7 [i_0] [i_1] [i_2] [i_2]));
                }
            }
        }
    }
    var_19 = -var_2;
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                arr_18 [i_5] [i_5] [1] = (((9722629156893792553 / 185091639869068755) ? (arr_16 [i_5 + 1] [i_6]) : (arr_11 [i_5 - 1] [i_6] [i_5])));
                var_20 = (~62572);
            }
        }
    }
    #pragma endscop
}
