/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_20 -= (min(((((~(arr_0 [i_0] [6]))) * (var_7 == var_1))), (arr_0 [i_0] [4])));
        var_21 &= (((arr_1 [i_0]) << (15257831656827972600 <= 2111717939)));
        arr_3 [i_0] [i_0] = (max((max((min(var_3, 2183249356)), ((((arr_1 [i_0]) != (arr_1 [i_0])))))), (arr_1 [1])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((arr_0 [i_1] [4]) >> (-31 + 36)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = (arr_4 [10]);
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_0 [6] [6]) ? (max(((90 ? var_2 : (arr_6 [i_1]))), (((arr_6 [i_1]) % var_19)))) : (((max(0, var_4))))));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_23 = (min(((((arr_14 [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5 + 1] [i_6]) == (arr_14 [i_2 - 1] [i_2] [i_2] [i_2] [i_5])))), (arr_14 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5 + 2])));
                            var_24 = ((((!(arr_2 [i_6]))) && ((!(-32767 - 1)))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_23 [i_5] [i_2] [i_3] [i_5] [i_3] [i_7] [i_5] = (max((((~(arr_16 [i_2 - 1] [i_2 - 1])))), (min(9097912830966376199, var_14))));
                            var_25 = ((!((((arr_5 [i_7]) << (((arr_9 [i_1] [i_5] [9]) - 1950565409)))))));
                        }

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_26 = ((~(((arr_9 [i_5 + 3] [i_5] [i_5]) ? (arr_12 [i_5 + 3]) : (arr_2 [i_8])))));
                            var_27 = arr_5 [i_1];
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_28 &= (arr_0 [i_2 - 1] [10]);

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_29 += ((~(arr_19 [i_2 - 1] [i_2 - 1] [8] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])));
                            var_30 = (arr_10 [i_2] [i_2 - 1] [1]);
                            var_31 = var_18;
                            var_32 = (((arr_11 [i_9] [i_3] [2]) ? (arr_28 [i_9]) : ((var_8 + (arr_18 [i_1] [i_2] [i_3] [5] [i_9] [8] [i_10])))));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_33 = (arr_1 [i_2 - 1]);
                            var_34 = (((arr_14 [i_1] [2] [i_3] [i_9] [i_11]) ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_35 = (arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                            var_36 = ((!(2111717942 <= var_18)));
                        }
                        var_37 = (~(arr_24 [i_9] [i_3] [i_2]));
                    }

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_35 [i_1] [i_3] [i_3] [i_12] = (((6545519258236033978 && -32761) | (arr_11 [i_2 - 1] [i_2 - 1] [i_2])));
                        var_38 ^= ((((max((arr_27 [8]), (((arr_24 [i_1] [i_2] [i_2]) ? var_1 : var_12))))) ? var_8 : (((((arr_28 [4]) * (arr_17 [i_12] [i_3] [i_2] [7])))))));
                    }
                    arr_36 [i_3] = ((((((arr_12 [i_2 - 1]) ? (arr_12 [i_3]) : (arr_12 [i_1])))) ? (((arr_18 [i_1] [i_1] [i_1] [i_2 - 1] [i_3] [0] [9]) | (arr_18 [i_1] [i_2 - 1] [i_3] [i_1] [i_1] [i_1] [i_1]))) : (arr_4 [i_3])));
                    var_39 = (max(var_39, ((max(0, 18446744073709551608)))));
                    var_40 = ((!(arr_27 [6])));
                }
            }
        }
        var_41 = var_14;
        var_42 = (arr_26 [8]);
    }
    var_43 = ((((((var_3 && var_15) ? (var_16 - 1400079971) : (min(var_9, var_17))))) ? ((min(-var_5, (var_4 <= var_14)))) : (((((var_9 ? var_1 : var_11))) ? var_4 : -var_12))));
    var_44 = var_7;
    #pragma endscop
}
