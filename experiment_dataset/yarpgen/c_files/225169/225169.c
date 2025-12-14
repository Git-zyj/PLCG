/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 -= (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_1]) : (((-5737558550112131865 ? 6607601001139495782 : -6607601001139495799)))));
                        arr_13 [2] [0] [i_1] [2] = (arr_8 [i_3] [i_2] [i_1] [i_0]);
                        var_12 ^= (((((min(((min(var_1, var_3))), (arr_7 [i_0] [i_2] [i_3]))) + 9223372036854775807)) >> (((min((((arr_7 [i_0] [i_0] [i_0]) ? -6607601001139495764 : (-127 - 1))), (((arr_4 [i_0] [i_0]) ? 6607601001139495802 : var_3)))) + 6607601001139495800))));
                        var_13 = (arr_6 [i_0]);
                        var_14 = ((((((arr_2 [i_2]) ^ var_2))) ? ((var_6 ? (arr_0 [i_3]) : var_2)) : (((arr_10 [i_2] [i_1]) ? ((var_10 ? var_3 : var_4)) : (((5720787853268767800 < (arr_8 [i_3] [i_2] [i_1] [i_0]))))))));
                    }
                    var_15 = (min(var_15, (((((min(var_5, (min((arr_3 [i_1]), var_10))))) ? ((1 ? ((max(var_2, var_5))) : ((max(var_4, var_1))))) : ((~(arr_9 [i_2] [i_0] [i_0] [i_0]))))))));
                }
                var_16 = (min(var_16, ((((max((arr_4 [i_0] [i_0]), 6607601001139495796))) ? (var_3 & var_7) : (((min((arr_12 [i_1]), (arr_12 [i_0])))))))));
                arr_14 [i_0] [i_1] |= ((var_1 >> (((arr_10 [i_0] [23]) + 7535634495993041155))));
            }
        }
    }
    var_17 = ((((~(7757354703255149335 + var_4))) & (((((min(51547, var_7)) + 9223372036854775807)) >> (-var_3 + 40120)))));
    var_18 = ((var_9 + (((var_7 / var_10) ? var_3 : -99))));
    #pragma endscop
}
