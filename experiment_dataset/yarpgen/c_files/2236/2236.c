/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((5 >= (var_1 * var_9)));
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 *= (((!30370) <= ((((arr_1 [i_0 + 1]) <= 5)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = ((((var_5 ? (~var_6) : 32767)) / var_2));
            var_18 = (((((arr_5 [i_1] [i_0 + 1]) ? 5 : 32208)) * 32764));
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, var_8));
                        arr_18 [i_2] = ((var_10 << ((((var_1 ? 31 : 28365)) - 23))));
                        var_20 *= (arr_11 [i_2 + 1] [i_2 - 1]);
                        var_21 -= (0 ? var_9 : 262016);
                        arr_19 [i_4] [i_3] [i_4] [i_2] = (-32767 - 1);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_6] [i_2] [i_2] [i_2] = (((arr_9 [i_2 - 1] [i_2 - 1]) | var_9));
                        var_22 = ((var_2 ? var_11 : var_3));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_2] [i_2] [i_2] [i_7] [i_3] = (max((((~((min(var_7, (-32767 - 1))))))), ((31 ? (min(var_3, var_2)) : var_10))));
                        var_23 = ((-((0 ? 23975 : -23975))));
                        var_24 = (min(var_24, ((max(17204, ((var_8 ? (var_13 <= 46) : ((105 ? 1 : 0)))))))));
                    }
                    var_25 = (((!64576176) / 12582912));
                }
            }
        }
    }
    #pragma endscop
}
