/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (((((var_13 | (arr_2 [i_0] [i_1 - 1])))) ? ((~(arr_2 [i_0] [i_2 + 2]))) : ((25298 ? var_12 : (arr_2 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = ((+(((arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_7 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1]) : 25315))));
                                arr_12 [i_0] [i_1 + 1] [5] [i_2] [19] [i_4] = (((((var_13 ^ (arr_10 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 - 2] [i_2 + 2])))) ? (((~(arr_9 [i_2 + 1] [i_4])))) : (((arr_9 [i_2 + 1] [i_2 + 2]) ? var_13 : (arr_9 [i_2 + 2] [20])))));
                                var_19 = (((((((arr_6 [15] [15] [i_1 - 1] [i_2 + 3] [i_3] [15]) >> var_6)) != (((var_15 && (arr_9 [11] [i_4]))))))) % ((-(arr_4 [i_2] [i_2 - 1] [i_4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_6] = var_8;
                var_20 = (((((!(arr_17 [i_5] [i_5] [i_6])))) >= ((((!var_10) < (70 && -25279))))));
                arr_21 [i_6] = ((!((min((arr_8 [i_6] [i_6] [i_6 - 1]), (arr_0 [i_6] [i_6 + 1]))))));
                arr_22 [i_6] = (arr_1 [i_5]);
            }
        }
    }
    #pragma endscop
}
