/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (max(var_14, (((~((max((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 *= (((((~((min(var_13, var_5)))))) | (((~var_10) | (min((arr_1 [i_0]), 3790712165621324562))))));
        var_16 = ((((min(1108207148451948227, (arr_2 [i_0] [i_0])))) ? (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : ((~(arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (min(var_17, ((((2400 * 113) ? (~var_1) : ((((max((arr_1 [15]), 2399))) ? (((arr_1 [i_1]) ? 2058406416951247445 : var_7)) : 0)))))));
        var_18 = (min(var_4, (min(2327147461, var_13))));
        var_19 = (min(var_19, var_5));
    }
    var_20 = (min(var_20, (((!((min((((-2147483647 - 1) ? 0 : 2088819039)), var_1))))))));
    var_21 = (((((var_2 ? var_12 : -2401))) <= (((max(-24206, 1572679946))))));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 *= (max((((!((((arr_1 [i_4]) ? var_4 : (arr_7 [i_2] [i_3] [i_4]))))))), (arr_10 [i_2] [i_3] [i_2])));
                    var_23 = (18446744073709551613 / 1);
                }
            }
        }
    }
    #pragma endscop
}
