/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_3 ? ((var_5 ? (var_7 > var_11) : var_7)) : (min(-var_1, var_8)));
    var_15 += (min((min((1843288239051306 % 1), ((min(var_13, var_10))))), (((~var_5) ? var_1 : var_11))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0];

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_16, (((var_11 ? (arr_1 [i_1]) : 1)))));

            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                var_17 = ((var_11 ? var_10 : ((~(arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_18 = ((-(arr_7 [i_2 - 2] [i_2 + 1] [i_3 - 3] [i_3 + 2])));
                            var_19 ^= (((arr_5 [i_2 - 1] [i_2 + 2] [i_2 - 2] [i_2]) ? (((arr_4 [i_0]) % (arr_1 [i_0]))) : 1));
                        }
                    }
                }
            }
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_20 = (-(arr_4 [i_1]));
                var_21 += (arr_3 [i_0] [i_1] [i_5]);
            }

            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_1] [i_0] = (((((1 ? var_12 : var_0))) ? 8000662698891576820 : (1 || var_11)));
                var_22 += (((arr_15 [i_6] [i_0]) ? 2077 : var_8));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_23 = var_8;
                arr_23 [i_0] [i_0] [i_7] = (((arr_19 [i_7]) != var_13));
                var_24 |= ((((var_4 ? var_2 : var_0)) | (arr_7 [8] [i_1] [i_0] [9])));
                arr_24 [i_0] [1] [i_0] = ((((((arr_16 [i_7] [i_0] [i_0]) ? var_3 : var_1))) ? (arr_16 [i_0] [4] [i_0]) : -var_4));
            }
            arr_25 [i_1] [i_0] &= (((arr_12 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] [i_1]) ? 60712 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
        }
    }
    var_25 = var_9;
    var_26 *= ((min((((1 ? var_8 : var_9)), ((var_12 ? var_4 : var_13))))));
    #pragma endscop
}
