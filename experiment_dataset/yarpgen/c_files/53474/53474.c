/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = -81;
        arr_2 [i_0] = ((~((-(arr_0 [i_0])))));
        var_17 = (max((max((max((arr_0 [i_0]), -1)), var_1)), 1792));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 &= max(255, ((var_5 ? var_6 : var_3)));
        var_19 = (4294967290 * 0);
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_20 = (((((arr_7 [i_2]) ? (min(14572622849732783662, 4294967295)) : (!var_8))) < 65535));

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_21 = (min(var_21, ((((((266338304 ? -3 : (arr_0 [i_3 - 3])))) ? ((var_2 ? -1760599367 : (~1))) : (((~(arr_7 [i_2])))))))));
            var_22 = var_0;
            var_23 = (1 * (max((1982584391 ^ var_14), (var_12 >= var_0))));

            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_24 = (((var_1 / var_12) >= (((((~(arr_13 [i_2] [i_3] [i_3] [i_5]))))))));
                            arr_19 [i_2] [i_3] [i_2] [i_3] [i_6] = var_5;
                            var_25 = (((((((min((arr_11 [i_4] [i_3] [i_4]), var_12))) ? var_9 : var_3))) ? (min(((max((-2147483647 - 1), var_2))), var_3)) : (~32740)));
                            arr_20 [i_2] &= (arr_9 [i_5] [i_3 + 1] [i_6]);
                        }
                    }
                }
                var_26 = (min(var_26, (!110)));
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_23 [i_2] = (!29743);
            arr_24 [i_2] = (((!81) ? var_6 : ((((arr_0 [i_7]) ? -82 : -1)))));
            arr_25 [i_2] |= 68;
        }
        var_27 = ((!(((-(max(1872887532, 255)))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_28 = (min(-1306923616, 0));
        var_29 = (min(var_29, (((-((4692827154188224349 / (arr_8 [i_8] [i_8]))))))));
        var_30 = -1114085826;
    }
    #pragma endscop
}
