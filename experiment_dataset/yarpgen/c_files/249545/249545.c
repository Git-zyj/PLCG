/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_0] [i_1] [13] [19] = 2209598685;
                                arr_16 [i_0] [i_1] = (((arr_7 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [i_1]) >= ((47654 ? (arr_6 [i_1] [i_1] [i_4]) : -50037))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [11] = (min(((min(9223372036854775807, (-127 - 1)))), (max((arr_4 [i_1] [i_1] [i_2]), 924573217))));
                    arr_18 [i_1] [i_1] [i_1] [i_1] = (arr_11 [i_0] [i_1] [i_0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_24 [i_6] [i_1] [i_0] [i_2] [i_1] [i_0] = (((((((-(arr_4 [i_1] [i_1] [i_1]))) - 7344))) ? var_11 : (arr_10 [i_5 - 2] [i_1] [i_5] [4] [i_1])));
                                var_13 = 7341;
                                arr_25 [i_6] [i_1] [i_1] [i_0] = var_10;
                            }
                        }
                    }
                    arr_26 [i_1] [21] = 0;
                }
            }
        }
    }
    var_14 = (max(var_14, var_5));
    #pragma endscop
}
