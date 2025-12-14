/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ^ (min(var_1, var_1))));
    var_17 = ((((min(614508134, 0))) ? (((var_6 >= (~var_4)))) : (max(((min(var_4, 65280))), (65535 ^ 65264)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = 314864757255779812;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                arr_7 [i_2] [i_2] [4] [i_1 - 2] = var_14;
                var_19 = ((~(~18446744073709551595)));
                arr_8 [i_1] [7] [11] [i_1] = var_4;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 = ((var_6 & (((0 ? -8 : (arr_5 [i_0] [i_0] [i_0]))))));
                        arr_19 [2] [i_3] [i_5] [i_5] [i_0] = var_15;
                        var_21 = var_12;
                    }
                    var_22 |= (((arr_5 [i_1 + 2] [i_1 - 2] [i_4 - 1]) ? ((0 ? 17108765782936289042 : (-2147483647 - 1))) : 31));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_23 = (min(var_23, var_13));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_24 = (max(var_24, ((((65280 < -16268) ? -25395 : (var_10 >= var_7))))));
                        var_25 = ((-(arr_0 [i_1 + 1])));
                        var_26 = (arr_25 [i_0] [i_3] [i_7]);
                        var_27 = var_12;
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        var_28 |= ((((((arr_6 [i_0] [i_3] [i_6]) ? var_5 : var_7))) ? 17108765782936289028 : ((((arr_22 [i_0] [i_0] [i_6]) - 3680459162)))));
                        arr_28 [i_0] [i_3] [i_0] = ((~(arr_12 [i_0] [i_1 + 1] [i_1 + 2] [i_6])));
                    }
                    var_29 = var_4;
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    arr_31 [i_3] [i_9 - 1] [i_3] [i_9] = (~((95 ? (arr_23 [i_0] [i_0] [i_1] [i_1 + 2] [i_3] [i_3] [i_1 + 2]) : var_0)));

                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        arr_36 [6] [6] [i_3] [0] [0] [i_9 - 1] [0] = var_1;
                        var_30 = 0;
                        var_31 -= 0;
                    }
                    arr_37 [i_3] = -var_12;
                    var_32 -= ((((-(arr_23 [i_0] [i_1 - 1] [i_3] [i_9 + 1] [i_9 + 2] [i_0] [i_9])))) ? ((((arr_3 [i_0] [i_1 + 2]) >= var_2))) : var_5);
                }
                for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_33 = (min(var_33, ((((((var_2 ? var_5 : var_7))) ? (((-32763 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : var_0))) : 8045454362288451944)))));
                    var_34 = (min(var_34, (((var_12 % (614508143 && 614508134))))));
                }
                var_35 = (((((~(arr_33 [i_3] [i_3] [i_1] [i_1] [i_3] [i_3])))) ? ((~(arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((~(arr_5 [i_3] [i_1] [i_0])))));
            }
            arr_40 [i_0] |= (var_14 > var_5);
            var_36 = ((var_2 + (arr_32 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 - 1])));
            var_37 = ((var_5 >= ((var_11 ? 0 : var_0))));
        }
        var_38 -= var_3;
    }
    #pragma endscop
}
