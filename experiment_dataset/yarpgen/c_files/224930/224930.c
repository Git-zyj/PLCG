/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (arr_0 [i_2]);
                    var_18 = (((arr_6 [i_0] [i_1]) == (((var_7 ? var_9 : -2147483634)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_19 = (~var_15);
                        arr_15 [i_0] [i_3] [i_4] [i_5] = ((-((-103 ? (arr_1 [i_0]) : var_7))));
                        var_20 = ((-(~var_3)));
                        var_21 = (min(var_21, (arr_6 [i_5] [i_4])));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_19 [i_6] = (arr_13 [i_0] [i_0] [i_4]);
                        var_22 = (min(var_22, (((var_0 < (arr_3 [i_3]))))));
                        var_23 = (arr_5 [i_0] [i_4 - 1] [i_4] [i_0]);
                    }
                    arr_20 [i_0] [i_0] [i_3] = (((arr_2 [i_0] [i_3]) ? (arr_13 [i_0] [i_3] [i_4]) : 1806932346631862669));
                    arr_21 [i_0] [i_3] [i_4] = 1806932346631862650;
                    arr_22 [i_4] [i_3] [i_0] = (((~(arr_3 [i_0]))));
                }
            }
        }
        var_24 = (max(var_24, (arr_13 [i_0] [i_0] [i_0])));
        var_25 = var_4;
        var_26 = (min(var_26, ((((arr_16 [i_0] [i_0] [i_0] [i_0]) <= (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_27 = (max(var_27, -55));
    #pragma endscop
}
