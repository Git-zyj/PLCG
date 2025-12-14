/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 1193584050;
    var_19 = ((var_15 << (var_5 - 2862829129)));
    var_20 = (max(var_20, var_13));
    var_21 = (min(736631874, 4116487447));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_22 = var_16;
                    arr_8 [i_0] [i_1] [4] |= var_16;
                    var_23 = 1402458043;
                    var_24 *= (min((((((arr_5 [i_0] [i_1 - 1]) << (var_10 - 18953))) << (var_0 - 3090884587))), ((min((((((arr_2 [i_1] [i_2]) + 2147483647)) << (var_6 - 29450))), 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] [i_3] [i_1 - 1] [i_1] [i_1 - 1] [i_2] = -1997;
                                arr_14 [i_2] = var_12;
                                var_25 = (-(((((arr_9 [i_0] [i_0] [i_0] [i_0] [7]) / var_1)) / ((-996151698 / (arr_2 [i_0] [i_0]))))));
                                var_26 = ((~((var_5 | (arr_4 [i_1 - 2] [i_1 - 2])))));
                                var_27 = arr_10 [i_0] [i_0] [i_0] [i_2];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
