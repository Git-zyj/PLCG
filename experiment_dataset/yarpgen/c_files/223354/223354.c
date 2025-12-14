/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((2821474649 * var_13), ((min(1, var_7))))) % var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = min(((((min(276960895, var_4))) ? (min(var_14, (arr_2 [i_0] [i_0]))) : (arr_0 [i_0] [i_0]))), (min(4294967289, 0)));
        arr_4 [i_0] [i_0] = ((((max((max(var_8, (arr_1 [i_0]))), (arr_2 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? (1 | var_3) : (max(var_15, (arr_2 [i_0] [i_0]))))) : (arr_2 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = (((var_9 < var_0) || (((1 ? 1700349302 : 8796093014016)))));
            var_19 += (arr_5 [15]);
            arr_8 [i_0] = (arr_0 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_20 = (min(var_20, (((((((arr_0 [i_0] [i_0]) ? var_2 : (arr_2 [i_3] [i_2 + 1])))) ? var_1 : (min(((min(var_10, var_1))), (-9223372036854775807 - 1))))))));
                var_21 -= var_7;
            }
            arr_14 [i_0] = ((arr_5 [i_2]) ? (((var_16 ? (min((arr_0 [i_0] [i_0]), var_10)) : (((max((arr_11 [i_0] [i_0] [i_0]), 1))))))) : (max(var_8, (arr_2 [i_2 + 1] [i_2]))));
            arr_15 [i_0] = ((((((max((arr_11 [i_0] [i_0] [i_0]), var_6)))) / ((0 ? 1 : 682211180467072248)))) + (var_6 || 1));
            arr_16 [i_0] [i_0] = (var_11 >= (min((((1 ? var_17 : 2040972025))), (((arr_0 [i_0] [i_2]) ? var_1 : 1)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_22 ^= ((min((arr_17 [i_0] [i_4] [i_4]), (arr_17 [i_0] [i_0] [i_0]))) | (min((arr_17 [i_0] [i_0] [i_0]), (arr_17 [12] [i_4] [i_4]))));
            var_23 &= 49831;
        }
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5 - 1] = (min((min((arr_20 [i_5]), (arr_19 [i_5 + 2] [i_5 + 2]))), (((1984 ? (((var_5 ? (arr_19 [i_5] [i_5]) : var_6))) : ((2821474648 ? var_12 : 65535)))))));

        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_24 ^= (-8813345106627188378 & (((17548 ? ((min(-2102311592, 16380))) : (arr_21 [i_6])))));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_28 [i_6] [i_6] [i_6 + 1] [i_6 - 1] = ((5488525053912932167 ? -31752 : 1));
                var_25 = 18238774213761304585;
                var_26 = (min(var_26, (((((var_0 ? ((3128435100 ? (arr_27 [18] [i_6] [18]) : 9711)) : ((var_8 ? var_17 : var_2)))) >= (arr_26 [i_5] [i_7] [i_7]))))));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_32 [i_6] = ((((min((min((arr_22 [i_8] [i_5 + 1]), (arr_22 [i_6 - 1] [i_8]))), ((((arr_25 [10]) ? (arr_27 [i_6] [i_6] [i_8]) : var_0)))))) ? 1 : ((((max(6, var_9))) ? (arr_31 [i_5 - 3]) : (min((arr_22 [i_6] [i_5]), var_16))))));
                var_27 *= (max((min(((var_15 | (arr_27 [6] [i_5 - 3] [i_5]))), -2102311566)), (((var_4 ? var_1 : (((min((arr_30 [i_5] [i_5 - 1] [i_5 - 2]), 49156)))))))));
            }
            arr_33 [i_5] [1] |= 827759875249450217;
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            arr_38 [i_5] = ((0 ? (!var_16) : (min(67107840, -73))));
            var_28 = (max(var_28, (arr_35 [i_9])));
            arr_39 [i_5] [i_9] &= ((min(var_4, var_10)) | ((((((arr_37 [i_5] [i_5]) % var_14))) ? (var_13 <= var_15) : var_12)));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_29 = (max(var_29, (((var_5 >> (min((((arr_26 [i_5] [i_10] [i_5]) >> (arr_25 [i_5]))), 64512)))))));
            arr_43 [i_10] [i_10] [i_5] = (((arr_29 [i_5] [i_5] [i_10]) ? var_17 : ((((max(1, var_1))) ? (arr_19 [i_5 - 3] [i_5]) : (119 == var_14)))));
        }
        arr_44 [i_5] = (min(18131, (arr_19 [i_5 - 2] [i_5 - 1])));
        arr_45 [i_5 - 3] [i_5] = ((((1 ? 1 : 18446744073709551607))) ? (((max((arr_26 [i_5 + 2] [i_5] [i_5]), (arr_25 [i_5]))))) : (max((arr_36 [i_5 + 2]), var_12)));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 18;i_11 += 1) /* same iter space */
    {
        arr_49 [i_11] [i_11] = ((14 ? 67107855 : 1803));
        arr_50 [i_11] = (arr_31 [i_11]);
    }
    for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
    {
        arr_54 [i_12] = var_16;
        arr_55 [i_12] = (min((((arr_31 [i_12 + 1]) ? ((min(var_4, var_17))) : ((var_7 << (164353518 - 164353512))))), (arr_31 [i_12])));
    }
    #pragma endscop
}
