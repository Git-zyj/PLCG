/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = -var_13;
        var_15 = ((max(((~(arr_1 [i_0] [i_0])), 107))));
        arr_3 [i_0] [i_0] = 8601;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_16 = 220;
        arr_6 [i_1] = ((62958 ? (arr_4 [i_1] [i_1 + 1]) : var_6));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((min(var_3, (-2147483647 - 1))));
        arr_12 [i_2] [15] = (((arr_7 [i_2]) ^ var_6));
        var_17 = (max(var_2, var_13));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_16 [i_3] = 0;

        /* vectorizable */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            arr_21 [i_3] = (arr_14 [i_3] [i_3]);
            arr_22 [i_3] [i_4] = (((70 & 64) ? ((var_2 ? var_10 : (arr_8 [i_3]))) : var_5));
            arr_23 [i_3] [i_3] = -14;

            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                arr_26 [i_3] [i_4] [i_5] [i_3] = 2147483645;
                var_18 = -var_12;
            }
            arr_27 [i_3] [i_3] [i_3] = ((var_9 ? var_4 : (arr_25 [i_3] [i_4 - 3])));
        }
        arr_28 [i_3] [i_3] = 62952;
        arr_29 [i_3] = ((((((arr_18 [i_3] [i_3] [i_3]) ^ var_2))) ? 1 : -var_7));
        arr_30 [0] [0] &= (((((((-(arr_14 [i_3] [0])))) ? (!14336) : (max(-2030690667, var_8)))) != ((((((var_7 ? (arr_17 [i_3] [0]) : var_0))) ? (arr_13 [3]) : (var_3 || 1))))));
    }
    var_19 = var_8;
    #pragma endscop
}
