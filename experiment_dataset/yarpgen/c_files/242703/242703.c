/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 ^= ((((max(var_1, (arr_8 [i_1] [i_1] [i_2])))) ? (((((max(-10956, (arr_3 [i_2])))) & ((17 >> (1727719270 - 1727719244)))))) : (((max(var_3, 10274432801481659067)) & ((((arr_2 [i_0] [i_1 + 3] [i_1 + 3]) ? (arr_5 [i_0] [i_1]) : var_7)))))));
                    var_12 = (max(var_12, (((var_10 ? var_3 : ((((var_8 ? (arr_1 [i_1]) : (arr_6 [i_0] [i_1]))) & var_5)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 &= var_8;
                                var_14 = ((var_8 != (((188 ^ var_3) ? (~var_9) : ((var_10 ? var_9 : var_3))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= -var_6;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_5] = (((((12082650133537502494 ? var_1 : (arr_15 [i_5])))) ? (((arr_14 [i_6 - 2] [i_5]) / (arr_14 [i_6 + 2] [i_6]))) : (((~(arr_18 [i_5] [i_6]))))));
                arr_22 [i_5] [i_5] = (max((max(var_7, var_7)), (arr_19 [i_6 - 1])));
            }
        }
    }
    #pragma endscop
}
