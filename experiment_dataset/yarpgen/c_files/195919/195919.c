/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((((var_1 ? 55 : 201))) ? ((55 ? var_1 : var_13)) : var_8)), (0 == 55)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_4 > 187) ? (max((arr_1 [i_0]), var_1)) : -201));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [1] = ((((arr_3 [i_0]) ? (arr_4 [i_0] [4] [i_1]) : (arr_5 [i_0] [i_1] [i_0]))));
            arr_7 [i_0] = 201;
            arr_8 [i_0] [i_0] [i_0] = (min((max((arr_4 [i_1] [i_0] [i_0]), (arr_4 [i_1] [i_1] [i_0]))), (((arr_4 [i_0] [i_0] [i_0]) ? 98 : (arr_4 [i_0] [i_0] [i_0])))));
            var_15 = (max(((min(((var_7 ? var_12 : var_6)), ((var_5 ? (arr_3 [i_1]) : (arr_4 [i_0] [i_0] [i_0])))))), ((var_12 ? (arr_1 [i_0]) : var_4))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [i_0] = (min(((((((arr_5 [i_0] [i_0] [i_0]) ? 47454 : var_3)) > ((var_3 ? var_9 : (arr_3 [i_0])))))), (min(30, (arr_10 [i_2] [i_0])))));
            arr_12 [i_0] [i_0] [i_2] = (min(47454, 3903796999));
            var_16 = var_2;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((min(55, var_0)) * (arr_4 [i_0] [i_0] [i_5]))))));
                        var_18 *= (0 | 55);
                    }
                }
            }
            arr_20 [i_0] [1] [i_3] = (((((!var_5) ? var_10 : (((arr_1 [i_0]) ? var_13 : (arr_0 [i_0] [i_3]))))) | var_5));
            var_19 = ((((((~1545739121) ? var_11 : 65))) != (arr_1 [i_0])));
            var_20 = ((((((((arr_3 [i_0]) ? var_6 : (arr_0 [i_0] [i_0])))) ? var_13 : ((max(54, (arr_16 [i_0] [8] [i_0])))))) % (max(((var_5 ? 225 : (arr_9 [8]))), (47454 >= 9253304656631816635)))));
        }
        var_21 *= ((((((arr_18 [17]) ? 1024726216 : var_3))) ? (arr_17 [i_0] [i_0]) : (((arr_3 [i_0]) ? ((200 ? 201 : (arr_1 [i_0]))) : ((1 ? 18446744073709551604 : 18446744073709551615))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_27 [i_7] [i_6] [i_7] [i_8] [19] [i_0] = ((-((-190 ? var_1 : ((max(var_13, var_12)))))));
                        var_22 = (max(var_22, (var_7 != var_8)));
                        var_23 = (min((((16 ? var_11 : 13984590872159778033))), var_13));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_42 [i_12 - 1] [i_11] = ((190 ? 56 : 54));
                                var_24 = (max(1, (arr_17 [i_9] [i_9])));
                                var_25 += ((((arr_41 [i_10] [i_11] [i_13]) ? (max(-7351593713068522540, 18076)) : 1)));
                            }
                        }
                    }
                    var_26 = (1024726215 != 1);
                }
            }
        }
        var_27 = (min(var_27, ((min(((((123 ? var_6 : 4007664206139813690)))), 12162186189612323262)))));
        var_28 = var_12;

        /* vectorizable */
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            var_29 = (~0);
            arr_45 [i_9] [i_14] = ((-2141842090778845400 ? 1 : 1));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            arr_48 [i_15] = (((arr_36 [i_9] [i_9]) ? 161 : ((var_12 ? ((var_7 ? 54 : (arr_32 [i_9] [i_9] [i_9]))) : 1))));
            var_30 = 255;
            arr_49 [i_9] [i_9] = var_5;
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 12;i_16 += 1)
    {
        var_31 = ((var_1 >> (var_11 % -26)));
        var_32 = var_6;
        var_33 = 15;
        var_34 = (var_3 ^ 6284557884097228355);
    }
    var_35 = (min(var_35, ((min(1, 3288376525284503600)))));
    var_36 *= var_2;
    #pragma endscop
}
