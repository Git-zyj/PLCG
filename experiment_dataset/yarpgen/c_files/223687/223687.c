/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((var_1 ? ((((!(arr_2 [i_0] [i_0]))))) : var_6))) ? (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : ((1097213380 ? 3758096384 : 3810231405)))) : ((min((!-91), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        var_10 = var_8;
                        var_11 = ((var_2 % (min(var_8, (arr_9 [i_3 - 4] [i_3] [i_3] [i_2])))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            arr_12 [i_2] [i_1] [i_1] [i_3] [i_1] = ((!(((var_7 ? 4294705152 : var_6)))));
                            arr_13 [i_2] = ((!(((var_4 ? var_3 : var_0)))));
                            arr_14 [i_0] [i_2] = (((arr_6 [i_4 + 2]) ? 55 : 2146959360));
                            var_12 = var_6;
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_0] [i_4 - 1] = (((arr_8 [i_3] [i_3] [i_3] [i_3] [i_3 - 3]) ? var_3 : (arr_8 [i_3] [i_3] [i_3] [9] [i_3 - 3])));
                        }
                        var_13 = var_6;

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_18 [i_0] [i_2] [i_2] [i_3 + 1] [i_5] = ((arr_16 [i_5] [i_3 - 3] [i_3] [i_2] [i_1] [i_0] [i_0]) >> ((((-(arr_8 [i_1] [i_1] [20] [i_3] [i_3]))) - 3064198015)));
                            var_14 = (((-56 ? -298902224 : 536870912)));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_15 = (arr_20 [i_0] [i_0] [i_2]);
                            arr_23 [i_0] [i_2] = 0;
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_16 = (arr_1 [i_0]);
                        arr_27 [i_2] = 1;
                        var_17 = ((((((arr_9 [i_0] [i_2] [5] [i_2]) & 787527437))) ? var_3 : (arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_2] [i_2] [i_9] [i_9] = (arr_7 [i_0] [i_2] [i_0]);
                            var_18 = ((((var_4 ? (arr_24 [i_0] [i_1] [i_8] [i_8]) : ((-8 ? var_0 : 3507439858))))) ? (arr_7 [i_9] [i_2] [i_9]) : (arr_24 [i_1] [i_1] [i_1] [i_1]));
                            var_19 = 0;
                        }
                        for (int i_10 = 4; i_10 < 24;i_10 += 1)
                        {
                            var_20 = ((arr_32 [8] [i_1] [i_1] [i_1] [i_1]) ? ((~((var_1 ? (arr_34 [i_10 - 1] [i_1] [i_0] [i_2] [i_10 - 4] [i_8] [i_2]) : var_3)))) : (((~(arr_10 [i_0] [i_0] [i_2] [i_10 - 2] [i_10])))));
                            var_21 = ((var_4 << (787527437 - 787527437)));
                            var_22 = ((((var_6 ? 1 : (arr_1 [i_10 + 1])))) ? ((~(arr_25 [i_10 - 2] [i_2] [i_2] [i_10 - 3]))) : (min((arr_25 [i_10 - 3] [i_2] [i_2] [i_10 - 1]), var_9)));
                        }
                        var_23 = (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_36 [i_0] [i_0] [i_1] [i_2] = var_5;
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_42 [i_0] [i_11] [i_2] [i_1] [i_0] = ((!((((arr_40 [i_11] [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 2] [i_11]) >> (var_9 - 1747084707))))));
                                arr_43 [i_2] [i_12] = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 24;i_14 += 1)
                        {
                            {
                                var_24 = ((((((min(var_0, (arr_40 [i_14] [i_0] [i_2] [i_2] [i_1] [i_0])))) ? (min(var_6, (arr_26 [i_2] [i_2]))) : var_7)) & var_6));
                                var_25 = ((4294967295 >= (max((~133955584), -112))));
                            }
                        }
                    }
                }
            }
        }
        arr_49 [i_0] = (((((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_29 [i_0]) : var_4)) > (((arr_29 [i_0]) ? 4294967289 : (arr_29 [i_0])))));
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
    {
        var_26 = 298902224;
        var_27 = ((-3 ? 29 : ((819539159 ? (arr_7 [2] [i_15] [i_15]) : 4294967295))));
        var_28 = max((arr_21 [i_15] [i_15] [i_15]), -74);
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        var_29 = (+(max((arr_21 [i_16] [i_16] [i_16]), (arr_21 [i_16] [i_16] [i_16]))));
        arr_55 [i_16] [i_16] = (arr_1 [i_16]);
        arr_56 [i_16] = var_9;
        arr_57 [i_16] = arr_11 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16];
    }
    var_30 = ((~3758096384) ? 2485202693 : var_1);
    var_31 = ((1120192022 >> (((~-108) - 98))));
    var_32 = (min(4294967295, 4294967295));
    #pragma endscop
}
