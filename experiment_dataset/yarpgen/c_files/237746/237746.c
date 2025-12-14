/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 += var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (min(var_7, 28765));
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (((2032 / 2032) <= (-2021 * -2021)));
                    arr_10 [i_0] = var_2;
                    var_13 = var_5;
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 6;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_14 = var_6;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [i_3] [i_5] [i_6] = var_5;
                            arr_23 [i_3] [i_4] [i_5] [i_5] [i_7] = var_4;
                            arr_24 [i_3] [i_3] = 4294967289;
                        }
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            var_15 = (max(var_15, var_9));
                            var_16 = (min(var_16, (((min((max(2008, 6)), (6 || 22594))) * 22594))));
                        }
                        arr_27 [i_3] [i_3] [i_3] [i_3] = var_4;
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        var_17 ^= var_8;
                        arr_30 [i_3] [i_3] [i_5] [i_9] [i_4] [i_9] = var_2;
                    }
                    var_18 = (min(var_18, (((min(var_6, (2036 * -22597)))))));
                    var_19 = (max(var_19, var_9));
                }
            }
        }
        arr_31 [i_3] = 22602;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_20 = (max(var_20, (min(var_2, (max(4294967274, 4294967295))))));
        var_21 = var_2;
        arr_34 [i_10] = var_8;
    }
    #pragma endscop
}
