/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_7));
    var_18 |= (min(((33776997205278720 ? 779732406 : -21609)), (!var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_19 = (arr_2 [i_0] [i_0] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] = (max(((((!var_14) < (~var_8)))), (min((arr_7 [i_2 - 1]), var_10))));
                                var_20 = (max(var_20, 4294967284));
                                arr_12 [i_2 + 1] [i_1] [0] = 1;
                            }
                        }
                    }
                    var_21 += arr_2 [i_0] [i_0] [i_0];
                    var_22 = ((var_10 % (min((var_5 >= var_6), (~var_4)))));
                }
                for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [5] [i_6] = ((((max((((arr_3 [14]) >= 1)), (arr_1 [i_1] [i_1])))) <= var_13));
                        var_23 = (max(var_23, (((4294967284 ? 1 : ((~(~var_7))))))));
                        arr_20 [i_5] [i_5] [i_5] = ((!(arr_9 [i_6] [i_6] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [2])));
                        var_24 = ((((arr_16 [i_5 + 1] [i_6]) - (21589 - var_5))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = (max(var_25, var_10));
                        var_26 = (max(var_26, (((var_8 ? (min(-21609, 4294967295)) : ((((var_13 ? 11 : var_3)) | (~var_1))))))));
                    }
                    var_27 += (!((max((max(var_12, 6)), (!-21602)))));
                    arr_23 [i_1] [i_1] [i_1] [i_1] = (((((arr_10 [2] [i_5 + 1] [2] [i_5 - 1] [i_5] [2]) | var_4)) * (arr_3 [i_0])));
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    var_28 += ((((((arr_0 [i_8]) & 65517)) * (!var_6))));
                    var_29 = (max(var_29, (((var_7 ? ((min(64, 65531))) : ((max((arr_1 [i_8 + 2] [i_8 + 2]), (min(var_11, (-127 - 1)))))))))));
                    var_30 = (var_7 >= 14670756143878720060);
                }
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_31 = (min(var_31, (-21620 != 4294967295)));

                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_30 [i_10] [i_9] [i_1] [i_1] [i_0] = (((((arr_29 [i_10 + 1] [i_10 + 1] [i_9 - 1] [i_9 + 1]) > (arr_29 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 + 1]))) ? ((~(arr_29 [i_10 + 1] [i_10 + 1] [i_9 - 1] [i_9 + 1]))) : (min((arr_29 [i_10 + 1] [i_10 + 1] [i_9 + 1] [i_9 - 1]), -21580))));
                        arr_31 [i_1] [i_1] [i_9] [i_10] = ((+(((arr_13 [i_10 + 1] [i_1] [i_0]) ? ((max((arr_8 [5] [6] [15] [i_0]), (arr_14 [i_9] [i_1] [1])))) : 21587))));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        var_32 = (4294967280 && 1);
                        var_33 = var_13;
                        arr_36 [3] [i_0] [i_1] [i_9] [i_9] [i_11] = var_13;
                        var_34 = (min(var_34, (((((var_8 ? (arr_25 [i_9 - 1] [i_1]) : var_7)) ^ ((((var_5 && (arr_32 [i_11] [i_9 + 1] [i_9 + 1] [i_9 + 1]))))))))));
                        arr_37 [i_0] [i_1] [i_9] [i_11] = (max((min(4294967280, 18446744073709551615)), (19 | 3775987929830831588)));
                    }

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_35 += ((!(((21588 | 2359061127) && 1))));
                        var_36 = ((~(-6790084356203840411 | 127)));
                        var_37 = (min(var_37, (arr_17 [i_9 - 1])));
                        var_38 += ((var_9 && ((var_15 != (min(var_11, 6514424326067491307))))));
                        arr_40 [i_1] [i_1] [12] = var_4;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_39 = (min(var_39, ((min(12497, 2283011580)))));
                        var_40 &= (((((~(((1 >= (arr_15 [i_13] [i_9] [i_0]))))))) || ((!(arr_29 [i_9] [i_9] [5] [i_9])))));
                        var_41 = ((-((max((arr_35 [i_9 + 1] [i_9 + 1] [i_9 - 1]), (arr_35 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                        var_42 += (max((arr_27 [i_1] [i_9 + 1] [9]), (((arr_5 [i_9 - 1] [i_9 + 1] [i_9 - 1]) - ((-(arr_27 [1] [i_9] [i_1])))))));
                    }
                    arr_44 [i_9] [i_1] [i_9] [i_9] = (arr_27 [i_9] [i_1] [i_0]);
                }
                var_43 = arr_25 [i_0] [i_1];
                arr_45 [i_0] [i_1] = var_8;
            }
        }
    }
    var_44 = (min(var_44, (((8459520635007166762 ? 56154 : 50)))));
    #pragma endscop
}
