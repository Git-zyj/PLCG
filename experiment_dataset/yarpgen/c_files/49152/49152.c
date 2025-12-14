/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((26018 ^ ((26018 / (arr_0 [10])))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (arr_0 [7]);
            var_19 = (((arr_4 [i_0] [i_1 + 3] [i_1]) - 105));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = (~var_1);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_21 = (((arr_11 [1] [i_2] [i_3]) ? ((((((var_13 << (var_13 - 833258765))) == (arr_5 [i_0] [i_0]))))) : (((((1 ? var_18 : var_15))) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (((60 ? -105 : var_1)))))));
                        arr_15 [i_0] [i_2] [5] [7] = ((((((var_14 ? 64 : 1510759738))) ? (((!(-9223372036854775807 - 1)))) : var_12)));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_23 [i_6] = (max(((39527 ? (~26018) : var_8)), (((var_18 % -7013825116828943163) ? (max(var_18, var_13)) : (!var_15)))));
                            arr_24 [7] [i_5] [i_5] [2] [i_0] [i_0] [i_0] |= ((-1842140514708073826 ? 255 : -95));
                            var_22 |= (arr_5 [i_7 - 1] [i_0]);
                            var_23 = (min(var_23, 199));
                        }
                    }
                }
            }
            arr_25 [i_0] [i_2] [i_2] = 52176;
        }
        var_24 += (min((((((min(var_16, -124))) ? ((46 ? 39535 : var_14)) : (((-8 ? (-127 - 1) : 127)))))), 10839379519889090397));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 15;i_9 += 1)
        {
            {
                arr_30 [i_8] = ((~((max((arr_28 [i_9 + 1] [i_8]), -79)))));
                var_25 += var_4;
            }
        }
    }
    #pragma endscop
}
