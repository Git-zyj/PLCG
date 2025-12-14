/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_19 ^ var_6), (((~var_11) ? (var_5 * var_16) : (1 == 1)))));
    var_21 = (((((var_1 ? (var_1 | 1) : var_10))) ? (!1) : (((((var_16 ? var_5 : var_3))) ? (11227493245100044728 >= 1) : ((var_4 ? 0 : var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(var_2 != var_19)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_1 [i_0]) ^ (arr_1 [i_0])));
            arr_6 [i_0] = var_9;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_3] [6] = (arr_12 [i_0] [i_0] [i_2] [i_3]);
                        arr_15 [18] [i_1] [i_1] [i_3] = var_0;
                        arr_16 [i_1] [i_1] [i_1] [i_1] [1] = (((((17914347279797255736 ? 10078799774322927563 : 143))) ? (1 || 1) : (((arr_9 [i_0] [i_3]) / 1))));
                        arr_17 [i_0] [i_1] [16] [i_1] = ((!(arr_13 [i_1] [i_1] [i_2] [i_3] [i_1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_4] = (((arr_19 [i_0] [i_4] [i_6]) * (!-8403788066430722765)));
                            arr_25 [i_0] [i_0] [i_4] [i_4] [i_6] [i_6] = (var_16 / 3962865470441529435);
                        }
                    }
                }
            }
        }
        arr_26 [i_0] = (~var_4);
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] = (((((((((arr_28 [i_7]) ? var_8 : var_4))) ? ((var_19 ? (arr_28 [i_7]) : (arr_27 [i_7] [i_7]))) : (var_2 == var_6)))) ? -var_13 : (((-11497 | var_7) * var_15))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    arr_37 [i_7] [i_7] [i_9] [i_9] = ((((min((arr_35 [i_7]), var_6))) != (((((min(73, 240)))) & var_16))));
                    arr_38 [i_7] [i_9] [i_7] = (((((!(arr_27 [i_9] [i_8])))) << ((((arr_31 [i_7] [i_8]) > (arr_34 [i_7] [i_9] [i_9]))))));
                }
            }
        }
        arr_39 [13] [13] = (((((min(1, var_0)) & (-2954238505469895284 & 255))) * (916715936 == var_17)));
        arr_40 [i_7] [i_7] = var_4;
        arr_41 [i_7] = (((((((((var_15 >> (var_19 - 2356735007585254131)))) || ((((arr_27 [i_7] [i_7]) ? 1 : (arr_36 [i_7] [10] [i_7])))))))) >= (max(var_0, 11002563590514496793))));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
    {
        arr_44 [i_10] = (!15);
        arr_45 [i_10] = ((((var_0 ? -25024 : -2954238505469895296))) ? var_13 : ((min((arr_43 [i_10]), (arr_28 [i_10])))));
        arr_46 [i_10] = ((((arr_43 [i_10]) ? (arr_43 [i_10]) : (arr_43 [i_10]))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_51 [i_11] [i_11] = ((((((min(var_9, var_3)) & ((min(32751, 3962865470441529435)))))) ? (arr_33 [i_11]) : (((!(var_9 ^ var_2))))));
        arr_52 [i_11] = (arr_49 [i_11]);
    }
    #pragma endscop
}
