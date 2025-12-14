/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                arr_13 [10] [i_4] [i_1] [i_4] [i_4] = 194;
                                var_11 |= 128;
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_16 [i_1 - 2] [i_1 - 2] [i_1] = 96;
                                var_12 = 242;
                                var_13 = -1741252111;
                            }
                            arr_17 [i_3] [i_1] [i_1] [11] = 150;
                            arr_18 [i_1] = 208;
                            var_14 = 1741252111;
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    var_15 ^= 20;

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_6 - 2] [i_7] [i_7] = 715069960;
                        var_16 *= -202868586;
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [0] [i_8] = 249;

                        for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
                        {
                            var_17 += 155;
                            arr_30 [i_1] [i_1] = 87;
                            arr_31 [i_6] [i_0] [i_6 + 1] [i_6 + 3] [i_6 + 1] [i_6] [i_6] |= 0;
                            var_18 ^= 194;
                            arr_32 [i_0] [i_1] = 2031648265;
                        }
                        for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_0] = 128;
                            arr_38 [i_1] = -202868573;
                            var_19 = 1126418643;
                            var_20 = 9;
                        }
                        for (int i_11 = 2; i_11 < 8;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 2] = 173;
                            var_21 = 171;
                            arr_42 [i_1] [i_1] [i_6] [i_1] [i_0 + 2] = 17;
                            var_22 = 9;
                        }
                        var_23 = 16;
                    }
                    arr_43 [i_1] [i_1] [i_1] = 0;
                }
                /* vectorizable */
                for (int i_12 = 2; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_24 = 169;
                    arr_47 [i_1] [i_1] [i_12] = 129;
                }
                arr_48 [i_1] [i_1] = 224;
            }
        }
    }
    var_25 = 151;
    #pragma endscop
}
