/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min(var_9, (min(var_3, var_6)))))));
    var_13 |= ((var_1 ? 65527 : var_10));
    var_14 = (max(var_3, ((var_10 ? (!var_2) : ((0 ? 743827017361545875 : -303900827))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [2] [i_1] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = (~var_9);
                                var_15 = (var_1 + var_1);
                                var_16 = (!0);
                            }
                        }
                    }
                    var_17 = ((~((var_5 ? (var_3 & var_3) : (var_3 ^ var_7)))));
                    var_18 = (max(var_18, ((var_1 ? ((var_9 ? (var_0 / var_0) : var_9)) : ((((!(((var_5 ? var_5 : var_9)))))))))));
                }
            }
        }
    }
    #pragma endscop
}
