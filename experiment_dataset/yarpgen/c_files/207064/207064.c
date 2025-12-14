/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_17 = (+(((((arr_0 [i_0]) ? 12748 : var_9)) / (arr_3 [i_0 - 3]))));
        var_18 += ((!(((((arr_2 [i_0]) && 55572))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            var_19 -= (arr_4 [i_2]);

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_20 *= (arr_8 [i_1] [i_2 - 1] [i_3]);
                    var_21 = (161 ? ((var_10 ? 52796 : (arr_6 [16]))) : ((((arr_5 [3] [3]) && 9223372036854775807))));
                    var_22 ^= (((((4209272165 & (arr_10 [i_4] [i_3] [1] [i_1])))) ? (((arr_11 [i_1] [1] [2] [i_4]) ? -44 : var_9)) : 29699));
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, ((((((arr_14 [i_3] [i_2] [i_3] [i_3] [i_3]) - 254))) + var_6))));
                    var_24 = -95;
                    var_25 = (((arr_14 [i_2] [i_2 + 3] [i_2] [i_3] [i_3]) < (arr_14 [i_1] [i_2 + 3] [8] [i_3] [i_5])));
                    var_26 = (((((~(arr_6 [i_1])))) ? (arr_9 [i_3] [i_5] [i_3] [i_5]) : -44));
                }
                var_27 = (min(var_27, var_9));
                var_28 = -65519;
            }
            var_29 *= (arr_11 [i_1] [i_1] [i_1] [8]);
            var_30 |= (((~var_16) ? var_16 : (arr_11 [i_1] [i_1] [i_1] [i_1])));
        }
        var_31 = (((arr_10 [i_1] [i_1] [i_1] [i_1]) && 128));
        arr_15 [1] [i_1] = arr_13 [i_1] [7];
    }
    var_32 = (min((max((((var_11 ? var_1 : -44))), 46)), var_2));
    var_33 = (((57 / var_8) && (((-var_2 ? (~var_8) : (!var_0))))));
    var_34 = -var_5;
    var_35 = (((186 / 202) / var_2));
    #pragma endscop
}
