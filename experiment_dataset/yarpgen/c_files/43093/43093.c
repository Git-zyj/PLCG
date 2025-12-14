/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((var_6 ? ((max((arr_3 [i_0]), 255))) : 1))) ? ((var_8 ? ((14354 ? (arr_1 [i_0]) : 0)) : (arr_0 [i_0] [i_0]))) : (~var_1)));
        arr_4 [i_0] [i_0] = var_1;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = var_11;
            var_17 ^= (max(14, 2094305627));
            var_18 = ((((min((~var_8), (((!(arr_2 [i_1]))))))) ? 2604011815490124230 : var_13));
        }
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_19 ^= (min(0, 237));
        arr_14 [i_2] = (min(var_13, (5 + 508018117)));
        var_20 ^= (~6);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_21 ^= (max(((var_12 ? (arr_18 [i_3]) : -7)), (max(180, (arr_18 [i_5])))));
                    arr_23 [i_5] [i_4] [i_4] [i_5] = ((var_10 ^ (~188)));
                    arr_24 [i_5] [i_5] = ((var_14 ? 69 : (arr_18 [i_3])));
                    var_22 = (min((arr_1 [i_3]), ((168 ? var_7 : (arr_19 [i_3] [i_4] [i_5])))));
                }
            }
        }

        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            arr_28 [i_6] [i_6 + 1] = var_15;
            arr_29 [i_6] = (arr_26 [i_3] [i_3] [i_3]);
        }
        var_23 = (min(var_23, 216));
        arr_30 [i_3] = (min(((~(arr_6 [i_3] [i_3]))), (((-1 < (max(9221120237041090560, 76)))))));
        var_24 = (min(var_24, 1));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_35 [i_7] = (+-1);
        var_25 ^= (max(((44071 ? ((var_12 ? (arr_31 [i_7]) : (arr_13 [i_7] [i_7]))) : var_15)), (1404618512 >= -2030589972)));
    }
    var_26 = (max((((max(var_15, var_7)) + var_13)), 187));

    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        var_27 = (min(var_27, var_0));

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_41 [i_8 - 1] [i_8 - 1] [i_8] = ((var_1 ? var_1 : (((arr_16 [i_8 + 1]) | (1295628098 | var_10)))));
            var_28 = ((((min((arr_40 [i_9] [i_8 - 2]), (arr_40 [i_8] [i_8 - 1])))) * (arr_40 [i_8 - 2] [i_8 + 1])));
        }
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_29 = ((var_6 >> (((arr_43 [i_10 + 2]) - 18446744073709521785))));
        var_30 ^= var_14;
    }
    #pragma endscop
}
