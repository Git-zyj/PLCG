/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (arr_0 [i_0]);
                                var_13 = var_7;
                                var_14 = var_8;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = (min(var_15, (arr_9 [i_0])));
                        var_16 = ((((~var_10) * (arr_10 [i_1] [6] [i_1]))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_17 = ((arr_20 [i_1] [i_2] [i_1]) & (((((var_7 ? 1 : (arr_11 [i_6] [i_1] [i_1] [i_1] [i_0])))) ? (max((arr_11 [13] [i_1] [i_1] [i_1] [i_0]), var_5)) : var_2)));
                        var_18 = (max((arr_7 [i_0] [i_1]), (min(var_3, var_9))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            var_19 = (min(var_19, ((max((min((1 ^ -901249856), 6975582026188708722)), (min((~-6975582026188708722), (-32767 - 1))))))));
                            var_20 = (((arr_11 [i_7] [i_7] [i_2] [i_1] [i_2]) ? (max(1, -1)) : (arr_12 [i_0] [i_1] [i_1] [i_1] [14] [i_8 - 1] [i_0])));
                        }
                        var_21 = (min(var_10, (max((!109), (((arr_16 [i_0] [3]) / (arr_23 [4] [i_2] [i_1] [i_0] [i_0])))))));

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_22 = (((arr_18 [i_9]) ? (var_9 & var_7) : (((6975582026188708695 << (1 - 1))))));
                            var_23 = (max(var_23, (((((((!(arr_21 [i_0] [i_0]))))) > (((arr_21 [i_7] [i_1]) ? (arr_21 [i_9] [i_0]) : (arr_21 [i_1] [i_0]))))))));
                        }
                    }
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        var_24 *= (((min((arr_3 [i_10] [0] [0]), var_7)) >= (((min((arr_28 [i_0] [i_1] [18] [i_10 - 1]), (arr_28 [i_1] [i_1] [i_2] [i_10 - 1])))))));

                        for (int i_11 = 1; i_11 < 20;i_11 += 1)
                        {
                            var_25 = (min((arr_21 [i_10] [i_10 - 1]), (((-(arr_22 [i_11] [i_10] [18] [i_0] [i_0] [i_0]))))));
                            var_26 = (min(var_26, ((max(((((arr_2 [i_10 + 1]) & (arr_10 [i_0] [i_1] [i_0])))), (arr_23 [i_10 + 1] [i_1] [i_2] [i_11 - 1] [i_1]))))));
                            var_27 = ((-(((arr_10 [i_1] [i_11 + 1] [i_1]) ? (arr_10 [i_1] [i_11 + 1] [i_1]) : (arr_10 [i_1] [i_11 + 1] [i_1])))));
                            var_28 = (arr_30 [i_1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_0] [i_1]);
                            var_29 = (arr_18 [i_2]);
                        }
                        var_30 += var_5;
                        var_31 = (max(24, ((var_5 ? (((!(arr_20 [i_10] [i_1] [i_1])))) : (arr_11 [i_1] [i_1] [i_1] [i_1] [i_0])))));
                    }
                    var_32 = (+-15006);
                    var_33 = (arr_20 [i_1] [i_1] [i_1]);
                    var_34 = (arr_22 [5] [i_1] [i_2] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_35 = ((((!(arr_26 [i_12] [i_13] [i_13] [i_12] [1]))) ? ((((arr_33 [i_12] [i_13] [i_12] [i_12] [i_12] [i_12] [i_13]) ? (0 - -14442) : -0))) : ((~(var_6 - var_10)))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_36 = (min((arr_29 [i_12]), 0));

                            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                            {
                                var_37 = 29;
                                var_38 = (arr_28 [i_12] [i_13] [i_12] [i_15]);
                                var_39 += -1064452728;
                            }
                            for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                            {
                                var_40 = (arr_34 [i_17] [13] [i_12] [i_13] [i_12]);
                                var_41 = (max(var_41, ((((((~(min(4294967295, 23))))) | (min((arr_2 [i_15 + 1]), -6975582026188708722)))))));
                            }
                            var_42 = (min(1, 16));
                        }
                    }
                }
                var_43 = arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12];
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            {
                                var_44 = (min(1, 1064452720));
                                var_45 = (max(var_45, (((~((~(1 - var_6))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
