/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_12 = (((var_8 ? 127 : 2)));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_13 = (arr_4 [i_0]);

            for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_14 = (min(var_14, (((var_6 << (204 - 144))))));
                var_15 = ((var_11 == (!var_5)));
                var_16 = (391477163395724960 != var_9);
            }
            for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_17 = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_3 [i_5])));
                            var_19 ^= (arr_4 [i_0]);
                            var_20 = (((!0) * (-20410 / var_8)));
                        }
                    }
                }
            }
            var_21 = (max(var_21, (((~((var_10 ? (arr_10 [i_0 - 2] [i_0 - 2] [i_0 + 1]) : -1769154928)))))));
            var_22 = (((arr_12 [8] [i_0] [i_1] [i_1 - 2] [i_0]) ? -24 : var_1));
        }
        var_23 = ((18446744073709551615 ^ (((var_1 ? var_11 : 28)))));
        arr_17 [13] = ((var_1 / (arr_13 [i_0] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] [8])));
    }
    var_24 = (-118 ? (var_10 & 121584675) : (~var_5));
    #pragma endscop
}
