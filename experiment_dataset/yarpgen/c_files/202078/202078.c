/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [24] |= (!1);
        var_12 = ((-(var_8 >= var_1)));
        arr_3 [i_0] [i_0] = ((var_2 ? 37631 : 2147483642));
        var_13 = (((13544374208152374187 ? var_4 : 62206)));
        var_14 = (((((arr_1 [i_0]) ? 27898 : var_1))) ^ (var_4 | var_0));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (((((var_10 + (((arr_1 [10]) ? var_7 : var_9))))) ? (arr_0 [i_1]) : ((var_4 ? (((arr_1 [24]) - var_5)) : (var_2 + 0)))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_16 = (var_3 == var_1);
            arr_9 [i_1] [i_2] = ((-(arr_5 [i_2])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_17 = ((((+(max((arr_0 [i_1]), (arr_4 [i_3]))))) << ((min(29117, (arr_7 [i_1] [i_1] [i_3]))))));
            arr_12 [i_1] [1] [i_3] = -1209947386;
            var_18 &= (max((var_6 ^ 6704220212442787957), (((var_7 ? var_1 : (arr_6 [i_1]))))));
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 14;i_4 += 1)
        {
            var_19 |= (((arr_8 [4] [i_1]) ? 2852090185530996325 : (arr_1 [i_4])));
            var_20 ^= (((arr_1 [i_4]) <= var_3));
        }

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_17 [i_1] [i_5] = (((min((30344 | 16392326110775380989), 18446744073709551615)) / -var_6));
            arr_18 [i_1] = (((-62206 ? ((var_4 ? var_3 : var_1)) : 62280)));
            arr_19 [i_5] = ((150 ? var_5 : ((max(22, (arr_11 [i_1] [i_5]))))));
        }
        var_21 = (((!(-1 || 11742523861266763676))) && ((!(arr_8 [i_1] [i_1]))));
    }
    var_22 = (!(var_9 / var_10));
    var_23 &= var_5;
    var_24 = 0;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [i_7] [i_10] [i_8] [4] [i_6] = (((((-(arr_28 [6] [i_9 - 1] [i_10 - 1] [6] [i_10])))) + 1));
                                arr_32 [i_6] [i_7 - 1] [i_8] [i_8] = (1 + 0);
                                var_25 = (!var_3);
                            }
                        }
                    }
                }
                arr_33 [i_6] [i_6] = 7446;

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_26 = (max(var_8, (((!((max(var_4, 48224))))))));
                    arr_36 [1] [i_7 - 1] [i_11] = (max(((29233 ? 1 : 1)), ((max(1, 58190)))));
                }
                var_27 = ((((((((arr_26 [i_7]) <= (arr_27 [i_6] [i_6] [i_6] [i_7 + 1] [i_7]))) ? (arr_27 [i_6] [i_6] [i_6] [i_6] [i_7]) : (max(var_11, 67108800))))) <= (((var_4 + 4902369865557177433) ? 11742523861266763663 : ((var_9 ? (arr_21 [i_6]) : 21))))));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {

                            for (int i_14 = 1; i_14 < 1;i_14 += 1)
                            {
                                var_28 -= (((65535 + 134) ? (1958613190 == -1287489467) : (((((var_8 ? var_11 : 1))) ? (arr_20 [i_6] [i_6]) : var_10))));
                                var_29 |= 190;
                            }
                            var_30 = -462821997553022326;
                            var_31 -= ((var_10 ? ((max((arr_28 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 + 1]), (arr_28 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))) : 11742523861266763670));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
