/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = ((((((((var_11 ? var_13 : var_12))) ? var_12 : var_0))) > ((var_4 % (var_9 | var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (~264254329564861009);
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_17 = (min(((~(max((arr_1 [i_2]), (arr_11 [i_4] [i_1] [i_4] [23]))))), ((max((arr_2 [i_0]), (arr_5 [i_0 - 1] [i_4]))))));
                                arr_17 [i_0] &= ((((((!(((arr_1 [i_0]) || (arr_13 [i_0 + 1] [18]))))))) == (((((var_4 ? var_1 : var_7))) ? var_6 : -2181843386368))));
                                arr_18 [i_4] [i_3] [12] [i_2] [i_1] [22] = (((((((max((arr_4 [i_0 - 2]), var_9))) & (((arr_0 [i_3]) ? (arr_9 [i_4] [i_3] [i_2] [i_1]) : (arr_9 [i_3] [i_3] [i_2] [i_3])))))) <= (((((~(arr_10 [i_4] [i_2] [i_1] [i_0])))) ? (((arr_1 [i_1]) ^ (arr_9 [i_4] [i_1] [i_1] [i_3]))) : ((((arr_3 [i_0] [i_1]) * (arr_0 [0]))))))));
                                var_18 = (((((~var_13) & var_1)) ^ ((~((max((arr_11 [i_4] [i_3] [i_0 - 1] [i_0 - 1]), var_0)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_9 & var_9) | var_9));
    #pragma endscop
}
