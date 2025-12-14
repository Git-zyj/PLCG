/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = ((((min((arr_0 [i_1 + 1]), (arr_0 [i_1 - 2])))) ? ((min((arr_0 [i_1 - 2]), (arr_2 [i_1 - 2] [i_1 - 1])))) : (arr_2 [i_0] [i_1 - 3])));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_6 [i_0] [i_1 + 1] [i_1] [i_2] = ((!((min(445302426, -893489470)))));
                    var_22 = (max(var_22, (((((min((arr_4 [i_2 + 1] [i_0] [i_2 + 1]), (arr_4 [i_2 + 3] [i_0] [i_2 - 2])))) ? ((min((arr_4 [i_2 + 2] [i_0] [i_2]), (arr_4 [i_2 - 2] [i_0] [i_2])))) : (((var_15 == (arr_4 [i_2 - 3] [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 &= ((!(!19559)));
                                arr_12 [i_2] = ((((!(((-(arr_0 [i_2]))))))));
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    arr_16 [i_0] [0] = (arr_1 [i_0]);
                    var_24 &= (arr_7 [i_0] [i_1] [i_0]);
                    arr_17 [i_0] [i_0] [i_5] [i_1] |= ((((((arr_7 [i_1 + 1] [i_5 - 2] [19]) ? (arr_7 [i_1 + 1] [i_5 - 2] [i_5 - 1]) : var_4))) ? var_2 : (((var_6 ? (576460752269869056 + 790224870) : (arr_14 [i_0] [i_5 - 2] [i_5 - 2] [i_1 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_25 ^= (min(((-(((arr_21 [i_1] [i_5 + 1] [i_6] [i_5 + 1]) + 0)))), ((((min(32755, 16376)))))));
                                arr_22 [i_0] [i_0] [i_5] [i_6] [i_7] = (arr_9 [i_1] [1] [i_6] [i_7]);
                                var_26 = (var_16 ^ 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_27, ((max(var_10, (var_17 ^ var_13))))));
    #pragma endscop
}
