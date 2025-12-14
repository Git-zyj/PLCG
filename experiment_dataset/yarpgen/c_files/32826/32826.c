/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : -231343605));
        var_13 ^= ((var_5 ? (arr_0 [i_0 + 3]) : 3895636207));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = -8;
                    arr_11 [i_1] [1] [i_2] = ((arr_9 [i_0 - 2] [i_0]) ? 13322577973998079453 : 9223372036854775744);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_1 - 1] [4] = (((((var_0 ? var_12 : 8892923596806800700))) ? (arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3]) : var_7));
                        arr_15 [i_3] [6] [i_2] [i_3] [i_1] [i_2] = ((((-(arr_5 [i_0] [i_1] [i_2]))) * (!-752144597)));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [14] = 179;
                        var_15 = (((arr_10 [i_1 - 2] [i_1] [i_1]) + (arr_0 [i_0 + 3])));
                        arr_19 [i_0 + 2] [i_0] [i_1] [i_1] [0] [17] = (arr_7 [i_0] [i_0 + 1] [i_0 - 2] [i_4]);
                        var_16 = ((var_9 ? 4294967295 : ((((!(arr_6 [i_0] [i_1])))))));
                    }
                }
            }
        }
        arr_20 [18] = (!var_12);
        var_17 |= (((arr_9 [i_0] [i_0]) % ((399331089 ? var_3 : 18446744073709551615))));
    }
    var_18 = var_7;
    var_19 = -var_2;
    var_20 -= (min(((max(var_12, ((min(-752144597, 122)))))), (-7274986060331382056 - 252)));
    #pragma endscop
}
