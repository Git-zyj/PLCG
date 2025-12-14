/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max((var_0 * var_7), (min(4131537657208200778, 16788))))));
    var_12 = var_3;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_13 = (var_0 | (arr_0 [i_0 - 2]));
        arr_2 [i_0] &= ((19 >> (((((arr_1 [i_0 - 2]) >> 0)) - 2348330897))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [1] [i_2] [i_3] |= 30388;
                        var_14 = ((142 >> (255 - 241)));
                        var_15 = (((arr_10 [i_0] [i_0 - 3] [i_1] [i_3 + 4] [i_3]) ? var_7 : 32767));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_0 - 2] [i_0 - 2] = var_10;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_4] [i_5] [i_5] = (arr_10 [i_4] [i_5] [i_4] [i_0] [i_4]);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_27 [i_7] [i_6] = var_0;
                            var_16 = (max(var_16, (arr_9 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_6 + 1])));
                        }
                        arr_28 [i_0] [i_4] [i_5] [i_6 - 1] = (113 | -6623);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_31 [i_8] = (arr_24 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
        arr_32 [i_8] = var_6;
        arr_33 [i_8] = ((14315206416501350840 ? 255 : -81));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                {
                    var_17 = (min(var_17, (((var_4 ? ((((arr_17 [i_8] [7] [i_8]) | (4294967295 + -30376)))) : (arr_8 [i_8] [i_9 - 4] [i_10 - 2]))))));
                    arr_39 [i_8] [i_9] [i_10] = (arr_5 [i_8]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        arr_44 [i_11 + 1] = (((((-(arr_5 [i_11])))) ? 4 : (arr_9 [i_11] [i_11] [i_11] [i_11])));
        var_18 = (-(arr_43 [i_11 + 1]));
        arr_45 [i_11] &= var_7;
    }
    #pragma endscop
}
