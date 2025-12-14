/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (~var_3);
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_20 = (min(var_20, (arr_4 [i_2])));
            var_21 = (min(var_21, (((((var_8 ? (arr_2 [i_1]) : var_10)) % (arr_5 [i_1] [i_2]))))));
            arr_8 [i_1] = var_8;
            var_22 |= ((-(arr_5 [i_1] [8])));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            var_23 *= (var_9 * 67108863);
            arr_13 [8] [i_3] [i_1] = ((~((-(arr_4 [i_1])))));
            var_24 += (arr_0 [i_1]);
        }
        arr_14 [i_1] = ((-1 ? ((((arr_5 [i_1] [18]) == var_5))) : 17605));

        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_1] [i_1] = (arr_7 [i_1]);
            arr_19 [i_1] [i_4 - 1] = (arr_12 [i_1] [i_4]);
            arr_20 [i_1] [i_1] [i_4 + 1] = (~(min((max(var_4, (arr_10 [i_4] [i_1]))), (((-17626 + (arr_15 [i_1] [i_4 + 3])))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_23 [i_1] [i_1] = ((((arr_22 [i_1] [i_1] [i_1]) ? 11 : -1)));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_25 = (min(var_25, (arr_1 [i_1])));
                var_26 = arr_9 [i_1] [4] [i_1];
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_34 [i_1 - 1] [i_5] [i_5] [i_7] [i_7] [i_1] = (((max(58515754, (arr_12 [i_1 - 2] [i_1 - 3])))) + -1);
                        arr_35 [i_1] [i_5] [9] [i_5] [i_1] = ((((((min(23, 151)) >= ((((17626 && (arr_29 [i_1] [i_1] [i_1 - 1])))))))) << ((((var_18 ^ ((var_15 >> (((arr_24 [i_1]) - 77)))))) - 1698070200553674958))));
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_27 = (min(var_27, ((((((arr_32 [i_1]) ? (arr_24 [i_9 - 2]) : var_17)))))));
            var_28 = arr_33 [i_1] [i_1] [14] [i_1] [i_1] [i_1 - 2];
        }
        for (int i_10 = 4; i_10 < 20;i_10 += 1)
        {
            arr_42 [i_10] [i_10] [i_1] |= (max((arr_0 [i_10 + 1]), (min(var_16, (var_3 ^ var_16)))));
            arr_43 [i_1] [i_1] = -58515765;
        }

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_29 = (max(var_29, (((~((((arr_25 [i_11]) && var_7))))))));
            arr_46 [i_1] [i_1] [i_1 - 3] = 58515754;
        }
        for (int i_12 = 3; i_12 < 19;i_12 += 1) /* same iter space */
        {
            arr_51 [i_1] [i_1] [i_1] = ((((max(var_2, (arr_37 [7] [12])))) <= (arr_33 [i_12 + 1] [i_12] [i_12] [i_12] [i_12] [i_1])));
            arr_52 [i_1] = (((arr_10 [i_1 - 3] [i_1]) % (arr_25 [i_1])));
            var_30 = (((arr_10 [i_1 - 2] [i_1 - 2]) * (arr_10 [i_1 - 3] [i_12 + 1])));
        }
        for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
        {
            var_31 = (((~(-320651126161666762 | var_1))));
            var_32 -= var_9;
            var_33 = (max(var_33, (((-(-58515766 <= 40397))))));
            arr_55 [i_1] [i_1 - 1] [i_1] = (i_1 % 2 == 0) ? (((((((max(17605, (arr_25 [i_1]))) << ((((109381261165000785 ? (arr_16 [i_1]) : (arr_29 [i_1] [i_1] [i_13]))) - 5639027220914994555))))) ? 3968454187993389355 : (~var_7)))) : (((((((max(17605, (arr_25 [i_1]))) << ((((((109381261165000785 ? (arr_16 [i_1]) : (arr_29 [i_1] [i_1] [i_13]))) - 5639027220914994555)) - 15318565492844175161))))) ? 3968454187993389355 : (~var_7))));
        }
        for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
        {
            var_34 = (min(var_34, ((((((min((arr_22 [i_1] [i_14] [i_14]), (arr_11 [4] [5]))))) ? 58515777 : (((17621 | -7383857125015913664) ? (arr_1 [i_1]) : (arr_30 [7] [7] [i_14 - 3] [i_14] [i_14]))))))));
            arr_59 [i_1 - 3] [i_1] = (min((!18446744073709551615), ((((max(var_13, (arr_41 [i_1 - 1] [i_14])))) ? var_1 : (((arr_6 [i_1] [i_14]) & (arr_24 [i_14 + 1])))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_69 [i_17] [i_1] [i_17] [i_17] [20] = min((~var_12), var_13);
                            var_35 = (min(var_35, ((((((((((arr_5 [i_15] [i_16]) < var_17)))) | ((var_13 - (arr_47 [i_15] [18]))))) <= (~185))))));
                        }
                    }
                }
            }
        }
    }
    var_36 = 1;
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 8;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            {
                var_37 = (max(var_37, ((((((var_5 & (min((arr_65 [i_19]), -3994011501981173525))))) ? (((arr_6 [i_18] [5]) ? ((((arr_4 [i_19]) + (arr_0 [i_19])))) : (arr_75 [i_18]))) : ((((arr_39 [i_18] [i_18]) * (arr_33 [i_18] [1] [0] [7] [0] [i_18 - 1])))))))));
                arr_76 [i_18] = ((((max(18446744073709551615, (arr_26 [i_18] [i_18] [i_18] [i_18]))) | var_3)) * 2831215756226074689);
                arr_77 [3] [3] [1] = ((-((max(var_10, (arr_58 [i_19]))))));
            }
        }
    }
    #pragma endscop
}
