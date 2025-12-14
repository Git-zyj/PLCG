/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 175003113;
        var_14 = (min(var_14, var_1));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_15 -= (!var_4);
                var_16 ^= ((((((~var_8) & (6556 ^ var_7)))) & 4119964165));
                arr_11 [i_0] [11] [i_2] [i_0] = 4119964182;
            }
            /* vectorizable */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_16 [i_0] [i_0] [i_3 + 4] [i_3] [i_3] [i_1] = (arr_8 [i_1] [16] [i_3 + 4]);
                    var_17 += (6583 - var_4);
                }
                arr_17 [i_3] [i_1] = 4119964182;
                var_18 = (arr_4 [i_3] [i_1] [i_0]);
                arr_18 [i_0] [i_3] = 23376;
            }
            var_19 ^= (min(10, 6556));
            var_20 = (min(var_20, (((((11501127900227930530 ? 1529025600 : -62))) ? (min((arr_3 [i_0]), (max(1477802997, 4119964189)))) : ((0 / (((-(arr_4 [i_0] [i_1] [0]))))))))));
            arr_19 [i_1] [i_1] [i_0] = ((!((((((4119964182 ? 175003114 : 4119964161))) ? 6556 : (!1091813321))))));
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        arr_24 [i_5] = (((((arr_14 [0] [i_5] [2]) ? var_4 : var_1))));
        var_21 |= 57942;
    }
    var_22 = ((-((var_4 & ((var_7 ? var_0 : var_10))))));
    var_23 = (min(var_23, (((-((1394741442 ^ (~var_7))))))));
    #pragma endscop
}
