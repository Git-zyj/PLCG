/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 -= (arr_2 [i_0]);
        arr_3 [i_0 - 1] = (((((arr_2 [i_0 - 1]) != (arr_0 [i_0 - 1]))) ? 5359 : (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 -= ((var_1 ? (!5363) : ((var_15 ? (arr_5 [i_1] [i_1]) : ((2341297172 * (arr_5 [i_1] [i_1])))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_21 = ((((min(58021, (arr_5 [i_1] [14])))) ? ((((arr_5 [i_2] [i_2]) - 1))) : -3731405879));
            arr_8 [i_2] [i_2] = ((-64 ? var_3 : 0));
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_11 [2] [18] [18] = ((-(min((arr_7 [i_3 - 1] [i_3 - 1] [i_3]), (arr_7 [i_1] [i_3] [7])))));
            arr_12 [i_1] [i_3 + 1] = (((!52) ^ ((783345978 ? (min(2578705912357716928, var_0)) : 38))));
        }
        for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
        {
            arr_15 [i_4] [i_4] [i_4] = (var_4 / 122);
            var_22 *= ((-(((((-(arr_6 [i_1])))) ? ((min((arr_10 [i_1] [i_1]), -64))) : var_16))));
        }
        var_23 -= (min(1878116973, ((2341297170 ? (arr_10 [i_1] [i_1]) : (14581 <= -75)))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = (arr_2 [i_5]);
        arr_20 [6] = ((((arr_10 [i_5] [i_5]) ? ((-62 ? (arr_7 [i_5] [i_5] [i_5]) : 2873995464)) : ((min(-13, var_14))))));
        arr_21 [i_5] [i_5] = ((~((var_11 ? -8276907974652615796 : (var_18 / 50958)))));

        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            arr_24 [i_6 + 3] [10] [i_5] = (min((123 / 115), ((-(arr_13 [i_5] [i_6] [i_5])))));
            arr_25 [i_5] [i_6 + 2] [i_6 + 2] &= (var_15 ? 126 : (arr_16 [i_5] [i_6 + 1]));
        }
        var_25 = var_10;
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = min(((max(0, (((arr_5 [i_7] [23]) ? 4169 : (arr_26 [i_7])))))), (arr_27 [i_7]));
        var_26 = (max(var_26, ((max((var_18 & -123), (((min(70, (arr_1 [i_7]))) & ((var_9 ? (arr_4 [i_7]) : (arr_0 [21]))))))))));
        arr_31 [i_7] = ((~((-(arr_5 [i_7] [i_7])))));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            {
                arr_38 [i_8] [i_8] [i_8] = (max((arr_34 [i_9 - 1] [i_9 - 1]), (min(var_5, (arr_34 [i_9 - 1] [i_9 - 1])))));
                var_27 -= (((var_4 ? -64 : ((~(arr_37 [i_9] [8] [i_9 - 1]))))));
                arr_39 [i_8] [i_9] = (arr_36 [i_8] [i_8] [i_8]);
                var_28 &= (max((((min((arr_33 [i_8]), 0)) >> 1)), (arr_32 [i_8])));
            }
        }
    }
    #pragma endscop
}
