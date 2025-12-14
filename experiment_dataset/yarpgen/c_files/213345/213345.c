/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((max((~var_3), -7415858106805622121))) ? (((((-31108 + 2147483647) >> (var_8 - 24))))) : ((((var_10 ? var_2 : var_13)) ^ (max(-310270513, var_15)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_1] [i_0] = var_7;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_18 = (4275641510986698067 | 13235478241744271682);
                            var_19 += (((arr_4 [i_3]) ? ((-(arr_6 [i_0] [i_1] [i_1]))) : (arr_7 [i_3])));
                            var_20 = (min(var_20, (var_0 % 29313)));
                            var_21 = (min(var_21, var_7));
                            arr_14 [i_0] = ((-20223 <= ((31107 ? 4275641510986698067 : (arr_9 [i_0] [i_0] [i_2] [i_0])))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_22 = (min(var_22, ((((arr_6 [i_5] [i_2] [i_2]) ? var_14 : var_12)))));
                            arr_17 [i_3] |= (((arr_11 [i_0] [i_0] [i_3] [i_0] [i_3]) ? (arr_11 [i_0] [i_0] [i_3] [i_3] [i_5]) : (arr_11 [i_0] [i_0] [i_3] [i_0] [i_0])));
                            var_23 = ((-48387 ? ((var_15 ? (arr_1 [i_0] [i_0]) : 2716761245)) : (arr_12 [i_0] [i_1] [i_2] [1] [i_5] [i_2])));
                        }
                        arr_18 [i_0] [i_0] [i_0] = (arr_0 [i_1]);
                        arr_19 [i_0] = (((arr_0 [i_2]) <= (arr_0 [i_0])));
                        arr_20 [i_0] [i_0] = 0;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_24 = (0 <= -17158);
        var_25 = (max(var_25, (max((arr_22 [i_6]), (~-31107)))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_26 = (((((((max((arr_4 [i_7]), 242))) + ((max((arr_23 [i_7]), var_10)))))) + ((17023304419596735643 ? (arr_9 [i_7] [i_7] [i_7] [i_7]) : var_3))));
        var_27 *= -var_3;
    }
    #pragma endscop
}
