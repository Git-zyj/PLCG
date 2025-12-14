/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 ^= (((((741737049 ? (arr_1 [i_1 + 1] [i_1 + 4]) : (arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3])))) ? (((arr_1 [i_1 + 1] [i_1 + 4]) / (arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3]))) : ((var_2 ? (arr_1 [i_1 + 1] [i_1 + 4]) : (arr_2 [i_1 + 1] [i_1 + 4] [i_1 + 3])))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] = ((~(741737049 | 3553230246)));
                    var_15 *= var_3;
                    arr_7 [i_0] [i_1] [i_0] = var_6;
                    var_16 *= (((((arr_1 [i_0] [i_1 + 2]) ? (!741737049) : (arr_5 [i_1 + 4]))) <= (max((max((arr_3 [i_1]), var_5)), (arr_4 [1] [i_1] [i_1 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((((((((98 ? 1 : 463876669))) ? (((arr_1 [i_0] [7]) ? var_0 : 10685298435883395766)) : -791163019))) ? ((0 ? 1 : -786524709)) : (((!((((arr_3 [i_1]) - 1))))))));
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_17 = (max((min(var_3, var_7)), (((arr_4 [i_3 + 3] [i_1 + 4] [1]) ? (arr_4 [i_3 + 3] [i_1 + 4] [i_3 + 3]) : 1))));
                    var_18 = ((+(((((max((arr_3 [i_1]), 108))) > (741737049 && var_3))))));
                    arr_12 [i_0] = 43812;
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_20 [4] |= (((arr_10 [14] [i_6] [i_6] [i_6]) & (arr_10 [1] [i_1] [i_5 + 3] [i_5])));
                                var_19 = (min(var_19, (((15834 ? 1 : (arr_18 [i_5] [i_5 - 3] [i_5] [i_5] [i_5 + 3] [i_5 - 3]))))));
                                var_20 = ((0 ? 0 : 0));
                                arr_21 [i_0] [i_1] [i_1] [i_0] [1] &= (((arr_2 [i_1 - 1] [i_5 + 2] [i_5]) ? (arr_2 [i_1 + 2] [i_5 - 2] [i_4]) : (arr_2 [i_1 - 1] [i_5 + 2] [i_4])));
                            }
                        }
                    }
                    var_21 *= (~786524709);
                    var_22 = (~3553230247);
                    var_23 -= (((arr_18 [i_1 + 4] [i_1 - 1] [i_1] [i_1 + 4] [i_1 + 4] [i_1]) ? 205 : (arr_13 [i_1] [i_1 - 1])));
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    arr_26 [i_0] [6] [i_7] [i_7] |= (min((max(805306368, ((9929 ? 15204 : 50)))), ((1 ? 1 : 1))));
                    var_24 = ((var_0 >> ((((~-543751968) && (arr_16 [i_0] [i_1] [i_7] [9] [i_7] [i_1 + 1]))))));
                    arr_27 [i_0] [8] &= (arr_19 [5] [i_1] [i_1 + 4] [i_1 + 4] [i_7]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            {
                arr_34 [i_8] [9] = ((~(arr_32 [i_9 + 2] [i_9 + 2])));
                arr_35 [i_9] [i_9] [i_9] = (arr_3 [i_9]);
                var_25 = (115 ? 0 : 1050850535);
                arr_36 [i_8] [i_8] [i_8] &= (((arr_1 [3] [i_9 + 1]) == (((!var_9) >> (((((arr_4 [i_9] [i_9] [i_8]) ? var_5 : (arr_5 [i_8]))) - 1971837610))))));
            }
        }
    }
    #pragma endscop
}
