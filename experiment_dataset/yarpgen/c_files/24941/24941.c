/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (!var_16)));
                    var_21 = (min(var_21, ((min((max((var_11 >= 17), ((4653152044002383795 ? 141 : (arr_2 [i_0 - 2]))))), (((!(((1 ? var_7 : 24)))))))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 -= (((1 / var_19) / -var_4));
                        var_23 = (min(var_23, 0));
                        var_24 = (min(var_24, var_17));
                        var_25 -= 141;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] = ((((min(var_6, (arr_6 [i_0 + 3] [i_0] [i_0 + 2])))) && (((1 ? (arr_12 [i_0] [i_1] [i_0 - 1]) : (((min(1, var_13)))))))));
                        arr_14 [i_4] [i_4] [i_0] [5] = (((arr_6 [i_0] [i_0] [i_4]) ? (((((arr_12 [i_4] [i_1] [i_0 + 1]) ? var_13 : (arr_0 [i_4]))))) : var_3));
                        arr_15 [i_0] [i_0] = ((((min((arr_3 [i_0 + 2] [i_1] [i_0 - 1]), (arr_3 [i_0 + 1] [i_0] [i_0 + 1])))) / ((var_17 ? ((min(1, 1))) : 1))));
                    }
                    arr_16 [i_2] [i_1] [i_0] [i_2] = (((99 ? 127 : 1586397323929828626)) * 0);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_22 [i_5] [i_5] [2] [i_0] = (min(((((1 ? var_3 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]))))), 9870451820848611519));
                                arr_23 [i_0] [i_0] [i_0] [i_0 + 2] [4] [i_0] [1] &= (~4958065888414224805);
                                arr_24 [14] [1] [14] |= ((((((((-(arr_2 [i_5])))) + var_4))) ? (((!(min(1, (arr_2 [i_5])))))) : ((-(arr_17 [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 2] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min((!var_3), (var_12 / var_6)));
    var_27 = var_18;
    #pragma endscop
}
