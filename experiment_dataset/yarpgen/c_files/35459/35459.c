/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((~(-32767 - 1))), (32768 && 2113929216)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (max(1892652189, ((max(-66438814, 88)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] = (min(((max((-32767 - 1), var_12))), ((~(arr_8 [i_0] [i_4 + 1] [i_2] [i_3] [i_0])))));
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2] |= (arr_11 [12] [i_3] [i_1] [i_1] [i_1] [12]);
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((((min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), var_4))) & (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_14 [i_0] [i_0] = max(((min((arr_2 [i_0] [i_0]), var_6))), (max(var_2, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_20 = (max(var_20, (((((((arr_16 [i_5] [i_5]) > (arr_16 [i_5] [i_5])))) != var_10)))));
        var_21 = (min(var_21, 1349014808));
        var_22 = (((12054302718053470286 || var_13) * 6392441355656081335));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_23 *= var_5;
            var_24 *= ((0 >= (arr_19 [i_6])));
        }
        var_25 = 65535;

        for (int i_8 = 4; i_8 < 9;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_26 &= ((var_3 != (var_0 | 57946764)));
                var_27 &= (11919 << (-1 + 15));
                var_28 = (max(var_28, var_16));
                var_29 += 52832;
                var_30 += 6392441355656081335;
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_31 = -2113830245;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_32 ^= (arr_7 [i_8] [i_8] [i_8] [i_8] [i_11]);
                            var_33 = var_1;
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_35 [i_6] [i_6] = (arr_18 [i_8 + 1] [i_8 - 2]);
                var_34 = (max(var_34, (arr_8 [i_8 - 3] [i_8 - 3] [i_8 + 2] [i_8 - 4] [i_13])));
                var_35 = var_9;
                var_36 = (max(var_36, var_5));
            }
            var_37 = (max(var_37, var_2));
            arr_36 [i_6] [i_6] [i_6] = var_9;
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_38 = -1;
                var_39 = (9 | var_14);
            }
            var_40 = ((var_13 > (arr_34 [i_6] [i_6] [i_6] [i_6])));
            var_41 = (max(var_41, 0));
        }
        for (int i_16 = 4; i_16 < 8;i_16 += 1)
        {
            arr_43 [i_16] [i_16] = var_0;
            arr_44 [i_16] [i_16] = (~(arr_22 [i_16 - 3] [i_16 - 1]));
        }
        var_42 -= (-3 <= 66438817);
    }
    #pragma endscop
}
