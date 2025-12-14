/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(-1, 4294967284)))));
    var_19 = (min(var_19, var_17));
    var_20 = (max(var_20, (((var_12 ? var_1 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 *= (max(((-(arr_3 [i_1] [i_0] [i_0]))), (arr_1 [10])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_22 |= (!var_13);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_23 = var_8;
                            arr_17 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0] = ((arr_8 [i_0]) ? var_1 : var_3);
                            var_24 = (arr_12 [i_0] [i_0] [i_2] [i_3]);
                            var_25 = ((-((-(arr_9 [i_0] [i_1] [i_2] [i_0])))));
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_26 = (arr_10 [i_0] [i_1] [i_2] [i_3]);
                            var_27 = (max(var_27, (((!(arr_18 [i_5] [i_5 - 1] [i_5 + 2] [i_5 + 3] [i_5] [i_5 - 1]))))));
                            var_28 = (min(var_28, ((((arr_1 [i_2]) != (arr_13 [i_2] [i_3] [i_5 + 2] [i_5 + 3] [i_5] [i_5] [i_3]))))));
                            var_29 *= ((var_6 || (((~(arr_9 [i_2] [4] [i_2] [i_0]))))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_1] [i_6] [i_0] = (arr_15 [i_0] [i_1] [i_2] [i_1] [i_6]);
                            arr_24 [i_0] [i_1] [14] [9] [i_6] = var_17;
                            var_30 = ((4294967274 ? 2147483638 : -91));
                            var_31 = (((arr_6 [i_0] [i_1] [i_6] [8]) >= var_17));
                        }
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_3] = var_0;
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, (((((((arr_11 [7] [i_7] [17] [i_1] [i_1] [15]) / (((235 ? 189 : 32764)))))) ? (min((max(var_4, var_8)), ((max((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2]), var_0))))) : ((max((arr_15 [i_7] [1] [i_1] [i_1] [i_0]), var_15))))))));
                        var_33 = (max(var_33, (((((max(437754857, 0))) || ((!(arr_12 [i_7] [i_2] [i_1] [i_0]))))))));
                        var_34 = var_11;
                    }
                    var_35 = (min(var_35, ((((max((~var_13), var_2)) < (max((min(var_16, var_7)), var_15)))))));
                    var_36 = var_6;
                    var_37 = ((!((max(1790081003, -1)))));
                }
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    var_38 -= ((!(((1572648344 ? 1572648344 : -9223372036854775792)))));
                    var_39 *= (arr_21 [i_8] [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]);

                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        var_40 |= (arr_6 [i_0] [i_0] [i_8] [i_8]);
                        arr_35 [i_9 + 2] [i_1] = (max((arr_34 [i_8 - 2] [i_8 + 1] [i_9 + 1] [i_9 + 2]), (((arr_7 [i_1] [i_1]) ? (((arr_28 [i_9] [i_8 + 1] [i_1] [i_0]) ? (arr_19 [i_0] [16] [i_1] [i_8] [i_8 - 2] [i_0] [i_9 + 1]) : (arr_6 [i_0] [13] [13] [13]))) : (max(2749256134, 1015811093))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_39 [i_1] [i_1] [8] [8] = (((((var_16 ? var_11 : var_3))) ? (arr_2 [i_10] [i_8 + 1] [i_1]) : ((var_11 ? var_12 : var_3))));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            arr_42 [i_10] [i_10 - 2] [i_10] [i_10 + 1] [i_10 - 2] = var_14;
                            var_41 = (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_42 = (max(var_42, (((!(arr_28 [i_0] [i_1] [i_8 + 1] [i_10 + 2]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_43 = var_15;
                        var_44 = -185;
                        var_45 = var_15;
                    }
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_46 = (max(-9, 15));
                    var_47 = ((min((((arr_48 [1] [i_13]) ? var_6 : var_11)), var_12)));
                    arr_49 [i_0] [i_1] [i_13] = ((!((!(arr_33 [i_0] [i_1] [i_13] [16])))));
                    var_48 = (min(var_48, ((((~(arr_18 [i_13] [12] [i_0] [i_0] [i_0] [i_0])))))));
                    var_49 = (max(var_49, ((((((~((~(arr_5 [i_0] [i_1] [i_13])))))) ? (arr_30 [i_0] [i_13]) : (arr_32 [i_13] [i_0] [i_0] [i_0]))))));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_50 *= (((((((((arr_2 [i_1] [i_0] [i_14]) ? var_17 : var_10))) ? ((max(30495, 21))) : var_12))) ? (~var_9) : var_8));
                            var_51 = (min(var_51, ((((arr_13 [i_14] [i_15 - 1] [i_14] [i_1] [i_0] [i_0] [i_0]) ? ((((arr_13 [i_0] [i_0] [i_0] [i_15] [1] [i_0] [i_14]) & (arr_13 [i_0] [i_0] [0] [i_1] [i_14] [i_14] [i_15])))) : (max(var_4, (arr_13 [i_15 - 1] [i_15] [i_14] [i_14] [i_1] [i_1] [i_0]))))))));
                            arr_55 [i_0] [i_1] [i_14] [i_15 - 1] = (arr_12 [i_0] [i_14] [i_1] [i_0]);

                            for (int i_16 = 0; i_16 < 19;i_16 += 1)
                            {
                                var_52 = ((!(((((arr_41 [i_14] [i_16]) ? (arr_20 [i_16] [i_15 - 1] [i_14]) : (arr_6 [i_15 + 2] [i_14] [i_1] [i_0])))))));
                                var_53 *= (arr_36 [i_0] [i_0] [8] [8]);
                                arr_59 [9] [9] [i_14] [i_15 + 2] [i_16] = (((((+((var_14 ? (arr_10 [i_1] [i_14] [4] [17]) : (arr_54 [1] [1] [1])))))) ? ((((!((max(3771281961, 10))))))) : var_10));
                                var_54 = (min(var_54, var_14));
                            }
                            var_55 = (min(var_55, (arr_52 [6])));
                        }
                    }
                }
                var_56 = (max(var_56, (((!((max((~var_2), var_9))))))));
                var_57 -= (max(((max((max(var_15, (arr_33 [i_0] [i_0] [i_0] [i_0]))), (arr_9 [i_0] [i_1] [i_0] [i_1])))), var_10));
            }
        }
    }
    #pragma endscop
}
