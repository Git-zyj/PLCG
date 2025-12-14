/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, 1));
                            arr_9 [i_2] [i_2] [i_2] = (max((arr_3 [i_0] [1] [i_3]), (((arr_0 [i_2]) ? (arr_7 [i_0] [i_2] [i_0]) : ((1 ? 1 : var_5))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_11 = (((((~-1) ? (1 < 0) : var_6)) / 1));
                                arr_12 [i_3] [i_2] [i_2] [i_3] [i_2] [i_2] [i_0] = (min((min((max(var_6, var_9)), ((min(var_1, (arr_0 [i_0])))))), ((min(1, var_4)))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_12 -= (((((0 ? var_3 : (arr_1 [i_0] [i_0])))) ? 1 : 1));
                                var_13 -= 2886;
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = -1;
                            }
                            var_14 = (-1 != -12489);
                            arr_16 [i_3] [i_2] [i_2] [i_0] = ((~((-(arr_13 [i_2] [i_2] [i_2])))));
                        }
                    }
                }
                arr_17 [i_1] [19] = 1;
            }
        }
    }
    var_15 -= (((1 + var_2) ? ((~((var_7 ? var_1 : 0)))) : ((max((!1), -3535)))));
    var_16 = var_6;
    #pragma endscop
}
