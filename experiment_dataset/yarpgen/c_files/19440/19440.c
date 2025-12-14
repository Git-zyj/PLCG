/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 0;
    var_21 &= var_13;
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((((((max((arr_1 [i_0]), (arr_2 [i_1]))))) <= 2097151)))));
                var_24 = 0;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_25 = (max(var_25, (arr_9 [i_0] [i_1] [4] [i_3])));
                                var_26 = (min((min((max(0, -2097151)), (arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))), ((((arr_5 [i_4 + 3]) * (arr_5 [i_4 + 3]))))));
                            }
                        }
                    }
                    var_27 = (arr_11 [i_0 - 1] [i_0 - 2]);
                    var_28 = (min((arr_11 [i_1] [2]), (((152 ? 117 : 2097151)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_29 = (arr_8 [i_5] [i_1] [i_1] [i_1] [i_0 - 2]);
                    arr_16 [i_1] = (((arr_5 [i_0 + 1]) + (-64 + 105)));
                }
            }
        }
    }
    var_30 = (max(var_30, var_6));
    #pragma endscop
}
