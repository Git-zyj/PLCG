/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += 4294967295;
    var_19 = ((var_9 ? (((~1) ? var_17 : (~var_13))) : var_14));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0 + 1] = ((269559945 ? 5693581011467958647 : -13));
        var_20 = (max(var_20, ((((((199 >> (-1265237460 + 1265237475)))) ? -24639 : 1)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1 + 1] [19] = (6970 <= -6486396872659682292);
            var_21 &= ((12 ? var_15 : 18302028996969995866));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [16] [i_3] &= (15845656767442916786 || 1);
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        var_22 -= var_1;
                        var_23 = (124 != var_17);
                        var_24 *= ((1 ? 26958 : var_9));
                    }
                }
            }
            var_25 = ((-120 ? 1 : 18446744073709551615));
        }
        var_26 = (((((667839675 ? 231 : 12))) ? ((0 ? 117 : -103)) : -119));

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_19 [i_1] = 0;
            arr_20 [i_1 - 1] [i_6 + 3] = (-7068707805638457104 & 23971);
            arr_21 [18] &= (117 && var_1);
            arr_22 [i_6] [i_6] [16] = 0;
        }
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            var_27 = ((~((92 ? 3478405272325549498 : 25586))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_32 [i_7] [i_8 - 2] [i_7] [i_7] = ((1 ? var_16 : 15));

                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            var_28 = -93;
                            arr_36 [i_1] [1] [i_7] [i_8] [i_7] [1] [i_10 + 2] = ((2338 ? 67 : -545924349));
                            var_29 = 0;
                        }
                    }
                }
            }
            arr_37 [i_1 + 1] [i_7] [i_1] = (1230568753 && -1230568754);
            var_30 = 594830463;
        }
    }
    var_31 = var_17;
    #pragma endscop
}
