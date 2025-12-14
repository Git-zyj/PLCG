/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -var_3));
    var_17 = ((var_14 ? 32764 : var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((var_0 ? (((!((((arr_1 [1]) ? (arr_0 [i_0]) : var_4)))))) : 0));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = (((arr_5 [i_0] [i_1]) / (arr_5 [i_0] [i_1])));
            var_18 = (((-9223372036854775807 - 1) ? (1 > 63) : (((arr_3 [i_1] [i_1] [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : (arr_0 [i_0])))));
            var_19 -= (((((arr_4 [i_1] [4] [i_1]) && 1)) && var_4));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_2] = (((arr_1 [i_0]) ? (~var_1) : (223 > 196)));
                    arr_13 [i_2] [i_2] [i_2] = 118;
                }
            }
        }
        var_20 = (max(var_20, ((((((var_14 != (arr_11 [i_0] [i_0] [i_0] [i_0])))))))));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] [i_4] &= (((min((arr_14 [i_4]), (((!(arr_14 [i_4])))))) == ((min((min((arr_15 [i_4] [i_4]), -305519336)), (1487924636 <= 4294967295))))));
        var_21 = (min(var_21, (((((((arr_15 [i_4] [i_4]) ? (arr_14 [i_4]) : -3273796550861654336))) ? 16201841464949006242 : (((((((1 ? 939 : -1))) && (arr_15 [i_4] [i_4]))))))))));
    }
    var_22 = (max(var_22, (((((((~var_14) / (32297 + 137)))) & var_13)))));
    #pragma endscop
}
