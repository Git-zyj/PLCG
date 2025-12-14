/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_17 = (max((~140737454800896), (((!(arr_6 [i_0] [i_1] [i_0] [i_2]))))));
                    var_18 = var_11;
                    var_19 = var_12;

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 = (min(var_20, var_8));
                        var_21 = (((((-(min((arr_5 [0] [i_1] [i_2] [i_3]), (arr_0 [7])))))) ? ((var_10 ? (((-1310703853 ? 0 : 152))) : ((var_1 ? var_12 : var_6)))) : ((var_7 ? 4217384634 : var_15))));
                        var_22 = ((((((max(var_6, 100))) ? (var_5 * var_15) : ((var_6 ? 250 : var_14)))) / 20));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_23 = (min((var_14 / var_5), 250));
                    var_24 = ((((!(arr_7 [i_0] [1] [i_1] [i_4]))) ? (min(var_16, 255)) : (-16 & 0)));

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_25 = (((-((152 ? 77582661 : var_10)))));
                        var_26 = (((((~(var_6 ^ 1)))) ? (((6 ? 234 : 255))) : (var_4 * 0)));

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_27 ^= (((((77582675 ? 107 : (arr_14 [i_4] [i_1] [6] [1] [i_1])))) ? ((min(var_5, var_8))) : var_10));
                            var_28 = ((236 ? ((-(arr_15 [3] [i_1] [3] [i_1] [i_6]))) : (255 && 0)));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_29 = ((((((var_1 ? (arr_6 [i_1] [i_1] [i_1] [15]) : var_6)))) ? (((-27384 ? 0 : 28))) : ((-(((arr_9 [i_1] [i_4] [i_1] [14]) / var_7))))));
                            var_30 = ((((1310703865 ? 1 : (~18))) - (~104)));
                            var_31 = (min((((2147483647 && (arr_5 [i_0] [i_0] [i_0] [4])))), var_7));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_32 = ((-((var_12 ? ((var_4 ? var_16 : (arr_14 [i_1] [i_5] [i_4] [i_1] [i_1]))) : var_11))));
                            var_33 -= ((((((30720 ? 65280 : 255))) ? (!255) : 77582661)));
                        }
                        var_34 = (25 ? 32767 : 1);
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_35 = (((((117 ? 4217384609 : 158))) ? 79 : -152));

                        for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_36 = (min(((var_9 * ((var_4 ? 251 : 85)))), -1310703865));
                            var_37 = var_6;
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_38 = (min(((max((!104), var_15))), ((249 << (229 - 215)))));
                            var_39 = (~152);
                            var_40 = ((3989040596 * 103) ? ((max(var_13, var_9))) : ((min(152, 84))));
                            var_41 = (((7 != 131071) >= ((-(!var_11)))));
                        }
                        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
                        {
                            var_42 = ((!((((~var_3) ? (var_0 > 251) : ((var_14 ? var_3 : var_8)))))));
                            var_43 = (min(var_16, (((!(((arr_15 [i_12] [8] [8] [8] [8]) && (arr_30 [i_0] [1] [i_0] [1] [1]))))))));
                            var_44 = (1310703853 | 249);
                            var_45 = ((var_1 > ((104 ? (~var_10) : (var_5 / var_2)))));
                        }
                        for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
                        {
                            var_46 = ((-(var_1 / var_3)));
                            var_47 = ((var_14 | (((228 * 1) ? -var_14 : ((var_2 ? var_3 : var_2))))));
                        }
                        var_48 ^= (((!var_12) ? ((((arr_21 [i_4] [i_4] [i_4] [i_4]) ? 228 : ((var_15 * (arr_1 [i_0])))))) : (((arr_21 [i_9] [i_4] [5] [i_0]) ? (var_7 | var_15) : (~var_14)))));
                    }
                    var_49 = (((((251 ? ((max((arr_13 [i_0] [i_0] [i_1] [i_1] [i_4]), 152))) : -30201))) ? var_10 : var_10));
                    var_50 = (max(var_50, ((var_8 + ((115 + (((65535 ? 7 : 91)))))))));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                {
                    var_51 = ((-81 * (!var_7)));
                    var_52 ^= (min((max(var_3, (~var_1))), (((((var_9 ? var_0 : var_2)) != 89)))));
                }
                var_53 = ((+(((((var_11 + 2147483647) << (186 - 186))) << (((arr_34 [3] [i_0] [i_0]) - 235))))));
            }
        }
    }
    var_54 = (min(var_54, ((max(var_1, ((((min(-6000, var_13))) ? ((var_2 ? var_9 : var_0)) : (31 / 243))))))));
    var_55 = (~var_9);
    #pragma endscop
}
