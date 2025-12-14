/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_2 % var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] = ((max(var_15, var_3)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_0] [i_3] [0] = ((~((min((arr_11 [i_4] [i_3] [i_2 + 1] [i_2 + 1]), (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 3] [i_2 + 3]))))));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = (max(((108 ? 6766366480061270332 : (arr_12 [i_2 + 1] [i_2] [i_1 + 1]))), (min(6766366480061270335, (arr_2 [i_1 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [5] [5] [5] [i_6] [i_6] = (max((((((20035 ? 12103 : 45487))) ? ((((arr_10 [i_0] [i_1] [i_1] [i_6 - 1] [5]) & var_6))) : (min((arr_11 [i_0] [i_0] [i_5] [6]), (arr_2 [i_1 - 1]))))), var_10));
                            arr_24 [i_0] [i_1 - 1] = (min((((min((-9223372036854775807 - 1), 31457280)))), 9223372036854775806));
                            arr_25 [i_0] [i_0] = ((-(max(21992, (min(8290, -1190313763859524147))))));
                        }
                    }
                }
                arr_26 [i_0] [i_0] |= (min((((-9223372036854775807 - 1) / -8980634930876452216)), 1347717640));
            }
        }
    }
    var_19 = ((((((var_11 + var_10) ? ((1386003831 ? -5460630454798004231 : 0)) : 127))) || (~220)));

    /* vectorizable */
    for (int i_7 = 2; i_7 < 15;i_7 += 1)
    {
        arr_29 [1] [i_7] = (var_11 ? (arr_27 [i_7 + 1] [i_7 - 1]) : var_4);
        arr_30 [i_7 + 1] = ((var_0 ? (arr_28 [i_7] [i_7 - 2]) : 2339414934));
        arr_31 [i_7] = (var_0 ? var_17 : 3267565550);
        arr_32 [i_7 - 1] [i_7] = ((1636397991 ? 127 : -8802500867970926554));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_37 [i_8] = ((~(15460 / 115)));
        arr_38 [i_8] = ((((max(var_4, (min(5310092736597151662, var_14))))) ? (min(var_9, (arr_33 [i_8] [i_8]))) : var_0));
        arr_39 [i_8] = ((~((var_6 ? (~213) : ((var_2 ? (arr_33 [i_8] [i_8]) : var_8))))));
    }
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                {
                    arr_48 [i_11] [i_10 - 1] [i_11] = (((arr_44 [i_11]) ? ((min((arr_44 [i_11]), (arr_44 [i_11])))) : -var_4));
                    arr_49 [i_11] = (var_13 ? (((min((arr_43 [i_11 + 1]), var_11)))) : (max(((max(1, 1))), (max((arr_44 [i_11]), (arr_47 [i_10] [i_10] [i_11]))))));
                }
            }
        }
        arr_50 [i_9] = (min((-7277761849911126760 <= var_17), (1 != 40022)));
    }
    #pragma endscop
}
