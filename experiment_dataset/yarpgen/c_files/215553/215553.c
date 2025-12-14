/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = -25220;
        var_14 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(((~(arr_2 [i_0 - 1] [i_0]))), (((arr_0 [i_3]) | 113)))))));
                                arr_16 [i_0] [i_0] [i_3] [i_4] = var_6;
                                arr_17 [i_0] [i_0] [i_4] = var_4;
                            }
                        }
                    }
                    var_16 = ((~(((arr_5 [i_0 - 1]) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
                    arr_18 [i_0] [i_1] = ((~(max(var_11, (arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        arr_22 [i_5] = ((-25222 ? 2147483647 : (((((max(var_10, (arr_19 [i_5])))) > (((arr_21 [i_5]) ? (arr_19 [i_5]) : (arr_20 [i_5]))))))));
        var_17 = ((((((~var_9) / 1425517265))) ? ((-25222 ? (!0) : ((-(arr_21 [i_5]))))) : (((arr_20 [i_5 - 1]) ? 1 : ((((arr_21 [i_5]) >= (arr_19 [i_5]))))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_18 = ((((((arr_24 [i_6]) ? var_1 : (arr_21 [i_6 - 2])))) ? (1 - var_2) : var_6));
        arr_25 [i_6] = (((((60 ? var_0 : (arr_19 [i_6])))) ? (arr_24 [i_6]) : ((185 ? var_6 : (arr_24 [i_6])))));
    }
    var_19 = (((((var_10 ? var_7 : (!var_0)))) - 220));
    #pragma endscop
}
