/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((min(var_4, var_12)), var_12));
    var_14 = 126;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 &= arr_3 [i_0];
        var_16 = 127;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_17 = ((~(((arr_4 [i_0] [12] [i_1]) << (var_2 + 2446589786469414289)))));
            var_18 = ((!(arr_3 [i_0])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_19 = (((var_8 <= var_12) == 126));
            var_20 |= 75;
            arr_9 [i_0] = (((arr_6 [9] [i_2]) ? (arr_6 [i_0] [i_2]) : (arr_6 [i_0] [i_2])));
            var_21 = (!var_0);
        }
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] = (((((arr_10 [i_4] [i_5 - 1]) ? (arr_10 [i_6] [i_5 + 2]) : (arr_10 [0] [i_6]))) <= (((arr_10 [i_6] [i_3 + 1]) ? (arr_10 [i_5 + 3] [i_3]) : (arr_10 [i_3 - 1] [i_4 - 1])))));
                        var_22 = (arr_12 [i_3 + 1]);
                        arr_23 [i_4] [i_3] [i_5 + 3] [i_6] [i_3 - 1] [i_3] = (max((((!-127) ? (((57 ? (arr_6 [i_3] [i_3]) : (arr_6 [i_3] [9])))) : var_9)), ((((arr_3 [i_6]) / ((147 ? (arr_1 [i_4]) : 75)))))));
                    }
                }
            }
        }
        var_23 = (arr_20 [i_3 + 1] [i_3 + 1] [i_3]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_24 = (min(var_24, ((((arr_1 [i_7]) <= (arr_1 [i_7]))))));
        var_25 = (min(var_25, ((224 ? 524287 : ((255 ? 180 : 0))))));
    }
    var_26 = (180 ? ((min((~48735), (var_10 == 151)))) : (((min(18446744073709551615, var_10)) * (~var_4))));
    var_27 = 120;
    #pragma endscop
}
