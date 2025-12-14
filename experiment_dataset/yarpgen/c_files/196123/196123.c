/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_20 += (min(-40, (min((arr_3 [0] [i_1]), (((arr_1 [4]) ? var_5 : 14))))));
            var_21 = ((+(((((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? var_11 : (((arr_3 [i_0] [4]) - 18446744073709551615))))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_10 [i_0] = var_3;
                            var_22 = (max(((max((arr_7 [i_0 + 1] [i_0 + 3]), (arr_0 [i_0 + 3] [i_1 + 1])))), -var_13));
                            var_23 |= (max((13 * 243), (6 + 1729791533)));
                        }
                    }
                }
                var_24 = (((arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_1]) ? (((max(-111, (arr_2 [i_0] [1] [i_0]))) ^ (arr_0 [i_1 + 1] [i_2]))) : (arr_9 [i_0] [i_1] [0] [5] [i_1 + 1] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_16 [i_0 + 4] [i_1 + 1] [i_0 + 4] [i_0] = ((255 > (0 / 13)));
                            var_25 ^= ((4294967295 ? 1 : 20347));
                            var_26 *= (arr_4 [i_2] [i_2]);
                            var_27 *= var_12;
                        }
                    }
                }
            }
            var_28 = ((min(0, -72)));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_29 = ((113 ? (min(0, 17169530430266501711)) : 65535));
                            var_30 = (max((arr_5 [i_0 - 3] [i_0 - 3] [i_0 - 1] [1]), (((arr_1 [i_0]) ? 18446744073709551615 : 13))));
                            var_31 ^= 6;
                            arr_26 [i_0] [2] [i_0 + 2] [i_0 + 2] [i_8] [i_0 + 2] [i_10] = (((arr_14 [7] [i_10 + 2]) + 65516));
                        }
                        arr_27 [i_0] [i_0] [i_0] = ((~226) ? (((250 ? -21937 : 65528))) : 3);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        var_32 += ((!(arr_28 [i_11])));
        var_33 = (min(var_33, (arr_29 [i_11])));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_34 = (!67);
                            var_35 *= (((arr_30 [i_14]) + (((min(239, 127))))));
                        }
                    }
                }
                arr_42 [i_12] [i_13] = (2147483647 % var_3);
                arr_43 [i_12] [15] = ((var_6 || ((max((arr_38 [i_13] [i_12]), (arr_33 [3] [i_13] [i_12]))))));
                arr_44 [i_12] = var_14;
                var_36 = (max(var_36, var_6));
            }
        }
    }
    #pragma endscop
}
