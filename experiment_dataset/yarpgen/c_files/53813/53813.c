/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((32768 ? var_10 : (~var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_15 -= (arr_8 [i_0] [2] [i_0] [i_0]);
                        var_16 += 24;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_12 [i_1] = 27;
                        var_17 = ((32760 ? (arr_1 [i_0] [i_2]) : var_9));
                        var_18 = var_11;
                        arr_13 [i_0] [i_0] [i_1] = ((var_9 ? (arr_8 [8] [i_1] [i_2] [i_4]) : var_12));
                    }
                    var_19 = ((var_9 ? (((1 << (arr_4 [i_1] [i_1])))) : (arr_3 [i_0] [i_1])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_20 = (arr_7 [i_5]);
                        arr_21 [i_0] [i_5] [i_6 - 2] [i_7 - 1] = 32767;
                        var_21 = (arr_20 [i_6 + 1] [i_6 - 1] [i_7 - 1]);
                        var_22 = (!32768);

                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_23 = var_7;
                            var_24 = (max(var_24, (arr_18 [i_7] [i_5] [i_6 - 2] [i_7])));
                            var_25 += var_10;
                            var_26 = (arr_22 [6] [i_8] [i_6] [i_7]);
                        }
                    }
                }
            }
            var_27 |= ((var_12 ? (arr_5 [6] [i_0] [i_0]) : (arr_18 [i_0] [6] [i_5] [i_0])));
        }
    }
    var_28 = var_13;
    #pragma endscop
}
