/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, ((min((arr_6 [i_1]), (((((var_3 % (arr_14 [i_4] [i_4] [i_4] [7] [i_4])))) ? (((arr_15 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (arr_10 [i_0]) : (arr_4 [i_2] [i_3] [i_3]))) : (((((arr_1 [i_4] [i_1 - 1]) || (arr_7 [1] [i_0] [7] [0]))))))))))));
                                var_11 = (min((arr_9 [i_0] [i_4]), (27 & -2651768869183905913)));
                                var_12 -= ((((arr_11 [i_1] [i_1 + 1]) >= ((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_13 = (max(var_13, ((((~(arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 1])))))));
                        arr_19 [i_0] = (min((((99 % 211) * (((arr_11 [i_0] [i_1]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [9]))))), (((arr_1 [i_1 + 1] [i_1 + 1]) ? 249 : ((127 ? 126 : 0))))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] = -64;
                        var_14 = ((((((arr_4 [i_1] [i_2] [i_6]) ? (arr_4 [1] [i_1] [i_6]) : (arr_4 [i_0] [i_1] [i_1])))) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_2])));
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, (((((((((var_0 ? var_5 : var_0))) ? var_5 : (min(var_9, var_2))))) || var_1)))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_7] [i_7] = var_5;
                    var_16 = (arr_32 [i_7] [17] [i_7]);
                    var_17 = var_4;
                    var_18 = (max(var_18, (arr_32 [i_7] [i_8] [i_9])));
                }
            }
        }
    }
    var_19 = ((var_5 && (var_3 >= var_2)));
    #pragma endscop
}
