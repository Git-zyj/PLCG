/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_8 [i_3 + 1] [i_1] [i_2] [i_3 + 1] [i_1] [i_0]) ? ((max(-4087844379157050174, 1))) : (((arr_8 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 2] [1]) << (((arr_7 [i_0] [i_0] [i_0] [i_0] [1]) + 149))))));
                                arr_11 [i_0] [i_0] [i_0] [i_3 - 1] = (-54549 >= var_13);
                            }
                        }
                    }
                    var_16 = (min(var_16, (((((min(var_0, 4087844379157050175))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_2] [1] [i_2] [i_2] [i_2] [i_2]) : (arr_0 [i_2]))) : (min((arr_0 [i_0]), var_9)))))));

                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_17 *= ((-((((1 <= 4013394401186485156) && ((((arr_2 [i_0]) ? 0 : var_11))))))));
                        var_18 &= (9027 & 35888059530608640);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_19 = (arr_5 [i_0] [i_0]);
                        var_20 = (((arr_16 [i_0] [i_1] [i_2] [i_2] [i_6]) - (((((arr_16 [i_0] [i_1] [i_2] [10] [i_0]) < (arr_7 [i_0] [i_0] [i_2] [i_2] [i_6])))))));
                        var_21 = (((((arr_0 [i_6]) ? var_4 : (arr_0 [i_2]))) | ((((max(var_3, -1060441604)) & var_9)))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_22 = (min(var_22, (!-1)));
                            var_23 = (min(var_23, (((-var_7 ? var_12 : -var_0)))));
                        }
                        arr_23 [i_0] [i_2] [i_0] [6] [i_2] [i_7] &= (max(4087844379157050175, 2011987262));
                        var_24 = ((((((var_12 ? 4087844379157050167 : (arr_13 [i_0] [i_0]))) >= -3704512985121933828)) ? (max(41714, (~1073725440))) : -var_0));
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] = (((((((max(var_11, -1073725419))) ? var_9 : (arr_1 [i_0])))) ? (1 && 1) : 1));
                        arr_27 [i_0] [i_0] = (((((((max(var_12, var_8))) ? -var_5 : (arr_21 [i_0] [i_0] [i_1] [i_0] [i_9])))) - (arr_1 [i_0])));
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [i_9] |= (arr_1 [i_1]);
                        var_25 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_26 = (((max((6915564121580292274 > 1), (arr_31 [i_0] [i_0] [i_2] [i_10] [i_2])))) ? 966254318 : ((-((-4087844379157050167 ? 23821 : -966254334)))));
                        var_27 = (((arr_29 [i_0] [i_0] [i_0] [i_2] [i_10]) ? 410067201 : (((((arr_9 [i_0] [1] [i_1] [i_2] [i_10]) && 4087844379157050158))))));
                        arr_32 [i_0] [i_1] [i_2] [i_0] = ((((-17866 ? (arr_14 [i_10] [5] [i_2] [i_10]) : ((var_8 / (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))))) * ((-(arr_18 [i_0])))));
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, var_4));
    var_29 = (min(var_29, (var_0 < -12438)));
    var_30 = (((((var_14 - ((69 ? var_3 : var_6))))) ? (((var_9 || (((var_10 ? 1 : 1613631652)))))) : var_4));

    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        arr_35 [i_11] = -1;
        var_31 = ((((((min(-2738686621931554533, 14298))) ? (((arr_34 [i_11] [i_11]) ? 3099 : 5573)) : ((-3592 ? var_1 : var_1)))) <= var_7));
        var_32 = ((((((41714 <= (arr_34 [i_11 - 1] [i_11 - 1]))))) <= (arr_34 [i_11 - 1] [i_11 - 1])));
        arr_36 [i_11] = var_4;
        var_33 *= ((((((min((arr_33 [i_11 - 1]), (arr_33 [i_11 - 1])))) + 2147483647)) << (((((arr_33 [i_11 - 1]) + 53)) - 28))));
    }
    #pragma endscop
}
