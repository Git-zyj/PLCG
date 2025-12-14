/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_7;
    var_18 = (min(((var_15 + (var_8 > var_8))), ((1 << (-1 + 22)))));
    var_19 &= var_9;
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = 6472806696979847146;

                for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, ((min((min((((arr_3 [1]) * (arr_8 [4]))), var_3)), (arr_4 [i_0 + 2] [1]))))));
                    arr_9 [i_1] [9] [i_1] = ((((max((arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_3 [i_1])))) || ((((arr_3 [i_1]) ^ (arr_3 [i_1]))))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = (((((3090281309373711603 >= (arr_8 [i_1])))) / (min((arr_1 [i_0 + 1] [i_0 + 1]), 136))));
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_23 = arr_8 [i_1];
                        var_24 = (max((max((((arr_5 [i_4 + 1] [i_4 + 1]) | (arr_6 [20] [i_3 - 1] [i_3 - 1]))), var_12)), ((min(83, (arr_5 [i_0 + 1] [i_0 + 1]))))));
                        var_25 |= ((-1190130181 ? -6054 : -1287811652));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            arr_22 [i_6] [i_5 - 2] [i_1] [i_1] [i_0] [i_0] = var_8;
                            var_26 = (arr_5 [i_0] [i_1 + 1]);
                            var_27 = (max(var_27, (((arr_11 [i_1 + 1] [i_1 - 1] [i_6]) == (arr_11 [i_5 - 1] [i_5 + 1] [i_6])))));
                            var_28 = var_1;
                            var_29 = var_3;
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_30 ^= var_0;
                            var_31 = var_12;
                        }
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_32 = ((var_6 == (arr_25 [i_1] [i_0] [i_1 + 1] [i_1] [i_5 + 1] [4])));
                            var_33 ^= ((((arr_4 [i_1] [10]) & (arr_8 [2]))) - -var_0);
                        }
                        var_34 = ((var_10 > (arr_21 [i_5 + 2] [i_1 + 1])));
                        var_35 &= (arr_14 [i_0 + 1]);
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_36 |= ((var_12 / ((-(arr_3 [6])))));
                        var_37 = (((arr_0 [i_1] [i_1 + 1]) & (var_5 > -869470549)));

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_38 = var_12;
                            var_39 = ((var_16 && (arr_18 [i_0] [i_0] [i_0])));
                            arr_32 [i_10] [i_1] [5] [i_1] [i_0 - 1] = ((var_14 <= ((((arr_16 [i_10] [i_9 - 1] [i_3] [i_3] [14] [i_0 + 1]) >= var_13)))));
                            var_40 = (min(var_40, (((arr_12 [i_1] [10] [i_1] [i_0]) > (arr_20 [i_10] [i_9] [0] [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        var_41 = ((var_8 << (var_16 - 154)));
                        var_42 = (((min((arr_19 [i_0 + 2] [i_1] [20] [i_1] [i_11 + 1]), (~var_6)))) && (arr_21 [i_11] [i_11 - 1]));
                        var_43 = var_7;

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            var_44 = var_7;
                            var_45 -= (arr_38 [1] [i_1] [18] [i_1 + 1] [i_1] [0]);
                            arr_40 [10] [i_3 + 1] [i_1] [i_3 + 1] [i_3 - 1] = ((var_4 ? (arr_8 [i_1]) : (arr_8 [i_1])));
                        }
                    }
                    var_46 = var_12;
                    var_47 = (((arr_30 [i_0] [i_0] [14] [1] [i_3] [i_3] [i_3]) >= (arr_8 [i_1])));
                    var_48 &= (arr_21 [i_1] [i_0 - 1]);
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_49 = var_3;
                            var_50 = var_2;
                            var_51 = max(var_9, (min((-2147483647 - 1), 699626329)));
                        }
                    }
                }
                var_52 = (max((max((var_3 / var_6), var_13)), ((min(var_10, var_7)))));
            }
        }
    }
    #pragma endscop
}
