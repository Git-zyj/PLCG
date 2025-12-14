/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_13 -= (arr_1 [i_0]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (min(var_14, ((((~2089617446843771372) | ((var_10 ^ (min(var_12, 18446744073709551615)))))))));
                            var_15 = (max(var_15, (((((((min(var_9, 0)) / (((-(arr_3 [i_2] [i_2] [i_2]))))))) ? (arr_7 [i_3] [i_3]) : ((((arr_6 [i_4]) ? 2 : (arr_7 [i_0] [i_2])))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((((arr_10 [i_1] [i_1] [i_1] [i_0] [i_1]) ? (arr_11 [i_0] [i_0] [i_0 + 1] [i_1] [i_2]) : 16357126626865780243)) <= (arr_4 [i_1] [i_1] [i_1]));
                        }
                        var_16 = ((((min(1, (arr_12 [i_0 + 4] [i_3 + 2] [i_3 + 2])))) ? -33822867456 : ((((~-14722) ? (((arr_3 [i_2] [i_1] [i_2]) ? var_12 : 73)) : (~1))))));
                        var_17 = (arr_6 [i_2]);
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = ((~(((!(arr_10 [i_1] [i_0 - 2] [i_0] [i_0 + 1] [i_2]))))));
                        var_19 = ((((1 ? 2097152 : (arr_1 [i_0 + 1])) - (arr_1 [i_0]))));
                        var_20 -= 1;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_21 = (max(var_21, ((max(-var_2, (min((arr_14 [1] [6]), (arr_1 [i_1]))))))));
                        arr_20 [i_1] [i_1] = (var_4 >= 4);
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_22 = (((arr_22 [i_1]) > 73));

                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            var_23 ^= 255;
                            arr_26 [i_7] [i_1] = ((((((((arr_5 [i_0] [i_1] [i_2] [i_1]) || (arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_0]))) ? (max((arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 3]), var_10)) : (((var_4 ? (arr_0 [i_2] [i_1]) : 1)))))) ? var_2 : (!1)));
                            arr_27 [i_1] [i_7] [i_2] [i_1] [i_1] = 73;
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_24 = (max((((-(!73)))), (max(((min((arr_9 [i_1]), var_1))), ((9223372036854775807 << (((arr_8 [i_0] [i_1] [i_1]) - 7045428353631757005))))))));
                                arr_32 [i_1] [i_1] = max(var_1, (arr_12 [i_0 + 1] [i_10 - 2] [i_0 + 1]));
                            }
                        }
                    }

                    for (int i_11 = 3; i_11 < 14;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_25 = ((1 | (arr_18 [i_1] [i_1] [i_2] [i_12 - 1] [i_12])));
                            arr_40 [i_1] [i_1] [14] [i_1] [i_1] [i_1] [i_1] = var_10;
                            arr_41 [i_0] [i_1] [i_1] [i_1] [i_12 - 1] = ((var_9 ? var_8 : var_6));
                            var_26 = ((((1 ? var_9 : var_2)) + ((14721 ? (arr_18 [i_1] [i_1] [i_2] [i_11] [i_1]) : 16357126626865780244))));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            var_27 = (min(var_27, var_1));
                            var_28 = ((!(arr_2 [i_0 + 4] [i_1])));
                            var_29 = (!var_3);
                        }
                        arr_45 [i_1] [i_1] [i_11] = (((((((max((arr_6 [i_1]), (arr_34 [i_0] [i_0 - 2] [i_1] [i_0] [i_0] [i_11])))) ? (!-466425486) : (((arr_36 [i_0] [i_0] [i_1] [i_1] [i_2] [i_11 + 1] [i_11]) ? 1 : (arr_29 [i_0 + 2] [i_2] [i_2] [6] [i_0])))))) ? ((((((arr_10 [i_1] [i_1] [i_1] [i_1] [i_11]) || 16357126626865780243))))) : ((-1333566614194023621 ? (max(var_5, 8568477992690990659)) : var_2))));
                    }
                    for (int i_14 = 3; i_14 < 14;i_14 += 1)
                    {
                        arr_48 [i_0] [i_0 + 2] [i_1] [i_0] [i_0] [6] = var_11;
                        arr_49 [i_14] [i_0] [i_1] [i_0] [i_0] &= (arr_4 [i_0] [i_1] [i_0 - 1]);
                    }
                }
            }
        }
    }
    var_30 ^= ((65535 ? -32766 : 14722));
    var_31 = (min(var_1, (-7191 & var_11)));
    var_32 = (!var_11);
    #pragma endscop
}
