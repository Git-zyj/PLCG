/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [12] [i_0] [i_2] [i_3] [i_4] &= var_1;
                                arr_17 [i_0] [i_1] [14] [i_4] [14] [i_3] [i_0] = (min((((arr_1 [i_3] [15]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))), (((arr_11 [i_0] [i_3]) - var_5))));
                                var_11 = (!5);
                            }
                        }
                    }
                }
                arr_18 [i_0] [i_0] = (arr_0 [i_1]);
                arr_19 [i_0] [i_1] = (!15367);
            }
        }
    }
    var_12 -= -var_8;

    for (int i_5 = 4; i_5 < 20;i_5 += 1)
    {
        arr_22 [5] [i_5] |= (~50185);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_29 [i_6] [i_6] [0] [i_6] = -1;

                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        var_13 = (3936889647 % 19374);
                        var_14 = (arr_32 [i_5 - 3] [i_6] [i_7] [i_6]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_15 = ((((arr_21 [i_5] [i_6]) ? 0 : 0)));
                        arr_36 [i_9] [i_6] [i_6] [i_5] = -1;
                    }
                    var_16 = (((~(arr_30 [i_5] [i_6] [i_7]))));
                    var_17 = (min(var_17, -var_5));
                }
            }
        }
        arr_37 [i_5] [i_5] &= var_1;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                {
                    var_18 = (((((31 ? (arr_34 [1] [i_5] [i_10] [13]) : (arr_41 [i_5 + 1]))) >= ((((arr_26 [i_5]) ? (arr_41 [i_5]) : (arr_25 [i_5] [i_11] [i_11] [14])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_47 [8] [i_12] [i_11] = (((((arr_31 [3]) - (arr_26 [i_12])))));
                                var_19 = (min(var_19, -var_7));
                            }
                        }
                    }
                }
            }
        }
        var_20 = ((0 ? (((!((max(var_3, 0)))))) : (arr_20 [i_5])));
    }
    #pragma endscop
}
