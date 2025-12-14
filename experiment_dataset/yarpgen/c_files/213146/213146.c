/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((!(((-9223372036854775807 - 1) <= 23468)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = -23468;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_14 [i_3] [i_3] = (var_12 > -1);
                            arr_15 [i_1] [i_3] = (((55896232 ? var_6 : var_3)) ^ ((var_6 ? -15485 : -8931115395261003339)));
                            var_17 ^= (((((arr_13 [21] [11]) & (arr_6 [i_0] [i_0] [i_0]))) | (((~(arr_7 [i_0] [2] [15]))))));
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_18 [i_0] [i_0] [i_5] = ((-23450 ? -120 : -4520));
            var_18 = (min((!55896255), (((((-(arr_11 [i_0] [i_5] [16])))) + (((arr_8 [i_0] [i_0] [i_0] [i_5]) ? 0 : (arr_5 [i_0] [i_0] [i_0])))))));
        }
        var_19 = (min(1, ((((max(var_11, -9223372036854775807))) ? (-1 | 23468) : (~-3735656952562533400)))));
        var_20 = 13453003920778157843;
        var_21 = max((((23450 >> (var_3 - 10286)))), (((~var_12) ? (((1 ? -123 : 9223372036854775806))) : ((764382308 ? (arr_6 [i_0] [i_0] [i_0]) : 9223372036854775807)))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((((1 != ((1 ? 4 : (-9223372036854775807 - 1))))) ? (((~(arr_19 [i_6] [i_6])))) : 661086537855628308));
        var_22 *= (arr_10 [i_6] [i_6] [i_6] [6] [12]);
        arr_22 [i_6] = ((-(!3735656952562533380)));
        var_23 = ((((((!(~7228579664363303150))))) <= ((16217533764401117018 * (((min(78, var_10))))))));
    }
    var_24 = 1;
    #pragma endscop
}
