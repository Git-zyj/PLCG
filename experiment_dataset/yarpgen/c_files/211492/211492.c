/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_0 [i_0]) == (arr_0 [i_0])));
        var_19 = (((((var_13 != (arr_0 [i_0])))) % (arr_3 [i_0])));
        arr_5 [i_0] = ((!(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 = (max(((-(((var_8 >= (arr_6 [1])))))), ((((var_12 ? var_5 : var_1))))));
        arr_8 [i_1] [i_1] = ((((var_4 - var_15) ? (arr_6 [i_1]) : 1)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_21 = ((-(arr_6 [i_2])));
        var_22 ^= (((arr_7 [i_2] [i_2]) == (~1714991341)));
        var_23 += ((~(arr_7 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((var_1 == ((var_6 << (((var_14 > (arr_7 [i_3] [i_3])))))))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_25 = (((-var_1 ? (((-8 & (arr_11 [i_3])))) : var_7)));
            var_26 = ((-var_9 ? (((((32768 ? (arr_14 [i_3] [i_3]) : var_6)) == (arr_14 [i_3] [i_4])))) : ((max(var_15, (arr_6 [i_3]))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_27 += ((((min((arr_18 [i_3] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]), (min(var_13, var_5))))) ? ((-(arr_14 [i_5 - 1] [i_5 + 1]))) : ((((((arr_7 [i_5 - 2] [i_6]) && 37)) || ((min(var_9, var_0))))))));
                        arr_20 [i_3] [i_4] [i_4] [i_4] = ((((((var_11 ? 7426362408265240715 : (arr_14 [i_4] [i_6])))) ? ((~(arr_13 [i_3] [i_4] [i_3]))) : ((32 ? 7236 : var_16)))));
                        arr_21 [i_3] [i_4] [i_5 + 1] [i_4] = (((((var_14 - (arr_13 [i_4] [i_5 + 1] [i_5])))) && ((((arr_13 [i_4] [i_5 - 1] [i_4]) ? (arr_19 [i_4] [i_5 - 1] [i_5] [i_5 - 1]) : var_5)))));
                    }
                }
            }
            var_28 = ((((~(arr_16 [i_4]))) >= ((max(var_12, var_12)))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_29 [i_3] [i_4] [i_4] [i_3] [i_9] = ((((min(var_6, (var_15 > var_17)))) ? (((min(var_0, 53960)))) : (((arr_24 [i_4] [i_4] [i_8]) ? (arr_18 [19] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9]) : ((var_8 ? var_0 : (arr_17 [i_7])))))));
                            arr_30 [i_4] = ((-(((arr_23 [i_4] [i_4] [i_9 - 2]) ? var_16 : (((arr_27 [8] [i_4] [20] [i_8] [19]) | var_14))))));
                            var_29 = (max(var_29, var_8));
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            arr_34 [i_3] [i_10] = 6644;
            arr_35 [i_3] [i_3] [i_10 + 3] = ((!(((-((~(arr_7 [i_3] [i_3]))))))));
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            arr_38 [i_3] [i_11] = var_18;

            for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
            {
                arr_43 [i_11] = 1;
                arr_44 [4] [i_11] [i_12] = (((((!(arr_37 [i_11 + 1] [i_11])))) >= ((((1 <= (arr_16 [i_11]))) ? (2605393419 < 0) : ((min(1, 29701)))))));
                var_30 *= (((arr_6 [8]) ? var_6 : (((arr_7 [i_11] [i_11]) ? (arr_25 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11 - 1]) : -0))));
                arr_45 [i_3] [i_11] [i_3] [i_11] = 1;
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                var_31 = ((var_0 ? ((((arr_28 [i_3] [i_11] [i_11] [i_13]) <= (arr_28 [i_3] [i_11] [i_11] [i_13])))) : (((arr_37 [i_11 - 1] [i_11]) ? var_17 : 1))));
                var_32 = (((arr_15 [i_11 - 1] [i_11 - 1]) && (((var_3 ? (arr_23 [i_11] [i_11] [i_13]) : ((((arr_47 [i_3] [i_11] [i_11]) > var_8))))))));
            }
        }
        for (int i_14 = 2; i_14 < 19;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_33 &= ((((arr_47 [i_14 + 1] [i_14 + 1] [i_3]) + (arr_46 [i_14 + 3] [i_14 + 1] [i_14] [i_15]))));
                arr_55 [i_3] [i_3] [i_14 + 2] [i_3] &= ((!((((((-(arr_27 [i_3] [i_3] [i_3] [2] [i_15])))) * 1802484164)))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                arr_58 [i_16] [i_14 + 1] [i_16] = 1;

                for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_34 = (arr_7 [i_14 + 2] [i_14]);
                        arr_63 [i_3] [i_3] [i_14] [i_16] [i_3] [i_18] = (((((var_13 ? var_10 : var_18))) && 1));
                        arr_64 [i_3] [i_16] [i_3] [i_16] [i_18] = (arr_19 [i_14 - 2] [i_14 - 1] [i_14 - 2] [i_17]);
                    }
                    arr_65 [i_16] = ((4601 ? 0 : 40945));
                    var_35 = (!var_6);
                    var_36 = ((-((var_3 ? var_9 : var_9))));
                    var_37 = (max(var_37, ((((arr_28 [i_14] [i_17] [i_14 + 3] [i_16]) ? var_14 : (arr_28 [i_3] [i_17] [i_16] [i_17]))))));
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                {
                    var_38 = (((((var_3 ? var_14 : (arr_18 [i_3] [i_14] [i_16] [i_14] [i_16])))) ? (arr_68 [i_16] [i_16] [i_16] [i_19]) : var_16));
                    var_39 += (((arr_12 [i_14 + 2] [i_14 - 1]) && (arr_12 [i_14 + 3] [i_14 - 1])));
                }
                var_40 = (max(var_40, (arr_13 [i_3] [i_3] [14])));
            }
            var_41 = ((-var_6 ? (252201579132747776 - -64) : (arr_36 [i_14 + 1] [i_14 + 1])));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 18;i_21 += 1)
                {
                    {
                        var_42 = ((~((-24 ? 23 : (min(2492483131, var_18))))));
                        var_43 -= (var_12 * 0);
                    }
                }
            }
            arr_75 [i_3] [i_3] = ((max((arr_73 [i_3] [1] [i_14] [i_14 + 3]), (((1 ? (arr_67 [12]) : (arr_23 [i_3] [i_3] [i_3])))))));
        }
        var_44 = (!var_1);
        var_45 = ((var_8 ^ ((max((arr_16 [i_3]), (arr_16 [i_3]))))));
    }
    var_46 = (max(((var_2 << (var_8 - 11091902494578190286))), ((-(64 <= -38)))));
    var_47 = ((var_13 ? (((min(var_6, 14704)))) : 2387476565429857563));
    #pragma endscop
}
