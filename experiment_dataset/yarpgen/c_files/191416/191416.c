/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_3));
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((355935710 ? 355935710 : (max(var_14, ((((arr_12 [i_0] [i_2] [i_0] [i_0] [i_0]) >= 18430)))))));
                                var_19 = (max(var_19, ((max(((355935720 - (arr_10 [i_4]))), (min(((355935710 ^ (arr_1 [i_1] [i_1]))), (((var_2 + 2147483647) >> (var_13 + 23253))))))))));
                                arr_14 [i_4] [i_2] [19] [i_2] [i_0] = (arr_5 [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = 2147483647;
                                arr_22 [i_0] [i_1] [i_2] [4] [i_0] [i_6] = (max((((arr_13 [i_0] [i_2] [i_0] [i_5] [i_6]) & 243)), ((-2147483647 ? -2147483625 : (((-2147483643 >= (arr_19 [i_0] [i_0] [i_2] [i_0]))))))));
                                arr_23 [i_0] [i_6] [i_1] [20] [i_6] [i_0] [i_2] = 1866756778;
                            }
                        }
                    }
                    arr_24 [i_0] [i_2] [i_2] = (!2147483625);
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = var_9;
    #pragma endscop
}
