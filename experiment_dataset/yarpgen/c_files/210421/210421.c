/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_1 ? var_11 : var_5))) ? var_6 : (((((var_4 ? var_5 : var_5))) ? ((576460752303423487 ? 9573946055144486453 : -1047265416)) : (((var_10 ? var_7 : var_4))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = var_2;
        arr_3 [i_0] = var_6;
        var_14 = var_9;
        var_15 = var_3;
    }

    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_8 [9] [i_1] = var_2;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = ((var_4 ? (((((var_3 ? var_0 : var_0))) ? var_9 : var_3)) : ((var_5 ? ((var_7 ? var_7 : var_2)) : ((var_4 ? var_4 : var_8))))));

                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        var_17 = var_10;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_4] [i_3] [i_5] = var_3;
                            var_18 = ((var_8 ? (((((var_11 ? var_4 : var_5))) ? ((var_3 ? var_9 : var_10)) : var_5)) : (((((var_5 ? var_9 : var_2))) ? var_11 : var_2))));
                            arr_19 [i_4] [8] = var_4;
                        }
                    }

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_19 = ((((27544 ? 27544 : ((var_3 ? var_10 : 12483215178179473930))))) ? ((var_1 ? var_11 : ((var_5 ? var_3 : var_10)))) : var_7);
                        arr_22 [i_6] [i_3] = ((((((((var_11 ? var_8 : var_9))) ? (((var_6 ? var_10 : var_10))) : ((var_1 ? var_6 : var_7))))) ? var_2 : var_11));
                        arr_23 [i_1] [i_6] [i_1] [i_6] = ((var_8 ? (((var_10 ? ((var_7 ? var_3 : var_2)) : var_8))) : var_6));
                        var_20 = var_9;
                        var_21 = var_4;
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_26 [i_3] [i_7] [i_3] [i_3] = ((var_1 ? var_6 : (((var_8 ? var_4 : var_11)))));
                        arr_27 [i_1 + 2] [0] [0] [i_1 + 2] [i_7] = var_8;
                        var_22 = ((var_6 ? ((var_8 ? var_10 : var_6)) : var_1));
                        var_23 = (((((var_11 ? var_11 : var_1))) ? var_7 : ((var_1 ? var_0 : var_9))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_24 = var_10;
                        var_25 = var_8;
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_26 = ((((((((var_7 ? var_10 : var_9))) ? var_11 : ((var_11 ? var_7 : var_1))))) ? var_10 : var_2));
                        arr_33 [i_1] [i_1] [6] [i_9] = var_0;
                        arr_34 [i_9] [11] [i_9] [2] = ((((((((var_1 ? var_8 : var_10))) ? ((var_2 ? var_0 : var_4)) : var_0))) ? var_7 : (((((var_8 ? var_10 : var_3))) ? var_10 : ((var_9 ? var_7 : var_8))))));
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_38 [i_1] [i_2 - 2] [i_2 - 2] [i_10] = var_6;
                        var_27 = var_11;
                        var_28 = var_11;
                    }
                }
            }
        }
        var_29 = var_1;
    }
    var_30 = (var_8 ? (((((var_10 ? var_1 : var_11))) ? var_11 : ((var_2 ? var_7 : var_10)))) : ((var_8 ? ((var_4 ? var_9 : var_9)) : ((var_4 ? var_4 : var_10)))));
    var_31 = ((var_4 ? var_7 : (((((var_0 ? var_9 : var_0))) ? var_5 : var_10))));
    #pragma endscop
}
