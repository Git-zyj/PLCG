/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = var_1;

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_16 = (((arr_5 [i_0] [1] [i_2] [i_2]) ? ((~(65535 & var_5))) : ((((arr_2 [1]) != var_8)))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = var_3;
                        var_18 = 10682707225097084985;
                        var_19 = (((arr_5 [i_0] [i_1] [i_2 - 2] [i_1]) || (arr_1 [i_1] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = (max(var_20, (((-((min(65535, 99))))))));
                        var_21 += (((((arr_2 [i_2 + 1]) == (arr_2 [i_2 - 2])))) != 32767);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_22 = -1073741823;
                                var_23 = 3636430987111770235;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_24 = ((-((min((arr_7 [i_7 + 1] [i_7 + 3] [i_2] [i_7 - 2]), (arr_7 [i_7 + 3] [i_7 + 2] [i_2] [i_7 + 2]))))));
                                var_25 = (((arr_7 [i_0] [i_0] [i_2] [11]) + (arr_7 [i_0] [i_2] [i_2] [11])));
                                var_26 = (2147483633 | (~2011950913));
                                var_27 -= var_10;
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_28 = (((((arr_21 [0]) >= var_9)) ? (arr_7 [i_0] [14] [0] [i_0]) : (max((arr_15 [19]), var_0))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_29 = (max(-2147483633, -2147483633));
                                var_30 *= var_2;
                            }
                        }
                    }
                    var_31 = 1073741823;
                    var_32 = (((arr_1 [2] [i_1]) || (((16641 ? 65533 : 30)))));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                {
                    var_33 = -16635;

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_34 = (arr_18 [i_0] [i_1]);
                        var_35 = (arr_21 [i_13]);
                        var_36 = ((!(arr_8 [i_0] [8] [i_12] [10] [i_12] [i_13])));
                        var_37 &= var_7;
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            var_38 = (!-var_12);
                            var_39 = (arr_31 [i_0] [i_0] [i_0] [2]);
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                        {
                            var_40 = arr_17 [i_0] [i_1] [i_1] [i_12] [7] [8];
                            var_41 |= var_1;
                            var_42 = (((((arr_41 [19] [i_12] [i_14] [i_16]) ? (arr_16 [i_0] [i_1] [i_12] [4] [0] [i_16]) : 1)) > (((arr_24 [i_0] [i_0] [i_14]) - var_12))));
                            var_43 = ((-(arr_25 [i_0] [i_1] [i_12] [i_14] [i_16])));
                        }
                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            var_44 = (arr_17 [i_0] [i_0] [i_0] [i_14] [12] [i_17]);
                            var_45 -= (((arr_20 [1] [5] [14] [1] [i_17] [i_17]) / (arr_46 [19] [7] [i_12] [1] [i_14] [i_17])));
                        }
                        var_46 = (arr_34 [4] [1] [i_1] [1] [i_12] [i_14]);
                        var_47 = (!0);
                    }
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                {
                    var_48 = (3 <= 32767);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 23;i_20 += 1)
                        {
                            {
                                var_49 = (min(var_49, ((max(((((((arr_6 [19]) * (arr_23 [i_0] [i_0] [i_18] [i_0])))) ? var_5 : (arr_32 [i_0] [i_0]))), (~-1073741814))))));
                                var_50 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_51 = ((var_13 ? (min(var_7, 16685963654363161901)) : var_0));
    var_52 = var_2;
    #pragma endscop
}
