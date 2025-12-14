/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_12)) : 2036625340);
        arr_2 [i_0] = ((~(~1)));
        var_14 -= (((arr_0 [i_0]) ? (((arr_0 [i_0]) ? ((120 ? 6496409992494324161 : var_3)) : var_4)) : (((((min(67108352, -32755))) ? (arr_1 [7] [i_0]) : -12456)))));
        var_15 = (((((0 || (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_16 = (min(var_16, (arr_1 [i_1 - 1] [i_1])));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_17 = (max(var_17, ((((-2147483647 - 1) ? (((((-2147483647 - 1) == var_4)) ? (((arr_5 [i_1 + 1] [6]) ? 64 : 0)) : (18446744073709551598 | var_2))) : (((((var_12 ? var_5 : 255)) ^ ((-67108370 ? 255 : -17210))))))))));
            arr_8 [i_2] = ((var_11 ? (-2147483647 - 1) : (((var_7 / -67108333) ? (min((arr_0 [i_1]), var_9)) : ((var_6 / (arr_7 [i_2])))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_19 [i_1] [i_3] [i_4] [i_5] [i_6] [i_6] [i_1] = (((arr_1 [i_6 + 1] [i_5 + 2]) ? 119 : 1252971679));
                            arr_20 [i_1 - 1] = (!4294967295);
                        }
                    }
                }
            }
            arr_21 [i_3] = var_6;
            var_18 = (arr_4 [i_1] [i_3]);
        }
        for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
        {
            arr_24 [i_7 - 2] [i_7 - 2] [i_7] = max(((((~var_0) || (~4294967291)))), (max(((-(arr_5 [i_1 - 1] [i_7 + 2]))), (0 * 0))));
            var_19 = (min(var_19, (((+(max((~9), -1)))))));
            arr_25 [i_1 + 1] [9] [5] = ((arr_18 [i_7 - 1] [i_7] [i_7] [i_1 - 1] [i_1] [4] [i_1]) | (((((5647274126019669909 ? -124 : -1))) ? 127 : 31)));
        }
        for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_29 [i_1] [i_8] |= ((-(((arr_1 [i_1] [i_8 + 1]) ? (arr_11 [i_1] [i_8]) : 255))));
            arr_30 [i_1] [i_1] = ((var_12 ? -var_3 : ((((max((arr_28 [i_1] [i_8 - 1] [i_1]), var_4))) ? var_6 : -var_2))));
        }
    }
    var_20 = (((((121 | var_3) > ((var_4 >> (18446744073709551609 - 18446744073709551597))))) ? var_7 : (min(58236, var_3))));
    #pragma endscop
}
