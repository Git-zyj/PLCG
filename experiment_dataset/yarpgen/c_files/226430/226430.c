/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((min(var_15, var_10))) + var_13)) <= (((((var_4 ? var_4 : 255))) ? ((var_15 ? var_16 : var_7)) : (var_1 > 13154776799468037337))))))));
    var_18 = (max((((!var_2) ? (~var_0) : (((var_5 ? var_16 : var_15))))), (((!(var_5 >> var_13))))));
    var_19 = ((~((-var_11 / (5291967274241514278 * 255)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (((7697 ? (max(-2804332502809710333, 262143) : 255))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_21 = var_1;
                        arr_9 [i_0] [1] [i_0] [i_0] [i_3 - 2] [i_3] = var_5;
                        var_22 = var_10;
                        arr_10 [i_0 + 1] [i_0 + 1] [i_0] = 255;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_23 = ((((((!var_2) - (arr_8 [i_4] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))) ? (max((arr_7 [1] [i_1] [i_0] [i_4]), (var_1 | 3))) : (arr_6 [i_0])));
                        var_24 = (max(var_24, (((((((((var_14 ? var_8 : var_15))) ? var_1 : var_10))) ? var_0 : ((((arr_6 [i_4]) - (!5291967274241514278)))))))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = ((14054790319680780528 ? 255 : 6500724));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_25 = (min(var_25, (((var_12 ? ((((((arr_6 [12]) ? 262143 : var_3))) ? var_2 : (max((arr_7 [i_0] [4] [16] [16]), var_16)))) : ((((max(var_2, (arr_15 [4] [4])))))))))));
                        arr_17 [i_0] = var_7;
                        var_26 |= ((((((((14086160730029262046 ? (arr_14 [i_0] [i_1] [i_0] [i_5]) : (arr_11 [i_2] [i_2])))) ? (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5]) : (arr_0 [i_0])))) ? (((((arr_3 [i_1] [i_5]) + 9223372036854775807)) << (((arr_7 [i_0] [i_1] [14] [i_5]) - 16821062811614037096)))) : var_1));
                        var_27 = (min(var_27, (((((!(((var_12 ? (arr_3 [i_0] [i_0]) : (arr_14 [i_5] [i_5] [i_5] [8])))))) ? var_4 : (((arr_7 [i_0] [i_1] [12] [i_5]) - (arr_11 [3] [3]))))))));
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_28 -= (max((((arr_1 [i_2 + 1]) ^ 12746)), (((arr_1 [i_2 + 2]) ? var_0 : (arr_1 [i_2 - 1])))));
                        arr_21 [11] [11] [i_0] [i_6] = (arr_20 [i_0] [i_1] [i_0] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_29 = ((var_9 ? (arr_14 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_7]) : 1984));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] = ((!(arr_0 [i_8])));
                            arr_30 [i_0] [i_1] [i_2] [i_7] [i_0] = ((((((arr_4 [i_0] [i_8]) ? -1 : var_2))) ? 1 : (((var_12 && (arr_0 [i_8]))))));
                            var_30 = var_1;
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_31 -= (arr_31 [i_0] [i_0] [i_0] [i_7] [i_9 - 1]);
                            arr_34 [i_0] [i_7] [i_9 - 1] = (arr_12 [i_0] [i_0] [i_2] [i_7] [i_0]);
                        }
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            var_32 = var_10;
                            arr_38 [i_0] [16] [i_0] = 25464;
                            arr_39 [i_0] [i_1] [i_1] [i_7] [i_1] = (arr_14 [i_0] [i_1] [i_2] [i_7]);
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_33 = 511;
                            var_34 = ((~((((arr_42 [i_0] [i_1] [i_2 + 1] [i_0]) && var_9)))));
                            var_35 = ((19559 ? var_10 : (((15 > (arr_16 [i_0] [i_0] [i_7] [i_0]))))));
                            var_36 = (((((arr_6 [i_0]) - var_11)) + ((var_0 ? var_1 : 1))));
                            var_37 = (min(var_37, ((((~(arr_24 [i_2] [i_1] [i_0])))))));
                        }
                        var_38 = (arr_25 [i_0] [i_1] [i_2 + 1] [i_0]);
                    }
                }
            }
        }
    }
    var_39 = -1168;
    #pragma endscop
}
