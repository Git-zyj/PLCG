/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = (((((var_11 ? var_11 : 2147483644)))) ? (((((var_7 ? 255 : var_0))) ? (!var_4) : var_0)) : var_7);
    var_15 = min(((~((var_7 ? var_5 : var_6)))), (!65533));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_16 = ((~((max((arr_3 [i_1 - 1] [i_1]), (max(var_8, var_9)))))));
            arr_7 [i_1] [i_1] = ((((-(arr_5 [i_1 + 2]))) != (arr_5 [i_0])));
            arr_8 [i_1] [i_1] = (((((var_10 ? 710848664 : (max(0, (arr_1 [i_1 + 2] [i_0])))))) ? 4223082556800981085 : (arr_0 [i_0] [i_0])));
        }
        arr_9 [6] = 2;
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_21 [i_2] [14] [i_4] = (arr_20 [i_2]);
                    var_17 = ((((((arr_16 [i_4]) ^ -var_6))) ? ((var_10 ? (arr_0 [i_3] [i_3]) : (!4223082556800981085))) : (((arr_15 [i_4] [i_3] [i_2]) ^ ((1 ? var_8 : (arr_6 [i_2])))))));
                    var_18 = ((((((max(var_12, (arr_5 [i_2])))) ? ((var_7 ^ (arr_15 [i_2] [i_3] [3]))) : (max(2147483622, (arr_16 [3]))))) / ((((min((-127 - 1), var_1))) ? ((var_11 ? -868711964 : var_0)) : var_2))));
                }
            }
        }
        arr_22 [i_2] = (arr_2 [i_2]);
        arr_23 [8] = (((arr_15 [i_2] [8] [i_2]) ? ((((max((arr_6 [i_2]), var_4))) ? (((arr_12 [i_2] [i_2]) << (var_5 - 23963))) : (arr_3 [i_2] [i_2]))) : ((var_12 >> (((max(var_12, (arr_15 [i_2] [i_2] [i_2]))) - 1699070952))))));
        var_19 = max((min((max(-4223082556800981086, (arr_20 [i_2]))), (((!(arr_2 [1])))))), (((!(((var_11 ? (arr_12 [i_2] [i_2]) : 1169397624760973512)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                var_20 = ((((((arr_4 [i_5] [i_6] [i_6]) / (arr_27 [i_6])))) ? (arr_24 [i_5]) : (((arr_4 [i_5] [i_5] [8]) ? var_10 : (arr_4 [i_6] [i_5] [i_5])))));
                arr_28 [11] = var_6;
                var_21 = (max(((var_7 ? (((arr_25 [i_5]) ? 1 : (arr_17 [1] [i_5] [i_6]))) : (((arr_14 [i_5]) ^ (arr_17 [19] [i_6] [i_5]))))), (arr_11 [i_6])));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_31 [i_7] [i_6] [1] = ((-2124498122 ? 32763 : 48));
                    arr_32 [i_7] [2] [2] = ((((max((((arr_0 [i_5] [i_5]) ? var_4 : var_10)), 65534))) || ((max((arr_26 [i_5]), var_11)))));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_35 [i_5] = (max((((((arr_15 [i_8] [i_6] [i_5]) ? var_3 : (arr_17 [i_5] [i_5] [i_8]))) ^ ((min(var_4, 15053))))), ((var_5 ? (arr_4 [i_8] [i_6] [i_5]) : (arr_33 [i_6] [i_6] [i_8])))));
                    arr_36 [i_5] [i_5] [1] = (arr_16 [i_6]);
                    var_22 = var_12;
                    var_23 = ((-(!-113901247)));
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    arr_40 [i_9] [11] [i_9] [i_6] = -27567;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_24 = (((!21) / (arr_11 [i_9 + 1])));
                                var_25 = var_1;
                            }
                        }
                    }
                    arr_46 [i_9] = (((arr_45 [i_9] [i_9] [i_9] [i_6] [i_5]) >= -27572));

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_26 = 237594356;
                        var_27 = (!(((arr_39 [i_9] [i_5]) >= (arr_17 [2] [i_6] [i_9]))));
                    }
                    var_28 = var_11;
                }

                /* vectorizable */
                for (int i_13 = 1; i_13 < 17;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_56 [i_14] [i_6] [i_6] [i_6] = (~(32767 || 1));
                        var_29 = var_1;
                        var_30 = (!1595348165);
                    }
                    for (int i_15 = 1; i_15 < 18;i_15 += 1)
                    {

                        for (int i_16 = 1; i_16 < 17;i_16 += 1)
                        {
                            var_31 = (arr_52 [i_16 + 1]);
                            arr_61 [i_5] [i_6] [i_13 + 1] [i_15] [i_16] = var_10;
                            arr_62 [i_16] [i_15] [i_5] [i_15] [i_5] = var_12;
                            arr_63 [1] [i_15] [i_15 - 1] [18] = ((!(arr_33 [i_16 - 1] [i_15 + 1] [i_13 - 1])));
                        }
                        for (int i_17 = 2; i_17 < 17;i_17 += 1)
                        {
                            var_32 = (arr_14 [i_6]);
                            arr_66 [i_15] = (((((arr_50 [9] [12]) ? 43294 : (arr_24 [i_5]))) ^ ((9223372036854775807 ? (arr_18 [13] [13] [i_13] [15]) : (arr_6 [i_5])))));
                        }
                        var_33 = (arr_49 [i_15 + 1] [i_15] [i_15] [i_5]);
                    }
                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        var_34 = (((arr_44 [i_13] [i_13] [i_13] [i_13]) ? (var_4 | var_11) : (var_12 ^ var_10)));
                        arr_70 [i_6] [13] [15] [i_6] = var_0;
                        var_35 = ((-1055117446 ? (arr_18 [8] [i_13 + 1] [i_13 + 1] [i_13 + 1]) : (arr_18 [12] [6] [i_18] [i_13 + 1])));
                    }
                    arr_71 [i_5] [i_5] [5] = (arr_34 [i_6]);
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    arr_75 [i_5] [11] [i_5] = var_10;
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 18;i_21 += 1)
                        {
                            {
                                arr_80 [i_5] [i_20] = (~(!var_4));
                                arr_81 [16] [i_6] [i_6] [i_20] [i_20] [i_21 + 1] [i_21] = var_7;
                                var_36 = (arr_15 [i_19] [i_6] [i_5]);
                                var_37 = 9223372036854775807;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
