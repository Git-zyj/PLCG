/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((((arr_4 [i_0 - 3] [i_0]) + (((arr_2 [i_0]) ? (arr_0 [i_0]) : -12145)))), (arr_5 [i_0 + 1] [i_1]))))));
                arr_6 [i_0] = ((-((min((arr_3 [i_0]), (arr_3 [i_0]))))));
                var_17 += ((-((-(arr_0 [i_0 - 2])))));
            }
        }
    }
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_8 [i_2])));
                                var_20 = ((((min(-18186, 65535))) >> (((min((arr_12 [i_4] [i_4 - 2] [i_4 - 2] [i_6]), (arr_11 [i_2] [9] [i_5] [10]))) - 8040222116556913525))));
                                arr_21 [i_2] [4] [i_4] [i_5] [i_4] = (max((max(((max((arr_20 [2] [i_3] [i_4 + 1] [i_3] [i_6] [5]), 18201))), var_4)), (((((((arr_14 [i_2] [i_6] [i_4 - 2] [i_5] [10]) ? var_6 : (arr_2 [i_6])))) ? 1 : 37073)))));
                                arr_22 [i_2] [i_4] &= (((arr_13 [i_3] [i_4 + 1] [8] [i_5] [i_6]) ? (((arr_13 [1] [i_4 + 1] [1] [1] [i_6]) ? (arr_13 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_6]) : (arr_13 [i_3] [i_4 + 1] [i_5] [0] [10]))) : (((((arr_13 [i_2] [i_4 + 1] [8] [3] [i_4]) == 127))))));
                            }
                        }
                    }
                    arr_23 [i_2] [7] [i_2] [i_2] = (((-(((0 && (arr_16 [i_4] [i_4] [i_4])))))));
                    var_21 *= var_14;
                    arr_24 [9] [i_3] [9] |= (max(((((arr_10 [i_2] [i_4 - 1] [i_4]) > (arr_10 [8] [i_4 - 2] [8])))), (18185 * 1)));
                }
            }
        }
    }
    #pragma endscop
}
