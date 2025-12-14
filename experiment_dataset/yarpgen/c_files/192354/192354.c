/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_19 *= ((var_2 << (((arr_5 [i_0]) << (((arr_1 [i_2] [i_1]) - 8705))))));
                arr_8 [i_2] [i_1] [2] = (((var_14 ? var_2 : (arr_5 [i_2]))));
                var_20 = (max(var_20, ((((((-(arr_7 [i_0] [i_1] [i_2] [i_0])))) ? ((var_1 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_2]))) : (((var_6 << var_12) ? (arr_0 [8]) : ((min(var_0, 124))))))))));
                arr_9 [i_0] [i_2] [i_2] = -11;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_21 = ((35 ? (((arr_2 [i_2]) ? var_14 : (arr_2 [i_0]))) : ((((arr_2 [i_0]) || (arr_2 [i_2]))))));
                            var_22 = ((((var_6 <= (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))));
                        }
                    }
                }
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_16 [i_0] [i_1] [i_5] = ((!(!-8)));

                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [i_5] [i_6] = (((((8 ? (arr_10 [i_6 + 2] [i_6 + 2] [i_6] [i_6 - 1] [i_6] [i_6]) : (arr_10 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 2] [i_6] [i_6])))) ? ((min((arr_10 [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1] [4] [i_6 + 1]), (arr_10 [i_6 - 2] [i_6 - 1] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6])))) : ((max(var_8, -11)))));
                    arr_22 [i_0] [i_1] [i_0] [i_6] = 132;
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_0] [1] [i_7] [i_7] [i_0] = ((((-(arr_7 [i_0] [i_0] [i_0] [i_0]))) >> ((-(!8)))));
                    arr_26 [i_0] [i_7] [i_7] = 52;
                }
                var_23 |= (max(((((arr_24 [i_0] [i_1] [i_0] [i_1] [7] [i_0]) || 41561))), 12));
                var_24 = (((216929481 != 4294967295) && ((min(var_0, 4294967295)))));
            }
            var_25 = ((min((((97 ? 252 : 65535))), 1532591376)));
            arr_27 [i_0] = (max(var_6, ((var_13 ? -1205245301 : (arr_0 [i_0])))));
            var_26 = (max(var_26, ((((~(arr_17 [i_0] [i_0] [i_0] [i_1])))))));
            var_27 = ((max((((arr_5 [i_0]) + (arr_15 [i_0]))), -8)));
        }
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            var_28 = (min(var_28, 1));
            var_29 ^= ((-var_3 ? var_13 : -1205245297));
        }
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            arr_33 [i_0] [i_0] [i_9] = ((((1 ? (arr_7 [i_0] [i_0] [i_9] [i_9 + 2]) : 4294967295)) ^ var_6));
            var_30 += (((((arr_23 [i_0]) == (arr_30 [i_0]))) ? (arr_23 [i_0]) : (((min((arr_30 [i_0]), var_11))))));
        }
        for (int i_10 = 1; i_10 < 8;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_39 [i_10] = var_9;
                arr_40 [i_0] [i_0] [i_10] = -var_7;
            }
            for (int i_12 = 1; i_12 < 7;i_12 += 1)
            {
                arr_43 [i_10] [9] [i_12] = ((-((-(arr_10 [2] [i_10] [1] [i_10] [i_10] [i_10 + 2])))));
                var_31 = (((arr_24 [i_0] [i_0] [5] [i_12] [i_0] [i_12]) ? (max(var_8, ((var_5 ? (arr_2 [i_0]) : var_10)))) : (((~var_15) ? (arr_11 [i_0] [i_0] [i_12] [i_12] [i_0]) : (arr_3 [i_10 - 1] [i_12 + 2])))));
                arr_44 [i_10] [i_0] [i_0] [i_10] = (((-var_4 % 2715803522) ? (max((arr_15 [i_10 - 1]), (((var_8 ? (arr_0 [i_10]) : (arr_30 [i_10])))))) : (((((min((arr_12 [i_0] [i_10] [i_10] [i_0]), (arr_19 [i_0] [i_0] [i_12] [i_12])))) ^ -8)))));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_32 = (((max(((var_7 ? (arr_31 [i_0] [2] [i_0]) : var_16)), 121)) <= var_10));
                var_33 += ((((!(arr_10 [i_0] [1] [i_13] [i_0] [i_0] [i_13]))) ? (arr_10 [i_0] [i_0] [i_0] [i_10] [i_10 + 2] [i_13]) : 254));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            arr_52 [i_0] [i_10] [i_10] = (!1205245310);
                            arr_53 [i_0] [i_10] [i_14] [i_15] = 252;
                        }
                    }
                }
            }
            arr_54 [i_10] = ((var_15 ? ((((((min(var_6, var_0))) < -1205245315)))) : (((min(6, var_7)) % (~var_9)))));
            var_34 = (max(var_34, var_3));
            var_35 ^= (max(var_12, (arr_47 [i_10 + 2] [i_10 + 2] [i_10 + 2])));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        var_36 = (min((~117), (((arr_42 [i_0] [i_10 + 1]) >> 1))));
                        arr_59 [i_0] [i_10] = (var_10 | 1205245300);
                    }
                }
            }
        }
        var_37 *= (min((max((!var_4), (arr_23 [i_0]))), (((1 > ((-(arr_34 [i_0]))))))));
        var_38 = ((min(-1205245311, 0)));
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
    {
        var_39 += 4294967277;
        var_40 = (2147483647 % -1010343223);
    }
    var_41 = var_1;
    var_42 = (min(var_42, (((((max(var_0, var_0))) != var_5)))));
    #pragma endscop
}
