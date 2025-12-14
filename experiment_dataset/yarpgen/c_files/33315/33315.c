/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(var_1, (1021167117839060328 | 14)));
        arr_5 [0] |= ((var_11 ? ((((((arr_1 [2]) ? 7237 : var_14))) % (max(-100, var_3)))) : (((min(1, (arr_2 [0])))))));
    }
    var_16 = (((max((13751 || var_12), (var_3 - 158406172))) | (!var_8)));

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_17 = (max(var_17, ((max((min((arr_9 [i_1] [i_2 + 2]), (arr_6 [i_2 + 2]))), (arr_14 [i_1] [4] [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_22 [i_1] = ((+((((max((arr_14 [i_2 + 2] [i_3] [i_5 - 4]), 4294967295))) ? var_2 : -145))));
                                var_18 = ((((((max((arr_6 [i_2 + 3]), (arr_6 [i_2 + 3])))) + 2147483647)) << (((((arr_6 [i_2 - 1]) + 154)) - 28))));
                            }
                        }
                    }
                    var_19 &= ((!((min((arr_18 [i_2 + 3] [17] [i_2]), (arr_18 [i_2 + 3] [i_2 + 3] [i_2 + 3]))))));
                    arr_23 [11] [i_2 + 1] [i_2 + 1] [i_3] = (min(var_10, var_14));
                    arr_24 [i_1] [i_1] [17] [17] = ((((var_7 == (~6))) ? (min((arr_20 [i_1] [i_2 + 2]), 248)) : (((var_3 || (~var_13))))));
                }
            }
        }
        var_20 = (max(var_20, 70231305224192));
        arr_25 [i_1] = ((+(((arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_12 : var_7))));
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        var_21 = (((((-(arr_10 [i_6 + 1] [i_6 - 2])))) ? (arr_13 [14] [i_6 + 1] [i_6] [i_6]) : (((arr_27 [i_6] [i_6]) ? ((117 ? (arr_21 [i_6] [i_6] [i_6] [i_6] [i_6]) : 4)) : ((5514991871222388466 ? (arr_7 [i_6]) : -2))))));
        var_22 = ((((((arr_13 [6] [i_6 - 2] [i_6 - 1] [i_6 - 2]) | (arr_13 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 2])))) || var_3));
    }
    #pragma endscop
}
