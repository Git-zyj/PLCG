/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (4050793131 && var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((arr_5 [i_0]) ? (arr_1 [i_0]) : (max((arr_1 [i_0]), 8923184222784029602))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0] = ((!(((((min(25231, 116))) ? var_12 : ((4050793132 ? var_15 : 1)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = (244174164 > 4050793131);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_1] [1] = (max((min(((max(var_2, (arr_9 [i_1] [i_1] [i_5] [i_1])))), (arr_8 [i_5] [i_1] [i_0] [i_0]))), ((((var_0 ? (arr_4 [i_1] [6] [i_0]) : var_11)) - (4050793132 - 247)))));
                    arr_18 [i_0] [i_0] = 244174165;
                }
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    arr_21 [i_6] [i_0] [i_0] = ((var_11 * ((((!(((-(arr_0 [i_6] [i_0]))))))))));
                    arr_22 [0] = (((min(var_5, 4050793114))) / -6422);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_27 [14] [i_1] [i_0] [14] = (arr_8 [i_0] [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_34 [i_0] [i_8] = ((30 ? 4050793142 : (arr_10 [i_9] [i_1] [i_0] [i_8] [i_9])));
                                arr_35 [4] = ((((((arr_20 [i_0] [0] [i_8] [i_9]) ? (arr_20 [i_1] [0] [i_8] [i_9]) : (arr_20 [i_9] [6] [6] [i_1])))) ? ((max(10549, -60))) : ((max(10, -30)))));
                                arr_36 [i_0] = (-30 | 21005);
                                arr_37 [i_0] [i_7] [i_9] [i_8] [i_0] [i_0] [i_7] = (max((max(244174159, 244174150)), ((((((arr_10 [i_9] [i_8] [i_0] [i_1] [i_0]) > var_6)) ? ((21023 ? -234429716 : -127)) : (max((arr_11 [i_0] [i_1] [i_7]), 44531)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
