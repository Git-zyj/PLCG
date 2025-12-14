/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = 9152821581168018146;
                arr_6 [i_1] = (arr_3 [i_0] [2]);
                var_19 = (arr_3 [10] [10]);

                for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_20 += (((-127 - 1) || (((var_14 ? ((var_3 ? (arr_4 [3] [10]) : (arr_4 [i_0] [i_2]))) : 0)))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_21 = (min(var_21, (((!((!(arr_8 [i_0] [i_2 + 1] [i_0]))))))));
                        var_22 |= 69472869;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [5] [7] [i_1] [7] [7] [8] = ((((!((((arr_13 [i_5] [i_1] [i_5] [i_5] [i_5]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_8 [i_1] [i_1] [i_1])))))) ? ((((-127 - 1) ? 16380 : -89))) : (((((47 ? 268173312 : (arr_9 [i_1] [i_2] [i_1])))) ? (arr_4 [i_1] [i_1]) : (arr_12 [8] [3] [i_1] [11] [2] [i_2 - 2])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [2] = (((((~((~(arr_1 [7] [i_2])))))) ? (arr_9 [i_1] [8] [2]) : ((1441251734 ? 65535 : 1))));
                                arr_17 [i_1] [i_1] [i_2] [4] [0] [i_2] [1] = (((arr_5 [i_0]) ? 91881557 : -2699));
                                var_23 -= (((max(var_8, 75))));
                                var_24 = (min(var_24, (((((((var_14 ? 1 : 1414502532149139663)) + -var_11)) & (((arr_2 [i_2]) ? ((40 ? 10120869633460128706 : 621105740187989479)) : (((2480621114 ? -7 : 459156941))))))))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_2] [i_2] = (min((((var_2 ? (((arr_1 [1] [8]) * (arr_2 [i_1]))) : 29104))), ((((((arr_1 [8] [8]) ? var_8 : -6907944579373012164))) ? -7916733534960801477 : (~var_9)))));
                    var_25 = ((!((((arr_8 [i_1] [i_2 - 1] [i_1]) ? 124 : (arr_8 [i_1] [i_2 - 1] [6]))))));
                }
                for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((max(-117, 44))))));
                    var_27 = ((((!(arr_20 [i_6 - 1] [i_1] [i_1] [5]))) ? 56 : (((!(543528045 != 7569370177982933204))))));
                }
                for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, (arr_14 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 - 3] [5] [i_7 - 2])));
                        arr_26 [i_1] [i_1] = ((((arr_3 [2] [7]) ? -10949 : 1)));
                        arr_27 [i_0] [i_1] [i_0] [i_0] = (arr_14 [i_0] [1] [i_0] [i_7] [i_7] [i_7 - 2]);

                        for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_29 = (arr_10 [i_7] [i_7 - 2] [i_1] [i_7 + 1] [i_1] [i_7 + 2]);
                            arr_31 [i_1] [i_0] [i_0] [i_0] [i_1] = (!var_4);
                            var_30 = ((-8 ? var_13 : var_1));
                            arr_32 [i_0] [i_1] [i_8] [i_1] = 188;
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_7] [i_0] [i_1] = (!0);
                            var_31 = ((227 ? (((-410670647 ? 4066 : var_2))) : (arr_34 [i_1] [i_8] [i_1] [i_1] [i_1])));
                        }
                        var_32 = 4286578688;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        arr_39 [6] [i_1] [6] [6] = ((arr_14 [i_7 - 3] [i_7] [i_7] [i_7 - 3] [i_7 - 3] [i_7 - 1]) ? 112 : 20);
                        var_33 ^= (((arr_21 [i_0] [i_1] [i_0] [i_7 - 1]) - (((!(arr_34 [i_0] [2] [8] [i_1] [8]))))));
                        var_34 = (((!var_6) != (arr_29 [i_7 - 1] [i_7] [2] [i_7 - 1] [i_7 - 3] [i_7])));
                    }
                    var_35 = (var_14 ? (!18446744073709551597) : (((((-(arr_13 [i_0] [i_1] [i_1] [i_1] [i_7]))) < var_9))));
                    var_36 += (+(max((arr_19 [i_0] [i_0] [5]), (arr_8 [i_0] [i_0] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
