/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? ((14267221326218822708 & (min(var_2, var_9)))) : ((min(((var_1 ? 2147483645 : var_2)), var_2)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((18446744073709551611 >= (arr_0 [0] [i_0])))) >= ((-76 ? (arr_0 [i_0] [i_0]) : 2147483640))));
        var_12 = ((((((arr_1 [i_0] [i_0]) * 255))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((var_5 ? var_5 : 2147483628));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_3] [i_3] [i_5] [i_3] [i_4 + 1] = ((~(((!-2147483628) ? (arr_9 [i_3]) : (((arr_17 [4] [i_3] [4] [i_4 - 1] [14] [2]) ? var_3 : (arr_7 [i_2] [i_5])))))));
                                arr_19 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] = (((min((arr_13 [i_1 + 1] [i_1]), (arr_8 [i_1 - 1] [i_1 - 2] [i_4 - 1])))) * (arr_8 [i_3] [i_1 - 1] [i_4 + 1]));
                            }
                        }
                    }
                    arr_20 [6] [11] [i_1] = ((+((((((arr_7 [i_1 + 1] [i_2]) ? var_8 : (arr_10 [i_1] [i_2])))) ? (((arr_11 [i_1] [i_2] [i_3] [i_1]) ? 23862 : (arr_7 [i_1 - 2] [i_2]))) : 2147483629))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        var_13 = (min(var_13, ((((arr_11 [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6]) == (arr_13 [i_6] [2]))))));
        arr_25 [i_6] = ((var_7 ? -2147483644 : (arr_11 [i_6 + 1] [i_6 - 2] [i_6 + 1] [i_6 - 2])));
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        var_14 = (min((arr_26 [i_7 - 2]), 2147483625));

        /* vectorizable */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            var_15 = (min(var_15, -2147483640));
            var_16 = (((!29053) ? (~18446744073709551614) : var_6));
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                {
                    arr_35 [i_10 - 1] [7] [i_7] = (arr_34 [i_9]);
                    var_17 = (max(var_17, (((((((arr_29 [1] [i_9] [i_10 + 1]) ? (arr_28 [i_7 - 2] [i_9] [11]) : (arr_30 [i_7] [i_7] [i_7])))) ? ((((arr_29 [i_9 + 2] [i_9 + 1] [i_7 + 1]) ? (arr_27 [i_9 - 1] [i_7 + 1]) : (arr_27 [i_9 - 1] [i_7 + 1])))) : ((((min(var_3, (arr_30 [i_9] [13] [i_9 + 2])))) ? 156 : (max(176, var_3)))))))));
                    var_18 = ((((max((arr_34 [i_10 - 3]), (arr_32 [i_7] [i_10 - 3] [i_10] [i_7 - 1])))) == ((var_9 ? ((var_7 ? 158 : (arr_27 [i_7] [i_9]))) : (arr_27 [i_10 - 2] [i_9 + 1])))));
                }
            }
        }
        arr_36 [i_7 - 1] = (min((((((arr_31 [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_32 [i_7 - 1] [i_7 - 2] [i_7] [i_7 + 1]) : (arr_26 [i_7]))) + (((arr_34 [i_7]) ? 43 : (arr_33 [i_7] [i_7 - 1] [i_7]))))), (arr_34 [i_7 + 1])));
        arr_37 [i_7 - 1] = (((arr_30 [i_7 - 2] [i_7 - 2] [i_7]) && ((((arr_34 [i_7 + 1]) ? (arr_33 [i_7 + 1] [i_7] [i_7]) : ((11456 ? var_8 : (arr_28 [4] [i_7] [i_7]))))))));
    }
    #pragma endscop
}
