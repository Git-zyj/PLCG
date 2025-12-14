/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(((var_2 ? var_9 : 185)), var_11)));
    var_15 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_16 = 2057465161;
                    var_17 = 188;
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_18 ^= ((((((536870908 ? var_9 : 2016))) | (max(var_7, var_10)))));
                    var_19 = (max((var_3 / var_7), -20044));
                    var_20 = (max(var_20, ((min((((!(!var_9)))), -3976841710286504519)))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_0] [i_1] [14] = (arr_9 [1] [i_1 - 1] [i_4]);
                    arr_15 [i_0] [i_1] = ((-5894 ? ((~(min(var_13, (arr_9 [i_0] [i_1 + 1] [i_1 + 1]))))) : (max(((var_13 ? var_3 : 16128)), var_4))));
                    var_21 = (min(var_21, 57));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = ((((((arr_10 [i_1 - 1] [i_1 - 2] [i_6 + 1]) ? 2612111841841309388 : 130))) ? (((max((arr_12 [1]), 770721282)) + (min(var_7, var_5)))) : ((((var_13 ? var_0 : 176))))));
                                arr_21 [i_1] [i_4] [i_5] [i_5] = var_4;
                                var_23 += (max(var_5, ((min(150, 4)))));
                                arr_22 [i_5] = ((min((arr_16 [i_5]), var_7)));
                                var_24 ^= ((((max(var_9, ((max(34198, var_4)))))) ? ((((!(~var_7))))) : (((arr_9 [i_0] [i_0] [i_4]) ? var_3 : var_6))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_30 [i_0] = (~var_9);

                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_7 - 2] [i_7 - 2] [i_7 - 2] [9] [i_9] = var_4;
                            var_25 = var_12;
                        }
                        arr_35 [i_0] [i_1] [i_0] [i_8] = 1894399861;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_26 *= (((arr_12 [i_0]) ? 1 : var_10));
                                var_27 = ((1 ? (arr_25 [i_0] [1] [i_7 - 1]) : var_6));
                                var_28 = -31134;
                            }
                        }
                    }
                }
                arr_42 [i_0] [i_0] [i_1] = (arr_27 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [i_1 - 1]);
            }
        }
    }

    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        arr_45 [i_12] = (min(((min(-1546727260, var_4))), ((var_4 ? 41421 : (max(var_1, var_12))))));
        arr_46 [i_12] [i_12] = (~1737208250);
    }
    var_29 = (((var_6 / ((min(var_11, 16))))));
    #pragma endscop
}
