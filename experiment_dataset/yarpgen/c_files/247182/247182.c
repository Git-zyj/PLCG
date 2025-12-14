/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 *= (arr_3 [i_1] [i_0 + 1] [1]);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_12 [i_2] = -39;
                    var_20 = (min(var_20, (arr_11 [i_0])));
                    var_21 *= 0;
                    arr_13 [i_2] [i_2] = 5180643813971234272;
                }
                var_22 *= (arr_0 [i_2] [i_1]);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_18 [i_0 - 1] [i_1] [i_4] [i_1] = var_16;
                arr_19 [i_0 - 2] [15] [i_1] [i_4] = (((~var_13) ? (arr_5 [i_0 + 1]) : (arr_11 [i_0])));
                arr_20 [i_1] [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_23 = var_15;
                            arr_27 [i_4] [i_6] [8] = 1;
                            var_24 = (min(var_24, ((((arr_9 [i_0] [i_0]) * (arr_10 [i_0] [i_0] [i_0] [i_0 - 2]))))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_25 = (max(var_25, (((2290480681453098030 ? 9582739581252096932 : 1)))));
                var_26 = (min(var_26, var_5));
                var_27 = (max(var_27, ((((!1) > (arr_9 [i_0 + 1] [i_0 - 1]))))));
                var_28 = ((1 ? 1 : 16156263392256453586));
            }
            var_29 = (82 <= 16156263392256453563);
            arr_30 [i_0] = var_11;
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_40 [i_8] [i_10] = (-(arr_1 [i_1] [17]));
                            var_30 = (var_9 ? var_16 : 6);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 19;i_12 += 1)
            {
                {
                    var_31 = var_11;
                    arr_46 [i_0] [15] [4] [i_12] = var_8;
                    arr_47 [i_0] [12] [i_12 + 1] = (arr_41 [i_0 + 1] [i_12 + 3] [i_12 + 2]);
                    arr_48 [i_0] [i_11] [i_12] [i_12] = ((-(arr_10 [i_12 - 1] [i_12] [i_12 - 2] [i_12 + 3])));
                    var_32 += (63488 / 1);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_53 [i_13] [i_13] = (arr_36 [i_13]);
        var_33 += ((9582739581252096932 ? 15805 : -63));
        arr_54 [i_13] = ((1 | (arr_52 [i_13] [i_13])));
    }
    #pragma endscop
}
