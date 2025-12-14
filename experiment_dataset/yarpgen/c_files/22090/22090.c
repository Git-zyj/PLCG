/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? (((var_3 ? var_7 : var_11))) : (255 + 1141047280933086804)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((0 << (28785 - 28781)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 += ((109766978 ? var_3 : ((((var_9 ? var_3 : var_5)) - -2147483629))));
                                arr_13 [i_0] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_0] [i_0] [i_0] = -43854;
                                var_18 = (min(var_18, (((((((min(var_1, (arr_6 [i_3] [i_2 - 1] [i_1]))) / (arr_10 [i_2] [0] [i_2] [i_3 + 1] [i_4])))) ? ((min((arr_11 [i_1] [i_1 - 1] [i_2] [i_1 + 1]), ((max(1, 248)))))) : (max((1569271883 & 184), -5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((var_5 ? var_10 : var_6));
    var_20 = (min(var_20, var_1));

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 *= 562675075514368;
        var_22 = (min(var_22, ((max(-1569271883, var_11)))));
    }
    for (int i_6 = 1; i_6 < 8;i_6 += 1)
    {
        var_23 += 28;
        var_24 = 65533;
        arr_21 [i_6] = (arr_6 [i_6] [i_6 + 2] [i_6 - 1]);
        var_25 = (max(var_25, 1));
        var_26 = (max(var_26, (((((((~(max((arr_9 [0] [i_6] [i_6] [i_6] [0]), 4558)))) + 2147483647)) >> (7815 <= var_2))))));
    }
    #pragma endscop
}
