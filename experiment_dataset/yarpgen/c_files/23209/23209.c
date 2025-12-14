/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = ((-(((61642 != -22623) ? (((arr_3 [i_0] [14]) ? 3632503669 : 4294967295)) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] [i_1] = ((57 / (((max((arr_13 [i_1 - 1] [i_1 - 1]), var_4))))));
                                arr_16 [i_4] [i_1] [i_3 - 3] [5] [i_1] [i_0] = (max(((min((max(-15, 3632503679)), (arr_6 [i_1])))), (min((arr_4 [i_3 - 2] [i_1 + 1] [i_0]), (~3868)))));
                                var_12 = ((max((~var_9), ((((arr_1 [i_0]) ? -9 : -127))))));
                                arr_17 [i_0] [6] [i_1] [i_3] [i_4] = ((max(((662463616 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [1] [i_2]))), var_4)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] [i_0] [i_0] = (min(((((arr_3 [i_1 - 1] [i_1 - 1]) ? var_0 : ((min(var_8, var_5)))))), ((~(arr_8 [i_1 + 2] [i_1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_13 &= ((((((!1) ? (arr_5 [i_0] [i_6 + 1] [i_1 + 1]) : (arr_3 [i_2] [i_1 + 1])))) ? (~var_7) : -var_5));
                                var_14 = var_10;
                                var_15 = (arr_3 [i_0] [i_1]);
                                var_16 = (((arr_20 [i_1] [i_6 + 1] [i_1]) ? ((((max(var_0, 28))) ? -662463617 : ((((arr_13 [i_0] [i_1]) + var_4))))) : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((max(65535, (239 >= var_6)))) ? 32767 : -12910293288251963291));
    var_18 = var_2;
    var_19 = (min(var_19, (5536450785457588336 | 1)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            {
                var_20 = ((((min((arr_9 [i_7] [i_8] [5] [i_7] [1] [i_7]), (arr_9 [i_7] [1] [i_7] [i_7] [i_7] [i_7])))) ? (((-21101 ? var_9 : 1))) : 19871));
                var_21 = (max(var_21, (((var_7 || ((216 != (arr_7 [i_7] [i_8] [i_8] [8]))))))));
            }
        }
    }
    #pragma endscop
}
