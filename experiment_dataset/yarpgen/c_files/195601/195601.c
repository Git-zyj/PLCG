/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = ((-(((arr_3 [i_0] [i_0]) + (((max(13518, var_6))))))));
                    arr_9 [i_0] [i_0] = -74;
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] = (((((arr_6 [i_1 + 1] [i_3 + 2]) ? ((var_1 ? 720027817 : var_8)) : -4998)) - (arr_12 [i_0] [i_0])));
                    arr_15 [i_0] [i_3] = ((~((2893688510 >> (-1776063575 + 1776063592)))));
                    arr_16 [16] [i_1] [0] = var_0;
                }
                for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = 720027806;
                    arr_22 [i_0] [i_0] [i_1 + 2] [i_0] = ((!(~-86)));
                }
                arr_23 [13] [i_1] [i_0] = var_4;
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_30 [i_0] [i_6] [i_0] [i_5] [i_5] [i_1] [i_0] = -12688;
                                arr_31 [i_7] [i_0] [i_5] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                                arr_32 [11] [i_1] [i_0] = (arr_12 [14] [i_0]);
                                arr_33 [i_0] [7] [i_5 + 3] [i_0] [i_0] = var_0;
                            }
                        }
                    }
                }
                arr_34 [i_0] [i_1] [i_1] = (((max(668517805, (32767 & 1))) & (arr_17 [i_0] [i_0])));
            }
        }
    }
    var_16 = (max(1375620977, 2609));
    #pragma endscop
}
