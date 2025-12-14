/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-62 ^ ((((~var_9) >= (var_14 != 32074))))));
    var_17 = var_4;

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(7651115157958733422, 15));
        var_18 += (min((((var_14 + (max(9007199254740991, 3542223560))))), (min((arr_1 [i_0]), ((-9007199254740988 ? 7651115157958733422 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = ((((max(17, (arr_0 [10] [16])))) ? (((max((3620287826236337570 >= 1), 21813)))) : (((arr_4 [i_1 - 2] [i_1 - 2]) ? (max((arr_4 [i_1] [i_1]), var_3)) : var_0))));
        arr_6 [i_1] = max((((~((max((arr_3 [i_1]), 1)))))), ((10795628915750818208 ? 9007199254740991 : 1562745462493009070)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_20 = (((((((((arr_8 [i_1] [i_2]) | (arr_1 [i_1])))) ? (arr_5 [i_1 - 3]) : (47 % 32767)))) ? (min(((min(-32739, 31))), (arr_0 [i_1] [i_1 - 3]))) : ((((!(arr_9 [13] [i_2])))))));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_21 += (~-28314);
                        arr_19 [i_1] [i_2] [i_2] [12] [i_1] = (max((min((arr_5 [i_1 - 4]), var_6)), (arr_5 [i_1 + 1])));
                        var_22 = (max(var_22, ((((~var_12) ? ((((((arr_0 [i_4] [i_2]) ^ (arr_9 [i_1] [i_3]))) >= (((min((arr_12 [i_3] [i_2]), (arr_15 [i_1] [10] [i_2] [i_3] [i_1] [i_5])))))))) : var_1)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (max(var_23, (arr_8 [i_3] [i_3])));
                        var_24 = (((arr_3 [8]) ? ((min((arr_15 [i_1 - 3] [i_1 - 1] [i_2] [i_2] [i_1 - 4] [i_1 - 4]), var_0))) : (((!((min(-1, (arr_14 [i_1] [i_1] [i_2] [i_2])))))))));
                        var_25 = (((((arr_0 [i_1] [9]) + 9223372036854775807)) >> (var_14 - 1104933521)));
                        var_26 += ((((min((var_7 - var_10), ((max(28335, var_7)))))) ? -var_11 : ((((((-32767 - 1) ? 1058104994 : (arr_0 [i_4] [i_4])))) ? (arr_18 [i_3]) : (((max(19, (arr_14 [i_1] [i_2] [i_3] [i_6])))))))));
                        var_27 = (min(var_27, -124));
                    }
                    var_28 += max(((min(var_3, 56))), ((((118 && -32739) + (8604 % -32728)))));
                    var_29 += (max(var_14, ((~(arr_5 [i_1 + 1])))));
                    arr_23 [i_2] [i_2] = (((((arr_11 [i_2] [i_1 - 3] [i_1 - 1] [i_2]) ? (arr_11 [i_2] [i_1 + 1] [9] [i_2]) : (arr_5 [i_1 - 3]))) <= (min((arr_5 [i_1 - 2]), (arr_11 [i_2] [i_1 - 2] [i_1 - 3] [i_2])))));
                    var_30 += (((arr_9 [i_1] [i_3]) ^ (min((arr_10 [i_3] [i_3]), 0))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_31 += (arr_26 [i_7]);
                    arr_28 [i_1 - 1] [i_1 - 1] [i_2] [11] = (((-5028139889885155377 ? 1 : var_1)));
                }

                /* vectorizable */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    var_32 = (((arr_8 [i_1 - 1] [i_2]) && -21746));
                    var_33 = (arr_12 [i_2] [i_2]);
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_34 = (max(var_34, (max(2449088860038825209, ((((max(var_15, var_15)) & (250 == var_7))))))));
                    arr_34 [i_2] = (min(((18446744073709551599 ? (!112) : ((max(var_13, (arr_31 [i_1 - 2] [i_2] [i_2] [i_2] [i_3] [i_2])))))), ((((arr_22 [i_2] [i_2] [i_3] [i_9] [i_9]) >= var_2)))));
                    arr_35 [i_2] = 46756;
                }
                var_35 = ((((((1 + var_5) ? ((18446744073709551591 ? 11977604237867047513 : 13534967635220365861)) : (((var_14 ? var_14 : (arr_13 [i_2]))))))) ? ((max(var_4, (arr_32 [i_1 + 1] [18] [i_2])))) : var_6));
            }
        }
    }
    var_36 += var_7;
    #pragma endscop
}
