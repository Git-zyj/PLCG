/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 += ((((((arr_1 [i_0]) ? 938436833851622735 : (arr_1 [i_0])))) ? var_7 : ((var_11 ? (arr_1 [i_0]) : -40))));
        arr_2 [i_0] = 3341;
        var_21 = (max(var_21, ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2)))));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (arr_3 [i_1 + 1] [i_1]);
        var_22 = (max(var_22, ((max(((((max((arr_4 [i_1] [i_1 - 3]), var_10))) ? (((arr_1 [7]) ? (arr_5 [i_1]) : (arr_4 [14] [14]))) : (arr_3 [i_1 - 2] [3]))), var_12)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_23 &= (((arr_4 [i_2] [i_2]) / (arr_4 [i_2] [i_2])));
        var_24 *= (((!var_7) ? (arr_8 [1] [i_2]) : ((0 ? 938436833851622735 : 1903933283))));

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [i_3] &= ((var_8 ? ((var_13 ? (arr_10 [i_2] [i_2]) : var_2)) : (~var_4)));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_2] |= -34;
                arr_17 [i_4] [1] [i_4] = 938436833851622735;
                var_25 = (((arr_1 [i_3]) ? var_12 : (arr_1 [i_4])));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_21 [i_2] [i_2] [i_3] [14] = (((arr_18 [i_2]) ? (arr_8 [i_2] [i_3]) : (((arr_3 [i_2] [i_2]) ? (arr_15 [i_2]) : (arr_9 [i_5])))));
                arr_22 [12] [i_3] [i_5] [12] = (arr_19 [i_2] [i_2] [i_2] [i_2]);
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_26 = ((var_11 ? (var_8 && var_12) : ((var_3 ? (arr_15 [i_2]) : var_7))));
                var_27 = (min(var_27, var_7));
            }
        }
        arr_25 [i_2] |= 18446744073709551615;
    }
    #pragma endscop
}
