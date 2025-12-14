/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_13 &= ((var_0 ? ((((((var_11 >> (((arr_1 [2]) - 3457124820))))) ? (((9554823526456522805 ? 355632210 : 127))) : var_10))) : (arr_0 [i_0])));
        var_14 *= (((arr_1 [0]) || ((max(var_9, (arr_1 [2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (min(var_15, -1817174428));
        arr_4 [i_1] = (((((arr_2 [i_1]) ? var_2 : (arr_2 [i_1]))) + var_10));
        var_16 = 2078353566;
        var_17 = (((((-25629 & (arr_3 [i_1])))) ? (~var_4) : (arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_2] [i_3] = (((!4294967295) != (-2147483647 - 1)));
                    arr_14 [i_2] [i_2 + 4] = -2078353566;
                    var_18 = (((arr_10 [i_2]) * ((((!(arr_10 [i_2])))))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_19 = (((-2147483647 - 1) & (max((arr_17 [i_4] [i_4]), (arr_16 [i_4])))));
        var_20 = (((((var_5 ? 14 : (8046943427170984232 & var_9)))) ? ((((!(((~(arr_16 [i_4])))))))) : (arr_16 [i_4])));
        var_21 *= ((!(((4294967295 ? -2147483647 : (min((arr_17 [8] [12]), (arr_16 [0]))))))));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        var_22 *= -1;
        var_23 = (arr_11 [i_5 - 4] [i_5 - 1] [i_5]);
    }
    var_24 = var_8;
    var_25 = (-(var_4 + var_7));
    var_26 |= ((4294967282 + (-2147483647 - 1)));
    #pragma endscop
}
