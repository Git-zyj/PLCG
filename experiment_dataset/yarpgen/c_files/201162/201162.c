/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (var_3 * 28120);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_3 [i_0]);
        var_13 = (((var_1 * var_3) ^ (var_0 * var_0)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_14 = (arr_2 [i_0] [4]);
            var_15 &= 3632564864;
            var_16 = var_1;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = (((arr_4 [i_0] [i_2]) ? 1 : (arr_4 [i_2] [i_0])));

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_18 = var_0;
                var_19 = ((+(((arr_0 [i_0] [i_2]) / (arr_6 [i_0] [i_0] [9])))));
            }
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                var_20 = -1113504576;
                var_21 = (arr_9 [i_0] [9] [i_0]);
            }

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_22 = ((1152921504606846975 < (arr_10 [i_0] [i_2] [i_0])));
                var_23 = ((-(arr_6 [i_5] [i_2] [i_0])));
                var_24 = 28120;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_25 = (((~-28120) & (var_8 | 159)));
                var_26 = var_1;
                var_27 = var_8;
                arr_20 [i_6] = (((((((arr_14 [i_0] [i_2]) ^ (arr_2 [i_0] [i_0]))) + 2147483647)) >> (arr_12 [i_0] [i_2] [i_2])));
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_28 = (arr_22 [i_7]);
        var_29 = (((1 & 2945045384453221316) ? ((((arr_21 [i_7] [i_7]) | var_9))) : (~7028916897389096580)));
    }
    #pragma endscop
}
