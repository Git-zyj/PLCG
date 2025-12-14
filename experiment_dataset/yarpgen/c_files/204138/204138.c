/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = (min(-69, var_2));
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = 1551281382;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = 32767;
                                arr_13 [i_3] = (!-20991);
                                var_18 = (arr_10 [i_2] [i_2]);
                                var_19 = ((-(arr_6 [i_0 + 1] [i_0 - 1])));
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] = 32774;
                    var_20 = (((arr_9 [i_0] [i_0 - 2] [i_0 + 2] [i_0]) | (arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])));
                    var_21 = (!var_0);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_22 &= ((-((+((max((arr_12 [6] [i_5] [i_5] [i_5] [i_5]), 127)))))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_23 = (arr_9 [i_5] [i_5] [i_7] [1]);
                        arr_27 [i_5] [i_5] [i_5] [i_5] &= ((((min(511, (arr_1 [i_6 + 1])))) ? ((min((!-283334307673038557), 177))) : ((~(~var_9)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    var_24 = min(var_12, (arr_23 [i_5] [2] [i_9] [i_10]));
                    var_25 = (max(var_25, var_5));
                }
            }
        }
        var_26 = var_12;
    }
    #pragma endscop
}
