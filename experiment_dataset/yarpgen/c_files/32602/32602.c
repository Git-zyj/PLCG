/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((((((min(var_10, var_3))) ? (((arr_1 [i_0] [11]) ? var_10 : (arr_2 [i_0]))) : var_3))) ? (min(var_12, var_12)) : -10));

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_14 = (arr_3 [i_0] [i_1 + 4] [i_2 - 2]);
                    var_15 = -var_7;
                    var_16 = (max(20, 3042389561));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = ((+((((arr_5 [16] [i_2 - 1] [i_1 + 4]) < var_7)))));
                                var_18 = (max(var_18, (((29 ? 31 : 7)))));
                                var_19 = (max((min((min(var_2, (arr_0 [i_0]))), var_7)), (min((arr_2 [i_4]), (max(2800057329, var_9))))));
                            }
                        }
                    }
                }

                for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, var_0));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_21 = ((((((min(var_8, var_10)) - var_2))) ? (((-8 ? ((var_12 ? var_1 : var_7)) : var_3))) : (min((min(var_11, var_11)), var_6))));

                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_22 = max((~var_3), var_1);
                            var_23 = (min(var_23, (((+((var_11 ? (arr_13 [i_1 + 4]) : var_5)))))));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_24 = (i_5 % 2 == zero) ? (((var_8 >> (((arr_17 [i_1] [i_1] [i_1] [i_5] [i_1]) - 776792338))))) : (((var_8 >> (((((arr_17 [i_1] [i_1] [i_1] [i_5] [i_1]) - 776792338)) - 2593292391)))));
                            var_25 = (max(var_25, (((!(arr_2 [i_0]))))));
                            var_26 &= var_0;
                        }
                        var_27 = (((max(var_9, var_7)) > ((((!(~var_1)))))));
                        var_28 = (max(var_28, (((min(var_3, var_9))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_29 = (~var_7);
                        var_30 &= (arr_15 [i_5 - 1] [i_0] [i_1 + 1]);
                    }
                    var_31 = (max((((((var_1 && (arr_2 [i_0])))))), ((~(var_10 - var_1)))));
                }
                for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
                {
                    var_32 = ((!((min(((var_9 ? (arr_16 [1] [i_1 + 4] [i_0] [i_0] [i_0] [9]) : (arr_2 [i_0]))), ((((arr_6 [i_0] [i_0] [i_0] [i_1]) || var_12))))))));

                    for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_33 = ((((-((((arr_10 [i_0] [12] [i_10] [8] [12] [i_10]) < var_11)))))) ? (((-(arr_14 [i_10] [i_1 - 1] [i_10 - 1])))) : (((((var_3 ? 65535 : var_3))) ? var_8 : (arr_16 [i_0] [i_0] [i_1] [i_10] [10] [i_10]))));
                        var_34 = ((~(max((~var_5), (max(var_5, (arr_21 [i_10])))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                    {
                        var_35 = var_6;
                        var_36 = arr_9 [3];
                        var_37 = 1;
                        var_38 = ((var_12 != ((~(arr_15 [i_12 + 1] [i_10] [i_0])))));
                    }
                    var_39 = (max((max(var_8, (!var_1))), var_1));
                }
            }
        }
    }

    for (int i_13 = 4; i_13 < 23;i_13 += 1)
    {
        var_40 = var_2;
        var_41 &= var_1;
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_42 = var_6;
        var_43 = (min(var_43, (((~((+((var_12 ? (arr_37 [i_14]) : var_4)))))))));
        var_44 = 65530;
    }
    #pragma endscop
}
