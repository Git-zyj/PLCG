/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_11, (min((!18120376009693620114), -var_4))));
    var_13 = (max(var_10, 18120376009693620114));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_14 = (((((18120376009693620134 ? -14439 : (arr_1 [i_0 - 2] [i_0]))) / (arr_1 [i_0] [i_0 + 1]))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_15 = (65472 & (((!(arr_0 [i_0 - 3])))));
            arr_4 [i_0] [i_0] = -78;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_7 [i_2] [i_2] [i_2] = -14461;
            arr_8 [i_0] [i_2] = ((-14439 ? 14442 : -5672852508746918325));
            var_16 = (arr_3 [i_0 + 2]);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_17 = (arr_16 [i_0 - 4] [i_0 - 4] [i_4] [i_0 - 2] [i_3 - 1]);
                            var_18 -= (~-5672852508746918311);
                            arr_21 [i_0] [i_0] [i_4] [i_5] [i_4] = ((-(arr_20 [i_4] [i_4] [i_4] [i_6])));
                        }
                    }
                }
                var_19 -= 480;
                var_20 = (arr_17 [i_0] [i_0] [i_0] [i_0 - 1]);
            }
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_24 [i_0] [i_0] [i_7] [i_0] = ((~(arr_9 [i_0 - 3])));
                arr_25 [i_0] [i_3 + 1] [i_7] [i_7] = (~12);
                var_21 = (max(var_21, -326368064015931501));
            }
            var_22 = (min(var_22, (--2641343255)));
            var_23 = var_8;

            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                var_24 = -5672852508746918312;
                var_25 = ((-14454 / ((-6402006406339077726 ? (arr_16 [i_0] [i_0 - 3] [12] [i_3] [i_0 - 3]) : -5672852508746918325))));
            }
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_38 [4] [i_11] [3] [i_11] [i_0] = ((0 ? (arr_33 [i_0 + 2] [i_9 - 2] [i_9] [i_10] [i_3 + 1]) : 326368064015931490));
                            var_26 = ((var_11 ? 1744159427 : (arr_27 [i_3 + 1])));
                            var_27 = (max(var_27, (((78 ? (arr_30 [i_0] [i_3] [i_9]) : 5672852508746918315)))));
                            var_28 = (min(var_28, -3415060676013479143));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
