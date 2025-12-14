/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? (((~7710210784654687380) ? ((~(-9223372036854775807 - 1))) : var_16)) : var_8));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_1] [i_1] [i_0] = var_3;
            arr_6 [i_1] = ((((arr_2 [i_1]) <= (arr_0 [i_0]))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [1] = -9223372036854775801;
            var_19 = (((((~((((arr_3 [i_2]) || 9223372036854775792)))))) ? (((1 && ((min(var_8, (arr_3 [18]))))))) : var_5));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = (((((var_1 + (arr_16 [i_4] [i_4])))) + (((arr_16 [i_2] [i_4]) ? 28 : var_15))));
                            var_21 -= (arr_17 [i_2] [i_3] [i_4] [i_5]);
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = (arr_19 [2] [2] [2] [1] [i_0]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_22 = ((var_13 ? -1 : ((((var_11 ? var_2 : (arr_8 [i_7] [i_6] [i_0])))))));
                    var_23 = var_0;
                }
            }
        }
        arr_26 [12] = (min((((var_8 ? -var_16 : 45260))), ((1685114908 ? -var_12 : ((11538 ? 564922153190942835 : 1))))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = (((arr_12 [i_8] [i_8] [i_8] [i_8]) & (~-var_6)));
        var_24 = ((-18 && (((((1074369743 <= (arr_21 [9]))) ? (arr_23 [i_8]) : (((~(arr_9 [i_8] [i_8])))))))));
    }
    var_25 ^= (-9223372036854775807 - 1);
    #pragma endscop
}
