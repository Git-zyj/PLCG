/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((((var_10 ? ((var_3 ? 10030134020286427376 : var_19)) : ((7344256802688937877 ? 10030134020286427357 : var_19)))) < var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = var_16;
                var_21 = (min(var_21, (((41071 / (((8416610053423124260 == 24470) ? (min(var_2, 137438822400)) : (((((arr_5 [i_0] [11]) && -6180625766722770113)))))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] &= ((((arr_4 [i_2] [i_2]) >> (6180625766722770115 - 6180625766722770059))) < 814331783453727891);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = (((arr_12 [i_4 + 2]) * (arr_8 [i_4 + 2])));
                    arr_17 [i_4 + 1] [i_2] = 4294967290;
                    arr_18 [i_2] [9] = ((10030134020286427384 + (var_12 && 1114925695)));
                    var_23 = (((arr_14 [3] [i_4 + 1] [i_4 + 2]) < (arr_13 [i_4] [i_4 + 2] [i_4])));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, (1 / 4140184180)));
                        arr_23 [2] = -1;
                    }
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((((((arr_4 [i_4] [i_3]) ? -5862067947896150006 : (arr_22 [i_4])))) ? (((((arr_1 [i_3]) && var_16)))) : 154783135));
                        var_26 *= (((arr_25 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 2]) ? (arr_25 [i_4 + 1] [i_4 + 2] [i_4 - 1] [8] [i_4 - 1] [i_4 + 2]) : var_3));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_36 [i_2] |= (arr_26 [i_9 + 1] [i_7] [i_7] [i_2] [i_7] [i_2]);
                        var_27 = (max(var_27, 137438822407));
                    }
                }
            }
        }
        arr_37 [i_2] [i_2] = ((~(1 && var_4)));
    }
    for (int i_10 = 2; i_10 < 22;i_10 += 1)
    {
        arr_40 [i_10] = (min(-814331783453727918, 4));
        arr_41 [i_10] = (((~241) | ((var_4 ? (!100) : var_5))));
    }
    #pragma endscop
}
