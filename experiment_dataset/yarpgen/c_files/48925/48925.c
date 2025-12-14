/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [15] [i_1] [i_2] = (max(((-((max((arr_4 [i_1]), (arr_4 [i_2])))))), ((-(max((arr_4 [i_1]), (arr_0 [12] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [0] [0] [i_2] [i_3 + 1] [i_4] = (((((((arr_13 [i_0] [i_1] [i_2 - 2] [i_0] [i_4] [i_2]) ? var_14 : (arr_2 [i_4])))) | ((var_5 / (arr_2 [i_2]))))));
                                var_15 = (max(var_15, ((((((-((1682117394132111659 / (arr_8 [i_4] [i_2] [i_1])))))) ? -25281 : -var_11)))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = (min(((~(arr_13 [i_2 - 3] [i_1] [i_1] [i_0 + 1] [i_0] [i_0]))), ((~(~var_4)))));
                            }
                        }
                    }
                    arr_16 [i_0] = ((+((((arr_9 [i_0] [i_0 - 1] [i_2 + 1] [i_2] [i_2] [i_2 - 2]) >= (arr_9 [i_0] [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_1] [i_0]))))));
                }
            }
        }
    }
    var_16 *= var_3;
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                var_17 ^= (((((-(arr_5 [14] [i_8] [i_6] [i_5])))) >= ((((arr_19 [i_7 + 1]) ? var_13 : (arr_19 [i_7 - 1]))))));
                                arr_31 [7] [i_5] [i_7] [i_5] [i_5] = (((!(arr_21 [i_9 - 1]))));
                                arr_32 [i_5] [i_5] [i_6] [i_5] [i_5] [i_9 - 2] = -30709;
                            }
                        }
                    }
                    arr_33 [i_7 - 3] [i_5] [3] = (((~(~201639140))));
                }
            }
        }
    }
    var_18 = ((max(var_0, (min(var_5, var_8)))));
    #pragma endscop
}
