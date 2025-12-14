/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_9 >= var_10);
    var_12 -= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (0 > 261632);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 -= (~-20);
            var_14 = 4294967275;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (((arr_5 [i_0] [i_0]) != (arr_9 [i_0] [i_2])));

            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_15 = (arr_5 [i_3 - 2] [i_0]);
                arr_14 [i_0] [i_0] [2] [i_0] = (arr_4 [9] [i_3 + 1]);
                var_16 -= (!1);
            }
            var_17 -= ((-28591 ? (((arr_1 [i_2]) ? var_8 : (arr_13 [i_0] [10] [i_2] [i_2]))) : (((-1758473631 - (arr_12 [i_0] [i_0] [i_2]))))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 -= (((!var_6) | 82));
            var_19 -= (((36 & 0) ? -0 : (0 & 18446744073709551615)));
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = (arr_4 [i_0] [i_5]);
            arr_20 [i_0] [i_5] [i_0] = (i_0 % 2 == zero) ? (((var_9 / var_5) << (((((arr_19 [i_0] [i_5]) ? (arr_19 [i_0] [i_5]) : 20)) - 68)))) : (((var_9 / var_5) << (((((((arr_19 [i_0] [i_5]) ? (arr_19 [i_0] [i_5]) : 20)) - 68)) - 4294967138))));
            var_21 -= arr_13 [i_0] [8] [1] [i_5];
        }
        var_22 = (((arr_18 [i_0] [i_0] [i_0]) ? ((0 ? (arr_8 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) : (((-(arr_9 [i_0] [i_0]))))));
    }
    #pragma endscop
}
