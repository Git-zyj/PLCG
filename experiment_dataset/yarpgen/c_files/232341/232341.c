/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [10] [i_1] [10] [i_0] = -60;
                        var_14 -= (arr_1 [i_0]);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_15 &= (arr_18 [i_0] [i_0] [i_6] [i_6] [i_0]);
                        var_16 = (((((arr_3 [i_5] [0] [0]) ? var_13 : var_2))) ? 9223372036854775803 : 1);
                        var_17 -= var_9;
                    }
                }
            }

            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                var_18 += ((-(arr_10 [6] [i_4])));
                var_19 = (((arr_4 [i_7 - 1] [16]) ? 52 : 0));
                var_20 = (max(var_20, (arr_4 [i_4] [0])));
                var_21 = (max(var_21, (((-(arr_8 [i_0] [i_7 - 2] [i_7 - 2] [i_7 + 1]))))));
            }
            var_22 = (52 * 113);
            arr_22 [i_0] = (arr_17 [i_0] [i_4] [i_0] [i_4]);
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            var_23 = (min(var_23, 203));
            var_24 = (arr_8 [i_8] [i_8] [i_8] [i_8]);
            var_25 = ((var_5 ? 1 : 13877325293609625744));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        arr_33 [i_11] [i_10] [i_9] [i_0] = ((-(arr_32 [i_0] [6])));
                        arr_34 [1] [1] = (((arr_27 [i_0] [i_0]) ? (arr_32 [i_10 - 1] [i_10]) : ((958953154 & (arr_0 [i_0] [i_0])))));
                        arr_35 [i_0] [0] [i_0] [i_11] = arr_4 [i_10 + 1] [i_11];
                    }
                }
            }

            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                var_26 -= (~var_10);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_27 = -126;
                            var_28 += 21378;
                            var_29 = (min(var_29, 62321));
                            var_30 += (((arr_0 [i_14] [i_14]) ? 13877325293609625744 : (arr_44 [i_12] [i_13])));
                        }
                    }
                }
                var_31 = (max(var_31, ((((~var_10) * (((arr_24 [1] [i_0]) ? var_4 : (arr_1 [i_0]))))))));
                arr_45 [i_12] [i_12] [i_12] [i_12] = (arr_8 [i_0] [i_9] [i_12] [i_12]);
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 22;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    var_32 &= ((+((1 << (((arr_21 [i_0] [i_15] [i_15] [i_16]) - 51))))));
                    var_33 = (max(var_33, (((102 ? 100 : ((~(arr_1 [i_0]))))))));
                    var_34 *= 193;
                }
            }
        }
        var_35 &= ((((((arr_41 [i_0] [18] [18] [18]) + 4041))) ? -4041 : (arr_36 [i_0])));
    }
    var_36 = (((~var_13) ? (((!(((3321740708 ? var_8 : var_4)))))) : 114));
    var_37 = (~1);
    #pragma endscop
}
