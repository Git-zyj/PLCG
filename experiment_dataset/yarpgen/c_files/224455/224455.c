/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] = (((arr_6 [i_2] [i_2] [i_2 + 1]) > (arr_6 [i_1] [i_1] [i_2 + 1])));
                                arr_14 [i_0 + 2] [11] [i_0 - 1] [i_2] [i_0 + 2] = -1239939511;
                                var_20 = (max(var_20, (10175 >> 1)));
                            }
                        }
                    }
                    var_21 = (((arr_2 [i_0 + 3]) ? (arr_12 [i_2] [i_0 - 1]) : var_12));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 ^= ((-(arr_15 [i_0] [i_1] [i_2] [i_6 - 3] [i_6])));
                                var_23 = -112;
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, ((((min(524287, 18014398509481983))) ? 65 : (max(4294967295, -2175775174313968316))))));
                    var_25 = (arr_1 [i_1] [i_1]);
                    var_26 = (arr_21 [i_0 + 3] [i_1] [i_7 + 1]);
                    arr_22 [i_0] [i_1] |= (max((arr_10 [i_7] [i_1] [i_0]), (((1 | var_8) ^ (max(-1, 88))))));
                    arr_23 [i_1] [i_1] [i_7] = ((~(min((((157 ^ (arr_8 [i_0] [i_1] [6] [i_7])))), ((-1 ? (arr_3 [i_1]) : 1066684405))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    var_27 = (((arr_20 [i_1]) - var_19));
                    arr_27 [i_0] [i_1] [i_8 + 1] = (((arr_0 [7]) ^ var_3));
                    arr_28 [i_0] [i_1] [i_8] = (arr_24 [i_8 - 1] [i_1] [i_8 + 2] [4]);
                    var_28 = (((arr_8 [i_8 + 1] [i_1] [i_0] [i_0]) * 15));
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_29 = (min(-15285, 2435696828));
                    var_30 = ((((((arr_16 [i_0 + 2] [i_0 + 2]) ? (arr_16 [i_0] [i_0 + 1]) : (arr_16 [i_9] [i_0 - 1])))) != (((arr_19 [2] [i_1] [i_0]) + (!var_4)))));
                    var_31 = (((((+(((arr_20 [i_1]) / (arr_4 [i_0])))))) ? ((((arr_3 [i_9 - 1]) / 1))) : ((min(40775, -22)))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_32 = (var_13 || -648406568);
                                var_33 -= (((((((min((arr_29 [i_0 + 3] [i_9 + 2] [i_10 + 1]), var_17))) * (max(-1929030875, var_6))))) ? -39 : var_3));
                            }
                        }
                    }
                }
                arr_37 [i_0] [8] [i_1] = (max((((arr_24 [i_0 + 2] [i_0] [i_1] [i_1]) ? var_9 : 3920870734032704102)), (((!((min((arr_15 [i_0 - 1] [i_1] [i_1] [i_0] [3]), -1))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 11;i_13 += 1)
        {
            {
                arr_44 [i_12] = (min(101, ((1 ? -1 : (2097151 - var_8)))));
                var_34 = ((((((-1 ? 83 : 11141158470464513511)) - -127)) - 18446744073709551615));
                /* LoopNest 3 */
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            {
                                arr_51 [i_15] [i_15] [i_14 + 1] [i_13] [i_13 - 1] [i_15] |= 1;
                                var_35 = var_13;
                                var_36 = ((-22506 ? -6570338576924364917 : -1));
                            }
                        }
                    }
                }
                var_37 = ((((762409820 ? var_10 : 278157664)) != (arr_19 [i_13] [i_12] [i_12 + 1])));
            }
        }
    }
    #pragma endscop
}
