/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_6 ? var_6 : var_6))), (var_8 + var_5)));
    var_12 = ((~((var_3 ? var_7 : var_4))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        var_13 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_1 [i_0]) * var_2)) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 = ((((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? ((var_6 ? var_7 : (arr_1 [i_1]))) : -var_2));
        arr_5 [i_1] = (arr_1 [i_1]);
        arr_6 [i_1] = (!var_4);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_15 = (arr_8 [i_2] [i_2]);
        arr_9 [i_2] [i_2] = (((arr_1 [i_2]) ? 79 : ((((((arr_0 [i_2]) ? (arr_3 [i_2]) : var_8))) ? (arr_3 [i_2]) : ((var_3 ? var_1 : 2785406885669784667))))));

        /* vectorizable */
        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {
            arr_13 [i_3] [i_2] = ((var_6 ? ((((arr_10 [i_2] [i_3]) % var_2))) : var_10));

            for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
            {
                arr_17 [i_2] [i_3 - 3] [i_4] [i_2] = (((((arr_1 [i_2]) ? 53306 : var_0))) == (arr_16 [i_4] [i_3 + 2] [i_2]));
                arr_18 [i_3] [i_3] [i_3] [i_3] = var_5;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            arr_24 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2] = (((!var_0) * var_1));
                            arr_25 [i_2] [i_5] [i_6] [i_2] [i_5] [i_5] = (((((var_1 ? var_2 : (arr_16 [i_3 - 4] [i_4] [i_5])))) ? ((var_8 ? var_3 : var_6)) : (((((arr_11 [i_2] [i_2]) == 79))))));
                            arr_26 [i_6] [i_5] [i_4 - 1] [i_5] [i_3] [i_3] [i_2] = ((-(arr_16 [i_3] [i_3 + 2] [i_3])));
                        }
                    }
                }
                var_16 = ((~(arr_7 [i_4 + 1])));
            }
            for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
            {
                arr_31 [i_7] [i_7] [i_7] [i_2] = var_2;
                arr_32 [i_7] = (-32767 - 1);

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {

                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_17 = var_10;
                        arr_40 [i_8] [i_7] [i_7] [i_8] [i_8] [i_3] [i_7] = ((var_7 ? (var_9 > var_0) : (var_5 & var_7)));
                        arr_41 [i_9] [i_8] [i_7] [i_7] [i_3] [i_2] = ((var_7 ? (arr_15 [i_3 + 4]) : -112));
                    }
                    arr_42 [i_7] [i_7] [i_3] [i_7] = arr_39 [i_2] [i_2] [i_7] [i_2] [i_2] [i_2];
                }
                for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_18 = arr_36 [i_2] [i_7] [i_2];
                    var_19 = ((-(arr_27 [i_7 + 1] [i_10 + 1])));
                }
                for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                {
                    arr_47 [i_2] [i_3 - 4] [i_7] [i_7] [i_11] [i_11] = (((arr_46 [i_7] [i_7] [i_11]) ? (arr_15 [i_2]) : 0));
                    arr_48 [i_7] [i_2] = var_3;
                    var_20 = 1;
                }
                arr_49 [i_7] [i_3] [i_7] = 17079069324088337817;
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            arr_52 [i_2] [i_12] = (((((((((var_9 ? var_0 : (arr_3 [i_12])))) || ((min(var_1, 82))))))) < ((2785406885669784667 >> ((((2785406885669784667 ? (arr_7 [i_12]) : (arr_7 [i_2]))) - 188))))));
            arr_53 [i_2] [i_12] [i_12] = var_1;
        }
        var_21 = arr_28 [i_2] [0];
        var_22 = (arr_33 [i_2] [i_2] [i_2] [6] [i_2] [i_2]);
    }
    #pragma endscop
}
