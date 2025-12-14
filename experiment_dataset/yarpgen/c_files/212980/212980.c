/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((max((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (!var_11) : var_7));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_9, ((var_9 ? (arr_6 [i_0 + 1] [i_1] [i_0]) : (((((arr_7 [i_1] [i_2] [i_0]) >= 11))))))));
                                var_16 = arr_12 [5];
                                arr_13 [i_0 + 1] [i_0] [1] [i_0] [i_0 + 1] = (i_0 % 2 == 0) ? ((((((-(arr_10 [i_0 + 1])))) ? (((var_5 >> (((max(var_9, (arr_8 [i_0] [i_1] [i_2] [i_3]))) - 64))))) : 17785))) : ((((((-(arr_10 [i_0 + 1])))) ? (((var_5 >> (((((max(var_9, (arr_8 [i_0] [i_1] [i_2] [i_3]))) - 64)) - 638609584))))) : 17785)));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [i_1] [i_1] [10] [i_5] [i_5] [4] &= (((arr_2 [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_0 [i_1]) : 17785));
                        arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((arr_10 [i_0]) ? (arr_8 [i_0] [i_1] [i_0 + 1] [i_0]) : (arr_3 [i_0]));
                        arr_19 [i_5] [i_0] [i_0] [i_0] = (((arr_3 [i_0]) ? -17773 : var_11));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_17 |= (arr_8 [i_2] [8] [i_0 + 1] [i_2]);
                        var_18 &= (((var_9 ? var_9 : (arr_2 [i_6] [12] [i_2]))));
                    }
                }
                arr_23 [i_1] [i_0 + 1] [i_1] |= max(((var_2 ? (((arr_7 [i_0] [i_1] [i_1]) ? var_5 : (arr_22 [i_1] [i_1] [7] [i_1]))) : (((arr_10 [i_1]) >> (arr_5 [i_0] [i_0] [i_0] [i_1]))))), var_8);
                var_19 = (var_12 || ((((var_0 - var_7) ? ((max((arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]), var_9))) : (arr_3 [i_0])))));
                arr_24 [i_0] [13] [i_1] = (((arr_12 [i_0 + 1]) ? (!2841407398067140113) : (min((((var_4 > (arr_3 [i_0])))), (((arr_21 [i_0] [i_0] [i_1] [i_0]) + var_14))))));
            }
        }
    }
    var_20 = -7892;
    var_21 = var_5;
    var_22 = var_12;
    #pragma endscop
}
