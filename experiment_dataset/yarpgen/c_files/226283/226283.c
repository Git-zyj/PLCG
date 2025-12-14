/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [17] [i_0] [i_3] [i_4] = (arr_5 [10] [10]);
                                arr_14 [5] [i_0] [13] = (arr_7 [i_3] [i_4]);
                            }
                        }
                    }
                    arr_15 [1] [i_0] [i_2 + 1] = (((arr_1 [i_0 + 1] [i_0]) != (arr_1 [i_2] [i_0])));

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (arr_11 [i_0] [0] [i_5] [i_0] [i_2]);
                        var_11 = ((arr_5 [i_1] [13]) - (arr_12 [i_5 + 2] [i_5 + 1] [i_5] [i_5] [i_5] [15]));
                        var_12 = (((arr_10 [i_0] [i_1] [i_0]) * (((arr_10 [i_0] [i_2 - 2] [i_0]) * (arr_10 [i_1] [i_2] [i_0])))));
                    }
                }
            }
        }
    }
    var_13 = var_5;
    #pragma endscop
}
