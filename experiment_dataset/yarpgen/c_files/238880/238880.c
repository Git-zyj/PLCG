/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_19 = ((((((max(64554, var_6))) ? ((max(var_2, var_9))) : -var_8)) - (((arr_1 [i_0 + 1] [i_1 + 1]) ? (arr_1 [i_0 + 1] [i_1 + 1]) : (arr_1 [i_0 + 1] [i_1 + 1])))));
            var_20 = (((min((~18446744073709551604), ((max(var_12, var_2))))) & 485323631));
        }
        var_21 = ((65535 ? 4294967295 : 11));
        var_22 += ((2021725930350601141 ? 18446744073709551583 : 18446744073709551604));
        arr_8 [i_0] = (min(18446744073709551602, ((((arr_7 [i_0 + 1]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_10)))));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_11 [i_2] = ((((var_1 ? var_7 : var_16))) ? (arr_0 [i_2 + 1] [i_2 - 1]) : (min(var_2, var_8)));
        var_23 = (min(var_23, (~9223372036854775807)));
        var_24 -= ((((((arr_3 [i_2] [i_2 - 1]) ? (arr_3 [3] [i_2 + 1]) : (arr_3 [i_2] [i_2 - 1])))) && (100 || 2555182323474222114)));
        var_25 = (max(var_25, ((min(((((~-1) & ((var_10 ? (arr_2 [i_2]) : var_18))))), -1)))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        var_26 = (~1);
        arr_14 [i_3] = (((arr_13 [i_3]) ? (arr_13 [i_3 - 3]) : (arr_12 [4] [i_3 - 2])));
    }
    var_27 += var_18;
    var_28 = var_16;
    var_29 = (((23 * 618229288) | (((~var_12) & (var_9 & var_18)))));
    #pragma endscop
}
