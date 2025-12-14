/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~var_17);
        var_18 = var_1;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] = (arr_1 [i_0] [i_1 - 2]);
                        var_19 = ((var_7 == (((arr_5 [i_0] [i_0] [i_2]) ? 1999563775479804312 : var_0))));
                        arr_11 [i_0] = ((5983235882235237477 ? 4294967286 : (arr_7 [i_3] [i_3 + 1] [i_1 + 3] [i_1])));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = 10;
                            var_20 ^= (arr_1 [i_1 + 3] [i_1 + 1]);
                        }
                        for (int i_5 = 3; i_5 < 24;i_5 += 1)
                        {
                            var_21 = ((4294967270 ? (arr_9 [i_1] [2] [i_1 - 2] [i_1 - 1]) : (arr_13 [i_1 + 2])));
                            arr_20 [i_0] [i_0] [i_0] = (-25032 == -25012);
                        }
                        arr_21 [i_0] [i_1] [16] [i_0] [i_0] [i_0] = var_17;
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = (arr_1 [1] [i_0]);
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6 - 1] = ((!(((((max(-25050, 25009))) ? (arr_19 [i_6] [i_6 - 1] [1] [i_6] [i_6]) : (!25024))))));
        arr_26 [i_6] [i_6] = (((((((25031 ? var_8 : 13341)) >= (max((arr_24 [2] [i_6]), 2147483641)))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_22 = ((arr_28 [i_7 - 1] [9]) + var_5);
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_39 [i_7] [i_7] = (((arr_36 [i_7 - 1] [i_9 - 1] [9] [9] [i_9 + 1] [i_9 + 1]) % 1447510921));
                        arr_40 [i_10] [i_7] [i_8] [i_7] [i_7] [i_7] = -25014;
                    }
                }
            }
        }
    }
    var_23 |= var_4;
    #pragma endscop
}
