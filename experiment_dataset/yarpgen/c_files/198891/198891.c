/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((253 / 2205050318) ? (var_4 * var_3) : (var_4 / var_5)));
                var_10 = ((((var_0 ^ ((var_6 ? var_6 : var_8)))) | (((~var_2) ^ (var_9 ^ var_6)))));
                arr_6 [i_0] [i_0 + 1] [i_0] = (2205050318 && 2205050318);
            }
        }
    }
    var_11 = (!((((!var_5) * (!60)))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = ((!(((0 ? 983040 : 2089916978)))));
        arr_10 [i_2] = var_7;
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_12 = ((!(!var_6)));
            arr_16 [i_3] [i_4] = (((var_3 <= -5971982998750416269) ? -16030 : (((((var_6 ? var_4 : var_7))) & (28272 | var_5)))));
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            arr_19 [i_3] = var_9;
            var_13 = var_0;
        }
        var_14 = ((!var_1) ? var_2 : ((var_9 ? var_0 : var_2)));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1)
    {
        var_15 = var_0;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_16 = ((((((144 ? 1081268551 : 16029))) ? (3057898178 & 63) : (!var_2))) | (var_2 < var_7));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_17 &= var_6;
                                var_18 &= var_2;
                                var_19 = var_1;
                                var_20 = (min(var_20, (((1237069117 ? -30474 : 1)))));
                            }
                        }
                    }
                    var_21 = (((!-5664549776217891510) ? (var_7 || var_6) : ((-1153916478883130344 ? var_2 : var_3))));
                }
            }
        }
        var_22 -= var_7;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 17;i_12 += 1)
            {
                {
                    arr_37 [i_6] = ((((var_9 ^ ((var_9 ? var_8 : var_6)))) >= 274877906943));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                arr_44 [i_14] [i_6] [i_6 - 1] [i_6] [i_6 + 1] &= var_0;
                                var_23 = (((!187) & (!var_7)));
                                arr_45 [i_6] [i_6] = 1;
                                var_24 = ((var_0 ? (!var_5) : (28 || var_8)));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_25 = (max(63764, -753572046175246253));
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 8;i_18 += 1)
                {
                    {
                        arr_57 [i_15] [3] [i_16] [i_16] [i_18] [i_18] = (!-807);
                        arr_58 [i_16] [i_16 + 1] [i_16] [i_16 - 2] [i_16] = (((var_6 + var_1) >= var_5));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 1; i_20 < 19;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 20;i_22 += 1)
                {
                    {

                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            arr_70 [i_21] [i_20] [i_20] [i_20] [i_20 - 1] = (((!var_9) & ((var_6 ? var_5 : var_4))));
                            arr_71 [i_22] [i_21] [i_21] = var_4;
                            var_26 = (min(var_26, ((((18446744073709551613 + var_1) ? 222 : (var_1 + var_0))))));
                            arr_72 [i_21] [i_20] = ((!((var_8 <= (var_1 || var_9)))));
                        }
                        for (int i_24 = 1; i_24 < 19;i_24 += 1)
                        {
                            var_27 *= (((!var_9) ? (var_7 != var_4) : (!var_5)));
                            var_28 -= var_9;
                        }
                        arr_75 [i_19] |= (((!var_3) ? (!34) : ((var_1 ? var_8 : var_2))));
                        arr_76 [i_21] [i_20] [i_21] [i_21] [i_19] [i_22] = ((65535 * ((((min(var_2, var_3))) ? var_8 : (~225)))));
                        arr_77 [i_19] [i_21] = var_4;
                        var_29 = ((var_6 >> (var_2 == var_6)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_25 = 1; i_25 < 1;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 16;i_26 += 1)
                {
                    {

                        for (int i_27 = 2; i_27 < 18;i_27 += 1)
                        {
                            var_30 *= (1 / 7586);
                            var_31 -= (!var_3);
                        }
                        var_32 = (((!224) ? (((((-5061699469517753674 ? 134 : 1)) * var_8))) : ((var_6 ? var_5 : var_6))));
                    }
                }
            }
            var_33 = (((((var_4 ? var_6 : var_4))) ? (((!(var_6 >= var_5)))) : (var_0 <= var_9)));
        }
        var_34 = ((!(((var_3 ? (var_0 & var_6) : (~-274877906942))))));
        arr_84 [i_19] [i_19] = var_5;
        arr_85 [i_19] = ((!(((4294967277 ? 145 : -5971982998750416274)))));
        var_35 = (!(!var_7));
    }
    for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
    {
        arr_88 [i_28] = ((!(~var_0)));
        var_36 = ((((((!(-9223372036854775807 - 1))) ? (var_0 | var_6) : (((var_3 ? var_4 : var_2))))) & ((min(var_5, (((106 ? var_3 : 1))))))));
    }
    for (int i_29 = 0; i_29 < 19;i_29 += 1)
    {
        arr_93 [i_29] = var_9;
        arr_94 [i_29] = ((var_0 ? ((((!1) >= (!var_7)))) : ((((((65521 ? var_9 : -1715366478149162150))) || (((-20525 ? 249 : var_1))))))));
        var_37 = (((((var_4 ? var_0 : var_4))) ? -var_4 : var_7));
    }
    #pragma endscop
}
