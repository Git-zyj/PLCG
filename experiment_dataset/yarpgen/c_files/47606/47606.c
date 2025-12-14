/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (min((!1), (max((arr_0 [i_0]), (arr_0 [i_0])))));
        var_15 = ((((max(var_0, ((1 ? var_1 : var_11))))) ? 29656 : -3669606230));
        var_16 = -8476340599099206451;
    }
    var_17 = 1321;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        var_18 = (min((arr_3 [i_4 - 2]), (((var_12 < (arr_4 [i_2 - 1] [i_3 + 2]))))));
                        var_19 = (min(var_19, (((((max((arr_3 [i_1 + 2]), 0))) ? (max(29682, (~26553))) : 21997)))));
                        var_20 = 29660;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_21 = (arr_6 [i_1] [i_1 + 2]);
                                var_22 = (arr_13 [i_1 - 1] [i_3] [21] [i_3 - 1] [i_5] [i_6]);
                                var_23 = var_8;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_24 = (((arr_6 [i_7] [i_8 + 3]) ? (((arr_6 [i_7] [i_7]) ? (arr_6 [i_3 - 1] [i_3 - 1]) : (arr_6 [i_2 + 1] [11]))) : ((-(arr_6 [i_8] [i_2 + 2])))));
                            var_25 *= ((((min((arr_5 [i_1 + 2] [i_7] [9]), 1))) | (max(-8384071333502051520, 598446612))));
                        }
                        for (int i_9 = 3; i_9 < 20;i_9 += 1)
                        {
                            var_26 = (max((((~(3 % var_13)))), (arr_16 [i_3] [i_9] [i_3] [i_3])));
                            var_27 = ((3587073995 ? 0 : 64218));
                            var_28 &= (min((((-(arr_23 [i_2] [i_2] [6] [i_2] [i_2])))), ((var_6 ? 3587074000 : (arr_24 [i_1 + 2] [i_2] [i_3 + 1] [i_7] [i_7] [i_7] [i_7])))));
                            var_29 -= (min(27, (((((var_11 | (arr_15 [16] [i_1 + 2] [i_2] [i_3] [i_7] [i_9])))) ? (arr_13 [i_1] [1] [i_3 - 1] [1] [i_7] [i_7]) : (arr_21 [i_9] [16] [6] [i_9 + 1] [i_9] [i_9] [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_30 = ((min(var_7, (arr_17 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
                            arr_27 [i_1] [i_1] [1] [i_3] [i_1] = (max(((max(var_7, var_7))), -8384071333502051544));
                            arr_28 [i_1] [i_3] [i_2 + 3] [i_7] [i_7] = var_1;
                            var_31 = ((505600002 + ((-((44 ? 2 : 11))))));
                            var_32 = (arr_15 [i_1] [i_1] [i_2] [i_3] [1] [i_10]);
                        }
                        var_33 = (min(((var_1 + (max((arr_13 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1]), var_12)))), ((min(var_13, (var_8 * 0))))));
                        var_34 -= var_6;
                    }
                }
            }
        }
    }
    var_35 = ((var_12 ? 8384071333502051531 : (min(var_3, (!792184558)))));
    #pragma endscop
}
