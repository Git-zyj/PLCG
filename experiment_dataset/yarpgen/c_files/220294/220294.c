/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~-2993);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, var_6));
        var_15 = ((-(((arr_0 [i_0] [i_0]) ? 236 : 710370879))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((((min(30846, (arr_5 [i_1])))) ? ((max((arr_5 [i_1]), (arr_5 [i_1])))) : ((~(arr_5 [i_1])))));
        var_16 = (max(-50214, (((!-710370880) ? (((!(arr_2 [i_1])))) : (710370874 < var_5)))));
        arr_7 [i_1] = ((0 ? var_0 : var_6));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                {
                    var_17 ^= (91 * 38698);
                    var_18 = (((arr_0 [i_4 - 1] [i_4 - 4]) * (arr_3 [i_2] [i_2])));
                    arr_16 [i_2] [i_2] [i_4] [i_3] = 710370877;

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_19 = (min(var_19, (710370876 / 710370876)));
                        var_20 = ((17993 ? (arr_12 [i_2] [i_4 - 2]) : var_1));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_21 = (max(var_21, (!-710370877)));
                            arr_21 [i_2] [12] [i_4] [i_2] [i_4] [1] [i_2] = arr_14 [i_4 - 1] [i_5 - 1] [i_2];
                        }
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_2] [i_3] [i_3] [11] [i_2] = (arr_8 [i_2]);
                        var_22 |= ((((max(65521, 21))) ? (max((!21453), (min(3415228839502154250, (arr_19 [i_4]))))) : 710370849));
                        var_23 = (max(var_23, (arr_10 [1] [2] [i_3])));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_24 = ((!(((~(arr_12 [i_2] [i_4 - 2]))))));
                        arr_27 [6] [i_2] [i_2] [i_4] [i_4] = (~-1237140418);
                    }
                }
            }
        }
    }
    #pragma endscop
}
