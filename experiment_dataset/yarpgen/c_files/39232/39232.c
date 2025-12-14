/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = (max((max(var_6, (min(var_3, var_1)))), ((max(120, (max(var_6, var_10)))))));
                    var_12 = ((min((min(32756, var_3)), var_1)));
                    var_13 ^= ((106 ? (min(120, 13094673173537915171)) : var_8));
                    var_14 = (max((max(var_2, 5352070900171636419)), ((min((max(var_3, -8)), var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] = (max(1, 77));
                                var_15 = (max(var_15, ((max(var_4, (min(((2633144020775726736 ? var_1 : var_1)), (min(var_9, (-2147483647 - 1))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, (((var_10 ? (max(18446744073709551613, ((var_0 ? var_1 : var_7)))) : var_9)))));
    #pragma endscop
}
