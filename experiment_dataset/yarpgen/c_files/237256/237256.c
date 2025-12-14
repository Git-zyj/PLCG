/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = arr_2 [i_1] [i_1];
                    var_18 *= (arr_8 [7] [i_1] [i_1] [i_1]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_19 = ((var_10 ? -3891871407032091301 : (min(((var_1 ? var_3 : 3272836577)), (~var_5)))));
        arr_11 [i_3] [i_3] = var_12;
        var_20 *= -32751;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_5] = ((!((((arr_9 [i_5]) ? 17362 : -32752)))));

                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            arr_26 [i_6] [i_5] [i_6] [i_7] [i_8] [i_6] [i_7] = (((arr_22 [i_7 + 1] [i_7 + 1] [i_5] [i_7] [i_8]) >= (arr_22 [i_7 + 1] [i_7 - 1] [i_5] [i_7] [i_8])));
                            var_21 = 11;
                            arr_27 [i_7] [i_5] [i_6] [i_7] [i_5] [i_5] [i_5] = (arr_15 [i_5] [i_8]);
                        }
                        var_22 = ((!(arr_25 [i_5])));
                        arr_28 [i_5] [i_5] = ((-(((arr_12 [i_5] [i_7]) ? (arr_15 [i_4] [i_5]) : 3891871407032091307))));
                    }
                }
            }
        }
        var_23 *= ((var_6 << (((-2147483624 - -2147483641) - 16))));
    }
    var_24 = 7630;
    var_25 = var_8;
    var_26 *= var_9;
    #pragma endscop
}
