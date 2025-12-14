/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_8));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_20 = var_17;
        arr_3 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) / (1 * 105))));
        var_21 = (((~0) ? (((((var_1 ? 0 : (arr_0 [i_0])))) ? (((min(0, var_14)))) : (max(var_9, var_13)))) : ((max(2655081719, (min(var_14, -268435456)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = (max(var_22, ((((((0 ? -1 : (arr_5 [11])))))))));
        arr_6 [i_1] [i_1] = (((((+(((arr_4 [i_1]) + var_0))))) ? ((min((min(9988, var_11)), 1))) : var_10));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_1] = (1652682315 * 1);
            var_23 += (~125);
            var_24 = (min(var_24, var_14));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_14 [6] [i_3] [i_3] = (((((((((arr_5 [i_1]) ? (arr_12 [i_1]) : var_1))) ? var_16 : (arr_8 [i_3])))) ? ((min(var_16, -var_3))) : ((~(min((arr_7 [4]), (arr_13 [i_1] [i_1] [i_3])))))));
            var_25 = (min(((~(min((arr_8 [i_1]), var_18)))), ((((arr_12 [i_1]) > (arr_12 [6]))))));
            arr_15 [i_3] [11] [i_1] = ((~(((arr_11 [i_1]) ? ((var_4 ? var_16 : 18446744073709551607)) : (55 >= 9781273085184786933)))));
            arr_16 [i_3] = (min((((arr_13 [i_1] [i_1] [i_1]) & (arr_13 [i_1] [i_1] [i_3]))), (((arr_13 [i_1] [i_3] [i_3]) ? 3946344395 : (arr_13 [i_3] [i_3] [i_1])))));
            arr_17 [i_1] [i_3] [i_3] &= ((((min((arr_5 [i_3]), (arr_5 [i_1])))) ? (((arr_8 [i_1]) ? (arr_8 [i_1]) : var_16)) : (arr_8 [i_3])));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_20 [i_1] [i_4] [13] = 1;
            arr_21 [1] &= (min(((~(min(1, (arr_18 [0] [i_4]))))), ((((~1792) ^ 0)))));
            arr_22 [i_1] [i_1] [i_1] = (min((((57 * 1) ? 1 : ((min(0, 45953))))), (arr_8 [i_1])));
            var_26 ^= ((+(max((arr_5 [i_1]), (arr_11 [i_1])))));
            arr_23 [i_1] = (((min((arr_12 [i_4]), var_15))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_27 &= (((arr_11 [i_5]) ? (((+(((arr_19 [i_1] [i_1] [i_5]) + var_10))))) : (((arr_4 [i_1]) ? (arr_4 [i_1]) : var_5))));
            arr_26 [i_1] [8] = ((~(((((11 ? 128 : (arr_4 [i_1])))) ? (max(var_3, 1)) : ((var_16 ? var_6 : 2642284968))))));
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_28 = (-1326333354 ? ((1050722884859309859 ? 0 : -126)) : 3946344395);
            var_29 = (arr_30 [i_6] [i_7] [i_7]);
            var_30 = -40;
        }
        arr_32 [i_6] = (min(var_8, (((-1688862155725587748 ? (arr_27 [i_6]) : (arr_29 [i_6] [i_6]))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_31 = var_5;
            var_32 = ((var_0 != (arr_39 [i_9] [i_9] [i_8])));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_43 [i_8] [i_10] [4] = (((!var_4) ? (arr_33 [i_8]) : ((var_8 ? 0 : 10))));
            arr_44 [i_8] [i_10] [i_8] = (arr_35 [i_10]);
            var_33 -= ((~(~18446744073709551610)));
        }
        var_34 &= ((3222561198 - ((var_18 ? var_3 : var_16))));
    }
    #pragma endscop
}
