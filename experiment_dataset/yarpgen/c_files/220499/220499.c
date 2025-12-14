/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (max(17092818367293952840, 1353925706415598776));
        var_17 &= ((var_15 > 1044480) & (((arr_0 [i_0] [i_0]) - var_2)));
        arr_4 [i_0] = (!14181121158017013850);
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_16 [0] [i_3] [12] [i_2] [i_1] [0] &= ((var_13 & (1353925706415598795 + -1)));
                        arr_17 [i_0] [i_2] [1] = var_16;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_18 = ((var_15 ? (arr_18 [i_4] [i_4]) : (((arr_18 [i_4] [i_4]) ? (arr_18 [i_4] [i_4]) : (arr_18 [i_4] [i_4])))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_19 = (18446744073709551615 | 4294967295);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_5] [14] [i_4] &= ((var_3 / (arr_22 [i_4] [16] [i_6] [i_7 - 1])));
                        var_20 &= (((arr_19 [i_7 - 1]) >> ((((var_0 ? 1239068825200416818 : var_15)) - 1239068825200416807))));
                    }
                }
            }
            var_21 = (min(var_21, ((((((var_16 ? 144115188075855871 : 16383))) ? ((3103201161330893277 ? 1 : var_16)) : -49)))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        arr_31 [i_4] [i_4] [i_5] [i_5] = (((arr_27 [i_8] [i_8 + 1]) > (~var_7)));
                        arr_32 [12] [12] [6] [6] |= (((arr_28 [14]) ? (var_10 - 2002713875) : (arr_29 [6] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                        var_22 = var_5;
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_35 [1] [i_10] = (arr_23 [i_4] [i_4] [i_10]);
            arr_36 [12] [i_10] [i_4] = ((-7134811257573853362 && 2) ? (arr_27 [i_4] [i_10]) : (((arr_23 [i_4] [i_4] [i_4]) | var_9)));
            var_23 = -19976;
            var_24 = (arr_33 [i_4]);
            var_25 = var_8;
        }
        var_26 |= (((var_11 - -9076927417167788890) ? ((var_8 << (((arr_34 [i_4] [8] [i_4]) - 1212781845)))) : -var_4));
        var_27 = (max(var_27, (((var_14 ? (arr_23 [i_4] [i_4] [i_4]) : (arr_23 [i_4] [i_4] [i_4]))))));
    }
    var_28 = var_15;
    #pragma endscop
}
