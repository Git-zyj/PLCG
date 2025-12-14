/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (!-1149);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_19 = -3149412133231823230;
            var_20 = (((arr_2 [i_1 - 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 + 2])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = (2067077107 % var_13);
            var_22 &= ((var_5 ^ (var_5 - var_5)));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_23 = -3149412133231823229;
            var_24 = (~var_16);
            var_25 = ((var_15 * (arr_2 [i_3 - 1])));
            var_26 -= (-2147483647 - 1);
        }

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_17 [i_0] [5] [i_4] = (((arr_14 [1] [i_4]) != ((-1 | (arr_15 [1] [i_4])))));
            var_27 += var_13;

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                var_28 -= ((((((arr_19 [i_5] [i_4] [i_0] [i_5]) + var_7))) ? (((arr_19 [i_0] [i_0] [i_4] [i_5]) - var_12)) : var_16));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_29 = (~var_12);
                            var_30 = (((arr_23 [11] [i_4] [i_4] [i_5]) ? (arr_23 [i_7 + 2] [i_4] [i_4] [i_5]) : (arr_23 [i_7] [i_4] [i_4] [i_0])));
                            var_31 = 1;
                        }
                    }
                }
                var_32 = var_10;
                var_33 |= (arr_7 [i_5]);
            }
            var_34 ^= (arr_10 [i_4] [i_4] [10]);
            var_35 += (((arr_22 [i_0] [i_0] [i_0] [i_4] [i_4]) % (((var_12 << (((arr_12 [3]) - 21274)))))));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            arr_31 [i_8] [i_8] = arr_13 [i_8];
            arr_32 [i_0] [i_8] = (arr_25 [i_8] [i_8 + 2] [i_8 - 1] [i_8 - 1] [8]);
        }
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            var_36 = (arr_30 [i_0]);
            var_37 ^= 0;
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 12;i_11 += 1)
            {
                {
                    var_38 = (1074945757 > 223);
                    var_39 = (min(var_39, (arr_19 [i_11 + 2] [i_11 + 3] [i_11 + 1] [0])));
                }
            }
        }
    }
    #pragma endscop
}
