/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((!(-4294967295 == var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((((min(var_11, var_12))) >> (((min(((~(arr_0 [i_0] [i_1]))), -14447)) + 14466))));
                var_15 *= var_0;

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_16 = var_11;
                        var_17 *= (~18446744073709551609);
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_18 -= ((((var_5 ? var_0 : var_12))) ? ((((~-123) >> (((~var_6) + 29444))))) : var_8);
                        var_19 *= (arr_9 [20] [i_1] [i_1] [i_2 - 3] [20]);

                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            arr_13 [9] [i_0] [i_2] [i_0] [i_0] = (((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_0] [i_5 + 2]) >= (((arr_12 [i_0] [i_1 + 2] [i_2]) ? var_9 : (arr_1 [i_0])))));
                            arr_14 [i_0] = (arr_6 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_20 = (min(var_20, (((+(((arr_11 [i_6] [i_2] [i_1]) - var_11)))))));
                        var_21 = ((!(arr_4 [i_1 + 1] [i_2 + 1])));
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_22 &= var_3;
                        var_23 = (min(var_23, ((((min((((var_5 % (arr_15 [i_0] [i_1 + 2] [i_0] [i_7])))), (1064498516 ^ var_8))) + (arr_18 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_0]))))));
                        var_24 += var_0;
                        var_25 = (((min((arr_0 [i_7] [i_1]), (arr_12 [i_0] [10] [i_0]))) - (((min(-2030572095, 30))))));
                    }
                    var_26 = (min(var_26, (((~(arr_17 [i_1 + 1] [i_1 + 1]))))));
                    var_27 = (min((arr_17 [i_0] [15]), (((((-(arr_9 [i_2] [i_1 - 1] [i_1] [i_0] [i_0])))) ? (((arr_9 [i_0] [i_2] [i_2] [i_0] [i_0]) ? var_5 : -3102145637996107796)) : (((-(arr_15 [21] [21] [i_2] [i_1]))))))));
                    var_28 = (min((((((6291456 ? 53193 : (arr_19 [i_0] [i_0]))) > (((min(18000, var_2))))))), ((~(min(-1788207257, (arr_2 [i_0] [i_1] [i_0])))))));
                }
                var_29 = (~var_6);
                var_30 -= -93;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_31 = (min(13044141977743804844, (+-9)));
                                arr_34 [i_8] [i_8] [i_10] [i_11] [i_12] = (min((min(65521, -3042914915)), 0));
                                var_32 = (max(var_32, (((~(((((8775506865810454583 % (arr_7 [i_8] [20] [i_10] [i_10] [0])))) ? (min(var_8, var_5)) : (arr_7 [8] [0] [i_10] [i_10] [i_12]))))))));
                            }
                        }
                    }
                }
                arr_35 [i_8 + 2] = ((((min(var_7, 16128))) ? (var_8 - -var_9) : (((30 - (arr_5 [20]))))));
                arr_36 [i_9] = ((((((!(arr_33 [i_8] [i_8] [i_9 - 1] [i_8] [i_9 + 1]))))) > ((99 ? (arr_18 [i_9] [i_9 + 1] [i_8 - 3] [i_8]) : var_4))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 11;i_14 += 1)
        {
            {

                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 9;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_33 &= ((((~((min((arr_6 [i_13]), 16))))) * (((!(arr_11 [18] [i_17] [i_13]))))));
                                var_34 = 3923001444;
                            }
                        }
                    }
                    var_35 |= (min(((((min(164, var_11))) ? (~var_2) : ((min(166, var_12))))), var_0));
                }
                arr_49 [i_13 + 1] [i_13] [i_14 - 1] = var_6;
                var_36 -= (min(var_3, var_8));
                var_37 = (max(var_37, var_5));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_18 = 2; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            {
                                var_38 = (max(var_38, (~var_10)));
                                var_39 = (-0 ? (arr_62 [16] [i_19 - 1] [i_19] [1] [i_22]) : (min((arr_60 [i_22] [i_20] [i_20] [i_18 + 2]), (var_8 + var_9))));
                                var_40 &= (min(113, var_9));
                                arr_65 [i_18] [i_21] [i_21] [i_20] [i_19] [i_18] [i_18] = 61887;
                                var_41 = (arr_16 [i_20]);
                            }
                        }
                    }
                    arr_66 [17] [i_20] [17] = ((-((~(-32767 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
