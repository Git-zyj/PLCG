/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 3955312688));
    var_21 = ((var_6 ? var_11 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((1 >= (max(339654620, 1000785313))));
                arr_5 [i_1] [i_0] = (max(var_4, (((arr_1 [i_0]) >> (((max(339654601, var_2)) - 339654590))))));
                arr_6 [i_1] [i_1] [i_0] &= (((max(((-(arr_2 [i_0 - 2] [i_1] [i_0]))), (max(339654608, (arr_0 [i_0] [i_1]))))) % (max(1, 4294967289))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_11 [i_0 - 1] [i_1] [i_1] = ((((max(var_11, (arr_3 [i_0] [i_1] [i_1]))) != 1315049301)) ? ((~(arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 3]))) : (max((((arr_2 [i_0] [i_1] [i_0]) ? (arr_1 [i_0]) : (arr_9 [i_0] [i_1] [i_0]))), (339654610 | 4294967295))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_22 = var_11;
                        arr_14 [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_2] [i_3];
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_23 = (max((((((1 >> (1198769349 - 1198769332)))) ? (arr_9 [i_0 - 2] [i_4 + 1] [i_4 + 1]) : var_18)), (arr_12 [i_4] [i_2] [i_1] [i_0 - 2])));
                        var_24 -= (((((var_9 - (arr_16 [i_4 + 1] [i_2] [i_1] [i_1] [i_0])))) ? (((max(1, (arr_3 [i_1] [i_1] [i_0]))) & (arr_8 [i_4 + 1] [i_4 + 1] [i_4] [i_4]))) : (max((arr_10 [i_0] [i_2] [i_0]), ((~(arr_12 [i_4] [i_0 - 3] [i_1] [i_0 - 3])))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = 0;
                            var_25 += (~var_16);
                            var_26 ^= max(((!(arr_17 [i_0] [i_1] [i_2] [i_4 + 1] [i_5]))), (0 >= 3955312688));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] = (((((arr_1 [i_1]) >= (arr_13 [i_6] [i_6] [i_2] [i_1] [i_0]))) ? (arr_1 [i_6]) : (((arr_10 [i_2] [i_0] [i_0]) ? (arr_15 [i_0 + 1] [i_1] [i_2] [i_0 + 1] [i_1]) : (arr_8 [i_6] [i_2] [i_0 - 2] [i_0 - 2])))));
                        arr_25 [i_0] [i_2] [i_0] = (!var_1);
                        var_27 |= ((arr_19 [i_6] [i_2] [i_1] [i_0] [i_0]) ? (!var_15) : ((var_9 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : 9)));
                        arr_26 [i_0 + 1] [i_0] [i_0] [i_0 + 1] = (arr_9 [i_0] [i_0] [i_0 + 2]);
                        arr_27 [i_0 + 1] [i_0 + 1] [2] [2] [i_0 + 1] = ((~(arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0])));
                    }
                }
                var_28 ^= (((((arr_10 [i_0] [i_1] [i_1]) << (((max(1315049301, var_5)) - 1315049280))))) && var_19);
            }
        }
    }
    var_29 = max((max((548208022 >= var_17), (max(var_14, var_14)))), (((max(4294967295, 4294967268)) >= var_15)));
    #pragma endscop
}
