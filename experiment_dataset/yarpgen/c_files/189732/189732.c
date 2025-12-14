/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 469071873;
        arr_3 [i_0] [i_0] = (((469071873 * 9503622153835538342) ? (min(var_6, var_12)) : ((11 ? (arr_0 [i_0]) : var_17))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 = (min(var_19, (((!(arr_6 [i_2]))))));
            var_20 = ((((((arr_4 [i_2]) ? var_6 : var_17))) ? (((arr_5 [i_1]) ? 18009402070172800191 : var_2)) : ((((arr_7 [i_1]) / var_6)))));
            var_21 = (max(var_21, (((var_8 ? (~2057) : ((var_14 ? 2597286859803041580 : var_16)))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_22 = (max(var_22, (arr_18 [i_5])));
                            var_23 = ((var_4 ? (~49518) : ((18 ? var_16 : var_6))));
                            arr_20 [i_1] [i_3] [i_1] [i_1] [i_1] = var_14;
                            arr_21 [i_1] [i_5] [i_3] [i_3] [i_1] = ((0 ? 0 : -11));
                            arr_22 [i_1] = -20619;
                        }
                        var_24 = ((((144 ? -4687822278796502850 : 0)) / 32758));
                    }
                }
            }
        }
        var_25 ^= arr_19 [i_1] [i_1] [i_1] [i_1 + 4] [i_1] [i_1 + 4];
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        var_26 ^= (min(((var_9 - (((arr_23 [i_7]) ? var_10 : var_14)))), ((~((-524288 ? 9503622153835538342 : 679596918448598979))))));
        arr_26 [i_7 + 1] |= (min((min((!-28), (min(var_5, -679596918448598980)))), ((((min(var_12, 16816359514835721526)) >= -19)))));
        var_27 = (max(var_27, (((((((((-1309528318 ? var_7 : 1))) ? ((min(99, (arr_25 [i_7] [i_7])))) : (((arr_24 [i_7]) << (((-1290430241 + 1290430272) - 28))))))) ? var_16 : (((((18258883011752266716 <= var_2) && var_17)))))))));
    }
    var_28 = 12779609362032024982;
    #pragma endscop
}
