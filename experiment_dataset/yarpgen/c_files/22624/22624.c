/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!var_3) ? var_11 : ((-108 ? 872593555381761145 : var_1))))) || var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 *= ((-(((arr_3 [i_0] [i_0]) + var_5))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = (arr_7 [i_0] [i_4] [i_4]);
                            }
                        }
                    }
                }
                var_14 = -1057;
                var_15 = (arr_5 [i_1] [i_1] [i_0] [i_0]);
                arr_14 [i_0] &= (arr_8 [i_0]);
            }
        }
    }
    var_16 = (min(var_16, (((((12 ? 63 : 65520)) / 1422383940)))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_17 &= (max((arr_16 [i_6] [i_5 - 3]), (~4294967295)));

                for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                {
                    var_18 = ((((((arr_17 [3]) % (((var_2 ? var_3 : 143)))))) ? (((1 & var_8) | var_5)) : (((-(~var_10))))));
                    arr_21 [i_5] [i_5] [i_6] [19] = var_11;
                }
                for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_19 = (((((arr_26 [i_5 + 1] [i_6] [1] [i_6] [i_10 - 1] [i_8] [i_5]) * (arr_15 [i_5 + 1] [i_8 - 1]))) & ((((!(arr_15 [i_5 + 2] [i_8 + 1])))))));
                                var_20 = ((34 ? (var_3 - var_3) : (((~13177920705997516334) ? -18 : 167))));
                                arr_28 [i_6] [i_6] [i_6] [i_6] = ((!(arr_26 [i_8] [i_8 + 1] [i_8] [i_6] [i_8 - 1] [i_8] [i_8 - 1])));
                                var_21 = (min((((arr_26 [i_10 - 2] [i_9] [i_5 - 1] [i_6] [19] [i_5] [i_5 - 1]) ? (arr_26 [16] [i_6] [i_8] [i_6] [i_10 - 1] [i_8] [i_5]) : 255)), ((max(39900, 18201)))));
                                var_22 -= (((!(var_3 <= var_8))) ? (((((arr_27 [i_5] [i_5] [i_6] [i_8 - 1] [i_9] [i_10]) | var_6)))) : (((var_2 || (((34 ? 18184 : -1)))))));
                            }
                        }
                    }
                    var_23 -= (arr_22 [i_5 - 2] [i_6] [i_8] [i_8 - 1]);
                    var_24 = (arr_24 [i_5] [i_5 + 2] [i_6] [i_6] [i_8]);
                    var_25 = -var_1;
                    var_26 -= ((((arr_24 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) % (arr_24 [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8]))));
                }
                for (int i_11 = 1; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_27 = (((min((max(var_5, (arr_19 [i_5 - 3] [i_5 - 3] [1] [i_5 - 3]))), var_10)) << (((arr_24 [i_5] [i_6] [i_11] [i_11] [i_11]) - 195))));
                    var_28 = 21;
                    var_29 = (arr_18 [i_11 - 1] [i_6] [i_11 - 1]);
                    var_30 -= ((((!(((47360 ? 34 : 227))))) && -9220711263984763601));
                    var_31 = (min(var_31, ((((((((56827 ? var_7 : var_6)) % ((var_4 ? 71 : var_6))))) - (~var_5))))));
                }
                for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_32 = ((!((max((arr_33 [i_12 + 1] [9] [i_12 + 1]), (((!(arr_33 [i_5] [i_6] [i_12])))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                arr_39 [i_6] [i_13] [1] [i_6] [i_6] = ((1 <= (max(1614784246451195609, (arr_16 [i_6] [i_13])))));
                                var_33 *= (arr_37 [i_5] [i_6] [i_6] [i_6] [1] [i_13] [i_14]);
                                var_34 = -12;
                                var_35 = (max(var_35, (arr_22 [i_5 + 2] [i_5 - 1] [i_5] [i_12 + 1])));
                            }
                        }
                    }
                }
                var_36 = (min(((min((arr_18 [i_5 - 3] [i_6] [i_5 + 1]), (29 * 75)))), (min((arr_23 [12] [i_6] [5]), (max((arr_22 [10] [23] [i_5] [23]), 7223809174409534722))))));
            }
        }
    }
    #pragma endscop
}
