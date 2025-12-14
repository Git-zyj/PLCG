/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((252 / (max(var_5, var_10))))) ? 1 : ((min(var_8, ((max(var_6, 3))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 *= (arr_4 [i_0] [i_0]);

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            var_13 = (!var_10);
                            var_14 &= (((var_0 ? (((((arr_9 [i_1] [i_4] [i_3]) != 64)))) : ((64 ? var_9 : 0)))) * ((((arr_3 [i_2]) ? var_4 : (arr_7 [i_0] [i_1] [i_3])))));
                            arr_18 [i_0] [i_3] [i_2] [i_3] [i_1] [i_4] &= (~(((!5) & 249)));
                            var_15 ^= ((((max((min(var_0, (arr_4 [i_1] [i_4]))), ((max(264919663, var_10)))))) || var_2));
                            arr_19 [i_0] = ((var_5 && (~50)));
                        }
                        for (int i_5 = 2; i_5 < 22;i_5 += 1)
                        {
                            var_16 = (max(((((max(var_8, 64))) ? (arr_5 [i_1] [i_0]) : (((arr_3 [i_0]) ? 60 : var_7)))), (arr_7 [i_5 - 1] [i_1 - 3] [i_0])));
                            var_17 ^= (((arr_16 [i_2] [i_3]) ? (arr_13 [i_2]) : var_1));
                            var_18 = ((13804 ? (max(115, var_7)) : (81 || -58)));
                        }
                        var_19 = ((((~(arr_21 [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 3]))) >= (((!(arr_21 [i_1 - 3] [i_1] [i_1] [i_1 - 3] [i_1 - 3]))))));
                        var_20 *= ((--0) << ((((var_7 * (arr_8 [i_1] [i_2]))) + 218893475)));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_21 ^= (!var_5);
                        var_22 = (max(-61, 31));
                        arr_24 [i_1] [i_1] [i_2] [i_0] [i_6] = (((arr_10 [i_6] [i_0] [i_2] [i_1]) & ((((var_9 + var_5) ? ((var_9 ? var_4 : 174)) : (-27 / var_7))))));
                    }
                    var_23 = var_6;

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_24 = var_6;
                        var_25 = (arr_16 [i_0] [i_7 + 2]);

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_26 = (((!var_5) ? -1833774796 : ((~((4026531840 ? var_6 : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] [i_2])))))));
                            var_27 = (!7991381893344287506);
                            var_28 = 0;
                        }
                        var_29 = var_1;
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_9] = (((arr_16 [i_0] [i_1 - 1]) ? (max((arr_16 [i_0] [i_1 - 3]), (arr_16 [i_0] [i_1 - 2]))) : var_0));
                        var_30 = (max(var_30, ((((((4294967249 ? 1153695624 : 81))) ? (((!((((arr_16 [i_2] [i_1]) ? var_9 : (-9223372036854775807 - 1))))))) : (((51739 || 41490) ? ((min((arr_13 [i_2]), 0))) : -var_3)))))));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_31 = arr_8 [i_0] [i_0];

                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_32 = (max(var_32, ((~(~var_10)))));
                            arr_41 [i_2] [i_2] [i_2] [i_0] |= (((max((var_1 <= var_3), ((var_3 ^ (arr_22 [i_0] [i_0] [i_0]))))) > (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_33 = ((((39050 ? (1043356533 | -1043356540) : (((!(arr_30 [i_0] [i_1] [i_2] [i_10] [i_10])))))) | (~238)));

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_34 = ((-(((var_4 - var_5) ? ((16410374216740718764 ? (arr_33 [i_0] [i_1] [i_10] [i_12]) : (arr_43 [i_0] [i_1] [i_2] [i_0] [i_12]))) : (arr_15 [i_1 - 1] [i_0] [i_1 - 4] [i_1 - 4] [i_12])))));
                            var_35 = -1;
                        }
                    }
                    var_36 = (max(var_36, (((((min(var_9, (arr_8 [i_1 - 1] [i_2])))) | (((arr_8 [i_1 - 1] [i_2]) ? (arr_8 [i_1 - 1] [i_2]) : (arr_8 [i_1 - 1] [i_2]))))))));
                }
            }
        }
    }
    #pragma endscop
}
