/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (arr_6 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (((~var_7) | (arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [14])));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_3] [i_1] [i_2] [i_3] [i_4] [1]) ^ (~var_3)));
                                var_14 = ((((((!(arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))) ? (arr_10 [i_0] [i_0] [i_0]) : (arr_4 [i_3] [i_0]))) | ((~(arr_0 [i_1] [i_0])))));
                                var_15 = -10340;
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] = ((-10358 ? ((~(arr_5 [i_0] [i_0] [12]))) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = (((arr_15 [14]) || (arr_17 [i_5])));
        var_16 = var_11;
        var_17 = (~(arr_17 [i_5]));
    }
    var_18 *= var_8;
    var_19 = (((~255) <= ((var_8 ? var_8 : (var_3 || var_1)))));
    #pragma endscop
}
