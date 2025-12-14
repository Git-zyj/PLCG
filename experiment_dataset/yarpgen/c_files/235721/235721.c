/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (max(var_15, (((var_13 <= (max(-19925, var_1)))))));
        arr_4 [i_0] = var_13;
        var_16 = (max(((min((max((arr_1 [i_0]), 19446)), var_2))), ((((min(var_9, 19446))) & (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (arr_6 [i_1]);
        var_18 = ((-((~(((arr_6 [i_1]) ? 2218560409 : (arr_7 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] = (((~(arr_10 [i_2]))));

        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_16 [i_2] = (min(((max(var_12, 27268))), ((((max(var_9, var_7))) ? var_10 : (arr_6 [i_2])))));
            var_19 = ((!((max((arr_9 [i_2] [i_3 - 1]), (arr_9 [i_2] [i_2]))))));
            var_20 = (max(var_20, var_2));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_20 [i_2] [i_3] [i_3] |= var_4;
                var_21 = 505368306;
                var_22 = var_8;
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                var_23 = 43;

                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_24 -= ((!(arr_22 [4] [i_5 + 2] [i_5])));
                    var_25 = (var_0 ? var_4 : (arr_25 [i_6] [i_3 - 2] [i_5 + 3] [i_6 + 1]));
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_26 = (~var_10);
                        var_27 = (max((((!var_9) ? (((arr_18 [i_2] [4] [3] [i_8]) | 2622318384)) : 46090)), var_12));
                        var_28 -= var_6;
                        arr_32 [13] [i_3] [i_5 - 1] [i_2] [i_8] [i_2] = (max((arr_19 [i_7 + 2] [i_3] [i_7 - 1] [i_3]), var_1));
                    }
                    arr_33 [i_2] [i_3] [i_5 - 1] [i_7] [i_2] = (((((19446 ? ((var_10 ? (arr_30 [i_2] [i_3] [i_5 + 4] [i_2]) : (arr_29 [i_2] [i_3] [i_5] [i_2] [i_7]))) : -53))) ? (((arr_25 [i_2] [i_2] [i_2] [i_2]) ^ (((arr_22 [i_2] [i_3] [i_3]) ? var_0 : 2277)))) : var_4));
                    var_29 = 18408205866509947163;
                    var_30 = (arr_28 [13] [13] [i_2] [i_3] [i_5 + 2] [i_7]);
                    arr_34 [i_7 + 1] [i_2] [i_2] [i_2] [i_2] [i_2] = var_9;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_38 [i_2] [i_2] [i_5] [i_2] = (arr_36 [i_2] [i_3 - 1] [i_5 + 2] [i_9] [i_2]);
                    var_31 = (arr_21 [i_2] [i_3] [i_5 + 1] [i_5 + 1]);
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_32 = (arr_22 [i_2] [i_3] [i_2]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_33 = var_5;
                            arr_47 [i_2] [i_3 - 2] [i_2] [i_10] [i_11] [i_12] = (max(var_6, (((var_3 ? -35 : (arr_15 [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                            var_34 = ((((var_12 ? (arr_43 [i_2]) : (arr_43 [i_2]))) % ((((max(var_14, (arr_26 [i_2] [i_2] [i_2]))) - (((((arr_37 [i_2] [i_2] [i_2] [i_2] [i_2]) != var_5)))))))));
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                var_35 |= (~247142298);
                var_36 = var_9;
                arr_50 [i_2] [i_2] = (!4434100010726152213);
            }
            var_37 |= (max(var_9, (max((arr_25 [i_3 - 2] [i_3 - 2] [i_3] [i_3]), (arr_42 [i_3 - 2] [i_3 + 1] [i_2] [i_3])))));
        }
        for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
        {
            arr_53 [i_2] = 8363358779217073368;
            var_38 = ((max(-var_14, var_2)));
        }
    }
    var_39 = ((-2066300671 ? var_9 : (min(((var_0 ? var_8 : -1)), (2076406878 & var_1)))));
    var_40 = var_11;
    #pragma endscop
}
