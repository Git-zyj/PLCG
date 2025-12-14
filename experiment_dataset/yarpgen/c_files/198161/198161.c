/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 246;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 *= ((((!(arr_0 [i_2]))) ? var_6 : (arr_11 [i_1] [i_1] [i_2] [i_1] [i_0])));
                        arr_12 [i_2] = (((arr_1 [i_1] [i_3]) <= 217));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (arr_11 [i_3] [i_1] [i_2] [i_4] [i_2]);
                            var_16 += 602525231;
                            var_17 = (max(var_17, ((((arr_13 [i_0] [i_1] [i_2]) << (arr_13 [i_0] [i_0] [19]))))));
                            var_18 = (min(var_18, (((((17400848551874780197 && (arr_3 [3]))))))));
                            var_19 += (((((var_4 ? 11452 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_4])))) ? var_12 : (arr_4 [12] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_20 = (max(var_20, (((~(arr_0 [i_1]))))));
                            arr_21 [i_2] = (arr_13 [i_0] [i_0] [i_0]);
                            var_21 |= (((arr_4 [i_2] [i_2]) | var_3));
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_0] = (((arr_1 [i_0] [i_3]) ? (((602525229 ? (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]) : 40424))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_2])));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_25 [18] [i_1] [i_2] [10] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_22 = (max(var_22, (((((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_6]) + 9223372036854775807)) >> (3692442064 - 3692442063)))) ? (((arr_23 [i_0] [9] [20]) ? var_7 : var_4)) : 25)))));
                        }
                        var_23 |= 18225;
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [1] [i_2] = ((1 <= (arr_23 [i_0] [i_0] [i_0])));
                        arr_29 [i_2] = ((!(((arr_7 [i_2] [i_1] [i_0] [i_7]) <= (arr_16 [i_2])))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_33 [i_2] [i_8] [11] = (arr_32 [i_2] [14]);
                        arr_34 [i_2] [i_1] [i_1] [2] = ((~((var_4 ? var_4 : (arr_2 [i_2])))));
                        var_24 = (arr_7 [8] [i_2] [i_0] [i_0]);
                        var_25 *= 1;
                        arr_35 [i_2] [i_2] [i_2] [i_2] [1] = var_10;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_40 [20] [i_1] [20] [i_0] |= (arr_19 [i_2] [i_1] [i_2] [i_1] [i_0]);
                        arr_41 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9] |= var_9;
                    }
                    var_26 = var_6;
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_44 [i_0] [i_1] [i_1] [i_0] |= var_11;
                    var_27 = ((!(((arr_6 [i_1]) != var_6))));
                    var_28 ^= var_8;
                }
                for (int i_11 = 2; i_11 < 20;i_11 += 1)
                {
                    var_29 = (max(var_29, ((((((7155074554449647920 ^ (arr_46 [i_0] [9] [i_0] [i_0])))) ? (min(var_3, ((min((arr_30 [i_0] [i_0] [i_0] [i_0]), 1))))) : ((max(((var_4 ? var_2 : (arr_9 [i_0] [i_1] [i_1] [i_11 - 1]))), 1))))))));
                    var_30 = (max(var_30, var_2));
                }
            }
        }
    }
    var_31 |= ((606057901 ? ((var_9 ? ((max(var_1, var_11))) : (~var_3))) : 1));
    #pragma endscop
}
