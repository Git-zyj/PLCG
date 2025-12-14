/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (max(var_13, ((((((~var_2) ? var_8 : var_6)) ^ 1)))));
    var_14 = (max(((7 ? (730783763 || -1714370834) : var_5)), 116));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [6] = var_0;
        var_15 = (max(var_15, -1714370826));
        var_16 |= (((var_3 / 1) ? -1 : (0 & 11)));
        arr_4 [0] = (~var_4);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_1] [5] [7] [i_1] = (max(-108, var_8));
                    arr_12 [9] [9] [i_1] = (~-13025);
                    arr_13 [i_1] [5] [12] [i_2] = 2281187404666724327;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [2] = (arr_6 [i_3] [i_4] [i_5]);
                        var_17 = (6864989820386490098 != -2414251364281854660);
                        var_18 &= (arr_23 [12] [8] [4] [8] [11] [4]);
                        var_19 = -67;
                        var_20 ^= (arr_1 [i_4]);
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        var_21 = 2;
                        arr_29 [12] [0] [1] [3] [i_5] [i_5] = -var_4;
                        var_22 = (max(var_22, (((6864989820386490109 ? var_9 : 8796093022207)))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_36 [12] [i_8] [8] [3] [i_3] [i_3] = (((arr_10 [5] [i_4] [10] [i_9 - 1]) ^ var_5));
                                var_23 += -24;
                            }
                        }
                    }
                    arr_37 [9] [i_4] [11] [i_5] &= (arr_17 [11]);
                    arr_38 [i_3] [7] = 1;
                }
            }
        }
        var_24 = ((-(~-3432)));
    }
    #pragma endscop
}
