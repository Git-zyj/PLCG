/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [9] = (min(var_13, (var_7 && var_2)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] [i_0] = (max((~var_4), (var_3 && var_10)));
            arr_7 [i_0] [i_1] [i_1] = (min((min(var_11, var_11)), ((min(var_6, (min(var_7, var_7)))))));
            arr_8 [i_0] [i_0 + 1] = ((((((((min(18446744073709551606, 5686925254044485860))) && (var_6 <= var_11))))) / (4525 + var_10)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, ((((-4503 >= 19) >= (var_12 + var_5))))));
            var_15 -= (((var_3 << (var_1 - 60))));
            var_16 -= (!var_3);
            arr_13 [i_0] [i_2] &= var_0;
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1)
        {
            var_17 *= (var_4 + 4517);
            arr_16 [i_0 - 4] [i_3] = (max((-4526 >= var_12), -13));
            var_18 *= (min(((-var_13 >> (var_9 - 26))), ((max(var_7, 5805)))));
        }
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_19 &= (max(((min(48, 0))), (min(var_10, var_2))));
            var_20 -= (((max(var_3, var_8))));
            var_21 = (var_11 < var_10);

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_25 [i_0] [i_4] [i_4] = var_7;
                    arr_26 [i_4] [i_4 - 2] [9] [i_6] [i_6] [i_5] = (((((((max(var_0, var_1))) - var_3))) != (max(var_2, var_0))));
                    var_22 = (max(var_22, ((((max(var_1, var_5)) >> (((max(var_13, -var_10)) - 4294949901)))))));
                }
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_23 = (min(var_23, (((!(4501 & var_0))))));

                    for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
                    {
                        var_24 = var_2;
                        var_25 = (max(var_25, ((min((max(var_12, var_2)), var_13)))));
                    }
                    for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
                    {
                        var_26 = (((max(10100316687848899084, ((max(var_6, var_9))))) == var_4));
                        arr_35 [i_0] [i_4] [i_0] [i_0] [3] [i_4] [i_4] = (min((var_5 == var_7), (-4785061267274344068 - var_2)));
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_27 = (max(var_27, 4501));
                    var_28 = (((4541 && var_12) > 245));
                }
                arr_39 [i_4] [i_4] [1] = (((max(var_1, var_11)) == -var_12));
                var_29 = (min(var_13, ((max((var_5 == var_5), ((var_11 ? var_9 : 181)))))));
                arr_40 [i_0] [i_4] [i_5] = -var_3;
                arr_41 [i_5] [i_4] [i_0] = (min(-182, (max(var_2, (-88 % 4514)))));
            }
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                var_30 = (min((var_3 - var_0), (var_8 ^ 43792)));

                /* vectorizable */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_31 = (!var_10);
                    var_32 ^= (8346427385860652510 * var_12);
                }
                arr_48 [i_0] [i_4] [i_11] = (max(var_6, var_11));
                arr_49 [10] [i_4] [i_4] = 6182342418550210315;
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_54 [i_4] = ((((max((min(var_13, var_6)), (min(4194303, var_4))))) && (((var_1 >> (40780 - 40775))))));
                var_33 -= ((128 == (3981325518379729267 + var_7)));
                var_34 *= ((((max(var_9, var_12))) >= (!var_7)));
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_35 = (((((max(var_1, -102)))) ^ (max(var_1, var_4))));
                var_36 += (max((var_10 && var_6), ((var_4 ? var_3 : 0))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 21;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 21;i_17 += 1)
            {
                {

                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            var_37 = ((var_1 >= ((-(max(var_2, var_5))))));
                            arr_74 [i_16] [20] [i_17] [i_16] [i_16] = var_3;
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 21;i_20 += 1)
                        {
                            arr_77 [i_16] = ((var_4 ? var_0 : var_11));
                            var_38 = var_1;
                            arr_78 [i_18] [i_16] [i_17] [i_16] [1] [i_16] [i_15] = var_7;
                            var_39 = (-35 - var_10);
                        }
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            var_40 = ((23707 == (~50994)));
                            var_41 *= ((((min(-35, 65535))) | (min(-1176287006, -19589))));
                        }
                        for (int i_22 = 0; i_22 < 21;i_22 += 1)
                        {
                            var_42 = (min(var_42, ((min((17261 | -1398633571), ((8871228875354320246 << (var_13 - 1168357219))))))));
                            var_43 ^= 1;
                        }
                        var_44 = (((-var_10 != var_8) && ((var_0 == (var_13 && var_2)))));
                        var_45 = max((min(1385741876, 1398633570)), (var_9 > var_11));
                    }
                    var_46 = (max(-var_8, ((-1 ? var_5 : -55))));
                    var_47 = (max(var_47, ((min((min(var_4, var_13)), (var_1 - var_10))))));
                    var_48 = (((var_12 && var_0) / ((var_13 ? var_10 : var_4))));
                    var_49 = (min(var_49, ((((var_2 != var_7) <= (var_0 == var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
