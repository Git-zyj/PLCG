/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = ((-((9251801393870750409 | (arr_7 [i_2] [i_1] [3])))));
                    var_18 = (min((arr_1 [i_1]), 9194942679838801207));
                    arr_8 [i_1] [7] [8] = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((arr_13 [i_3 - 1] [i_2] [i_0 - 1] [2] [2] [i_3] [i_1]) ? var_11 : (arr_13 [i_3 + 1] [i_1] [i_0 + 1] [i_3] [i_1] [i_2] [i_4]))) >= ((((!(((~(arr_13 [i_0] [i_3] [i_0] [7] [i_0] [i_1] [i_3])))))))))))));
                                var_20 = arr_11 [i_0] [i_1] [8] [i_3] [i_4] [i_3] [i_3];
                                arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] = ((13174299947588810450 ? ((((288195191779622912 ? 13174299947588810450 : (arr_13 [i_4] [i_4] [i_3] [i_3] [1] [i_1] [i_0]))) * (((-(arr_13 [7] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (arr_11 [i_0] [i_1] [12] [i_2] [i_3] [i_3] [i_4])));
                                arr_15 [i_1] [i_1] [i_2 + 1] [i_1] [i_4] = ((~((~((15360 ? -952513946 : 9251801393870750409))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
