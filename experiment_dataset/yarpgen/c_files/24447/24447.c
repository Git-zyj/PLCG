/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [i_3] [18] [18] [i_3] = 0;
                                arr_13 [i_1] [i_3] [i_1] = (0 < 1);
                                var_14 = 32751;
                                arr_14 [i_0] [i_1] [i_3] [i_0] [i_4] = (((((1629 ? ((0 ? -1653862510 : 65356)) : 1))) ? 1 : var_6));
                            }
                        }
                    }
                }
                var_15 = var_4;
                arr_15 [i_0] [i_1] = -1653862510;
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_16 = 0;
                            var_17 = (31457280 || -53);
                            var_18 = var_10;
                            var_19 = (min(var_19, 9308));
                            arr_22 [i_6] [i_1] [i_0 + 2] [i_6] [i_6] [i_0] = ((+((var_2 ? (-32767 - 1) : var_10))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {

                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            var_21 = var_9;
                            arr_39 [i_11] [1] [i_8] [i_9] [i_8] [0] [0] = (((108 / -1140661219) / -4095));
                            var_22 = var_3;
                        }
                        var_23 = ((1 ? (var_3 <= var_11) : var_9));
                        arr_40 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] = ((-((82 ? 1 : 147))));
                    }
                    var_24 *= (var_3 > 1);
                    var_25 = ((2048 ^ ((58 ? var_2 : 58))));
                }
            }
        }
    }
    var_26 = var_0;
    #pragma endscop
}
