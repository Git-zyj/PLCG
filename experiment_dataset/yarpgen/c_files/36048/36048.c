/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((493824674 << ((((-(~1572864))) - 1572864))));
    var_17 = ((((((min(var_2, 1))) & (var_7 ^ var_2))) - var_8));
    var_18 = (!25564);
    var_19 = (min((((var_0 ? var_0 : var_6))), (((!(var_3 || var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (max(var_20, (!-13)));
                        var_21 = (max(var_21, (((var_12 ? var_9 : ((50 + (arr_12 [i_0] [i_0] [i_1] [i_2] [i_3]))))))));
                        var_22 |= (!139);
                        arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] = var_4;
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_23 = (((-(arr_15 [10] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]))));
                        var_24 = var_3;
                    }
                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_25 = (((-2147483647 - 1) % ((min(var_0, 77)))));
                        arr_18 [i_5] [i_1] [i_2] [i_5] = (~var_5);
                    }
                    var_26 = max((max((arr_10 [i_0]), (arr_0 [i_1] [i_1]))), (max(var_2, (arr_0 [i_0] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
