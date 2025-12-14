/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_1 ? (((((max(0, var_8)) > 255)))) : ((var_8 ? (((-711937522924157218 ? var_9 : 0))) : (~var_5)))));
    var_16 = (max(var_16, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 4] = -711937522924157218;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_4] [i_4] [i_4] = (((arr_5 [i_1] [i_2 - 2] [i_3]) == 711937522924157210));
                                arr_18 [i_4] = ((var_8 ^ (arr_5 [i_0] [i_0] [i_0])));
                                var_17 = (max(var_17, -9));
                                var_18 *= ((((((711937522924157202 ? ((0 ? -711937522924157218 : -1)) : (arr_13 [i_0] [i_1 - 1] [i_3] [i_4]))) + 9223372036854775807)) << ((((+(((arr_3 [i_4] [3] [7]) | (arr_2 [i_0]))))) - 18446744073709551615))));
                                var_19 = (((((min((arr_3 [i_0] [i_1] [11]), (arr_3 [i_0] [i_1] [i_0]))))) | (max((8429510502733019561 | var_12), ((max(-1419940489, 115)))))));
                            }
                        }
                    }
                    arr_19 [i_1 + 2] = (((((~1) ? ((((-84 + 2147483647) >> (arr_0 [19])))) : (((arr_2 [i_1]) << (arr_12 [i_0] [i_1] [i_1] [i_0]))))) == ((max(var_12, ((47157 | (arr_12 [i_0] [i_1 - 3] [i_2] [i_2]))))))));
                    arr_20 [i_2] [i_1 + 3] [i_0] [18] = ((var_2 ? ((+(((arr_2 [i_1 - 1]) ^ 2305843009213693824)))) : (((((min(1617903906, (arr_13 [i_2] [i_2] [14] [i_0])))) ? var_12 : ((((arr_16 [19] [i_1] [i_1] [19] [i_1]) < var_9))))))));
                }
            }
        }
    }
    var_20 = (65535 / 16140901064495857791);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_21 ^= 8;

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_32 [i_7] [i_7] = var_7;
                        var_22 ^= (arr_31 [i_5] [i_7 + 1] [i_8]);
                        arr_33 [i_8] [i_6 - 1] [i_7] [i_6 - 1] [i_5] = var_7;
                    }
                }
                for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    var_23 = ((((((arr_35 [i_9 + 1] [17] [i_6 - 1]) != var_11))) * ((((arr_25 [14] [i_6 - 1] [i_9 - 3] [16]) == 255)))));
                    var_24 = ((((((!var_6) || (((1 ? (arr_30 [i_6]) : (arr_8 [i_5] [i_6] [21] [i_6]))))))) % (((-4988278029005697700 <= 23177) + ((12 ? var_13 : var_9))))));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_25 = (min(var_25, 1137841907));
                                var_26 = 118;
                            }
                        }
                    }
                    var_27 = ((1 - (arr_14 [i_5] [i_5] [1] [1])));
                    arr_46 [i_6] [i_6] = (3852403364 <= var_12);
                }

                for (int i_13 = 2; i_13 < 19;i_13 += 1)
                {
                    var_28 = 11502486948114611529;
                    arr_50 [i_5] [i_5] [i_13 - 1] = 0;
                    arr_51 [5] &= (max(((var_3 | ((max(442563917, (arr_43 [i_13] [i_6 - 1] [i_6 - 1] [i_5] [i_5])))))), ((((((arr_12 [i_5] [i_6] [i_5] [i_5]) << (((arr_10 [i_5] [i_5] [i_5] [21]) - 8384998301154143710)))) - (arr_0 [i_6 - 1]))))));
                }
                var_29 = ((var_6 >= (arr_2 [i_5])));
                arr_52 [i_5] [i_5] = var_14;
            }
        }
    }
    #pragma endscop
}
