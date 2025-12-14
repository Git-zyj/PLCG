/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = ((~((4077814927 ? 0 : -3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = (((((arr_5 [i_4] [i_4 + 1] [i_4] [i_4]) >= var_7)) ? ((((arr_0 [i_4 + 3] [i_3 - 1]) ? (arr_8 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3]) : (arr_8 [i_3 - 1] [i_3 + 2] [i_3 + 2] [1])))) : ((-43 - ((((var_11 >= (arr_1 [i_1])))))))));
                                arr_13 [i_4 + 2] [i_3] [i_3] [i_2] [i_1] [4] = (((((((arr_5 [i_0] [i_2] [i_3] [i_4 + 1]) & var_11))) & ((342025520 ? 1192649021 : (arr_6 [i_1] [8] [i_1]))))));
                            }
                        }
                    }
                    arr_14 [12] [12] = ((+(((arr_4 [i_0] [i_2] [i_2]) ? var_15 : var_11))));
                }
            }
        }
    }
    var_18 = ((!((var_1 >= (~90)))));
    #pragma endscop
}
