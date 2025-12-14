/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 ? (((((var_16 ? var_17 : 13310023510106990570))) ? var_4 : 16)) : ((min(((var_14 ? var_11 : var_13)), var_13)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 += ((var_12 ? ((var_13 ? ((min(var_5, -2038))) : (((((arr_3 [i_0]) + 2147483647)) << (var_6 - 4073403827191387733))))) : (((arr_3 [i_0]) ? (min(1, 1297751236)) : -var_9))));
        var_20 += ((((((arr_0 [10]) | var_10))) % (((((var_13 ? var_14 : 248))) ? var_11 : (min(224, var_0))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] = ((((((arr_9 [10] [i_0] [i_2 - 1] [i_0]) ? (arr_9 [7] [i_0] [i_2 - 1] [21]) : var_9))) ? (min(var_3, 109506779)) : ((((arr_9 [i_0] [i_0] [i_2 - 1] [i_0]) % var_2)))));
                    var_21 -= (((((-1614761692 ? var_0 : (((-2090482738319207840 ? (arr_1 [2]) : var_5)))))) ? (min(-6336516031381176988, (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((~101) - (arr_11 [i_3 - 2] [i_1] [1] [i_4]))))));
                                var_23 = (arr_11 [i_0] [i_0] [i_0] [i_4]);
                                var_24 = min(((((((~(arr_13 [i_0] [i_1] [i_1] [i_3] [i_4]))) + 2147483647)) >> ((((-1297751237 ? var_0 : var_16)) + 6444354025636650529)))), (((!((max(var_1, 252)))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] = (-(((1614761694 - -6478261060627404933) ? var_0 : (((arr_12 [19] [i_0] [i_0] [i_0] [2] [i_4]) & 11411499968419521644)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == zero) ? (((((((min(var_16, 0))) ? ((var_7 ? (arr_8 [i_0] [i_1]) : var_9)) : (arr_11 [i_1] [i_0] [i_1] [i_2 - 1]))) << ((((min(248, var_5))) ? (((var_11 ? (arr_0 [i_0]) : (arr_1 [i_0])))) : (~var_15)))))) : (((((((min(var_16, 0))) ? ((var_7 ? (arr_8 [i_0] [i_1]) : var_9)) : (arr_11 [i_1] [i_0] [i_1] [i_2 - 1]))) << ((((((min(248, var_5))) ? (((var_11 ? (arr_0 [i_0]) : (arr_1 [i_0])))) : (~var_15))) - 46)))));
                }
            }
        }
        arr_17 [i_0] [i_0] = ((-((((((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [2] [i_0] [i_0]) : 128))) ? ((var_13 ? var_14 : var_11)) : -var_2))));
        var_25 += ((-var_0 / (min(-109, (~var_14)))));
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        arr_21 [i_5] &= (min((((arr_18 [i_5 - 2]) ? var_7 : 44765)), ((-(arr_2 [i_5 - 4])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                {
                    arr_26 [i_6] = var_4;
                    arr_27 [i_6] = (!var_11);
                    arr_28 [1] [i_6] [i_7 - 2] = (((min((arr_13 [i_5 - 2] [i_7 + 2] [i_7 + 2] [i_6] [i_6]), (arr_22 [i_6] [i_5 + 2] [i_7 + 2]))) | (arr_6 [i_5 - 4] [i_6] [i_7])));
                    arr_29 [i_6] [i_6] = -1;
                }
            }
        }
        var_26 |= ((min(var_3, (arr_0 [i_5]))));
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                arr_38 [i_8 - 1] = (min((((arr_25 [i_8]) * -6710267663454245495)), (((var_11 ? var_4 : (~35))))));
                var_27 = 205;
                var_28 ^= (((((var_6 ? var_14 : (arr_5 [i_8] [i_8 + 1])))) ? ((-((1 ? var_13 : var_0)))) : (((((-(arr_1 [i_8 - 1])))) ? var_0 : var_15))));
                var_29 = (min((arr_35 [1] [i_9]), (arr_12 [i_8] [i_8 + 1] [i_9] [i_8 + 1] [6] [2])));
            }
        }
    }
    #pragma endscop
}
