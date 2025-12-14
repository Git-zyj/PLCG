/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(666005736802752818, 3902));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = ((!((((arr_2 [i_0]) ? -1431407497 : var_6)))));
        arr_3 [i_0] [i_0] |= 22701;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_16 = (~var_3);
                        var_17 = 22725;
                        arr_13 [i_0] = (max(((max(0, 0))), (((((~(arr_2 [i_2])))) ? (((arr_1 [i_0]) ? (arr_8 [9] [i_1]) : 42858)) : ((42835 ? (arr_5 [2]) : var_1))))));

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_18 = max((arr_12 [i_3] [i_2 + 1] [i_2] [i_3] [i_4 + 1]), (max((arr_5 [i_0]), 453981229)));
                            arr_18 [i_4] [i_4] = ((-(((max((arr_4 [i_0] [i_3]), 22677))))));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_4] |= (((((var_6 ? (arr_9 [i_4]) : 829059302))) ? ((2 ? var_8 : var_0)) : 229));
                            arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = (max(((max(-21, (arr_11 [i_4 - 2] [i_2 - 1] [i_4 - 2])))), (max(((((arr_9 [i_4]) ? (arr_14 [i_1] [1] [i_3] [i_4]) : 8192))), (max(0, 0))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 *= (!-829059303);
                            var_20 -= (((arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_5] [i_2]) > (arr_10 [i_2 + 1] [i_1] [i_2] [i_2] [i_5] [i_5])));
                        }
                    }
                    var_21 -= (((max((arr_11 [i_2 + 2] [i_0] [i_2]), ((max(-1624392540, 28)))))) ? (max((~42837), (arr_12 [17] [i_1] [i_2 + 2] [i_2] [i_2 - 1]))) : (!-18767));
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        arr_26 [i_6] = (max(var_11, (arr_24 [i_6 - 2] [i_6])));
        arr_27 [i_6 - 2] [i_6] = arr_25 [i_6];
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        arr_30 [i_7] = var_8;
        arr_31 [i_7 + 1] = (max(((max((!7729283511538459068), 22681))), (max(var_3, (max(var_2, 453981229))))));
        arr_32 [i_7] = (arr_25 [i_7 + 1]);
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_36 [i_8] = (max((max((!228), (max(829059325, -1069595277)))), -11));
        arr_37 [i_8] = var_2;
        var_22 *= ((((arr_28 [i_8]) ? -829059301 : (arr_28 [i_8]))));
    }
    var_23 = (min(var_23, (((!(!var_13))))));
    var_24 = var_4;
    #pragma endscop
}
