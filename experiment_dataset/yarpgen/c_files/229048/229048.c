/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_11 = (((arr_5 [i_0]) - ((0 << (78 - 53)))));
                            var_12 = (max(var_12, (((-((var_9 ? var_3 : var_7)))))));
                        }
                        var_13 *= (var_6 / -var_1);
                    }
                }
            }

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_14 ^= ((var_8 ? (arr_13 [i_0 + 1] [i_0 + 1]) : (arr_8 [14] [i_0 + 1] [i_1 + 2] [i_1 - 1] [i_0 + 1])));
                arr_14 [i_0] [8] [i_0] [i_5] = ((-((0 ? (arr_3 [i_0] [i_1] [18]) : (arr_8 [2] [2] [16] [i_1] [2])))));
            }
            arr_15 [3] [18] [i_1] = ((var_1 ? (arr_5 [i_0 + 1]) : var_0));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    {
                        var_15 ^= 14;
                        var_16 = (max(var_16, (((var_1 ? (arr_10 [i_0 - 2]) : 8)))));
                    }
                }
            }
        }
        var_17 = (((((-((1 ? (arr_9 [i_0]) : (arr_5 [i_0])))))) ? (((var_5 | (~-1331176380)))) : (arr_7 [i_0 + 2] [i_0] [1])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                {
                    var_18 = ((~(((((arr_5 [i_0]) ? var_10 : var_8))))));
                    var_19 = (min((arr_16 [i_0]), (arr_11 [1] [i_8] [i_8] [i_8] [1])));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_20 = 672642184;
        arr_28 [i_10] [i_10] = (((((min(var_4, var_6)))) ? (((!((min(2085532359, (arr_0 [16]))))))) : ((var_4 ? ((min(var_6, (arr_27 [i_10])))) : (((arr_5 [i_10]) << (((arr_19 [i_10] [i_10] [i_10]) - 55726))))))));
        arr_29 [i_10] = (((((1 ? 29513 : 5))) ? var_7 : (arr_9 [i_10])));
    }
    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
    {
        var_21 = ((843581994 ? 151 : 1));
        arr_32 [i_11] = (max(-17, (((var_9 >= (arr_31 [i_11]))))));

        /* vectorizable */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_22 = (arr_30 [i_11 + 2] [i_11 + 3]);
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    {
                        var_23 = (((arr_30 [i_11 - 1] [i_11 + 2]) & (arr_30 [i_13] [i_11 + 3])));
                        var_24 = (arr_34 [i_11 + 3] [i_11]);
                        var_25 = ((-(arr_37 [i_14] [i_12] [i_11 + 2])));
                        arr_41 [i_14] [i_14] [7] [i_13] = var_10;
                        arr_42 [3] [3] [i_11] = var_1;
                    }
                }
            }
            arr_43 [i_11] [i_12] = ((0 ? 1044480 : 255));
            var_26 = ((var_8 * (arr_35 [i_11 + 2] [i_12] [i_12])));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_27 = var_5;

            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                var_28 = (min(var_28, (arr_44 [i_15])));
                var_29 |= var_0;
                var_30 = (((((~(arr_38 [i_11] [i_11])))) ? (((var_6 ? var_9 : (arr_39 [i_11] [i_15] [11] [i_16] [i_11 - 2])))) : var_1));
            }
            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                arr_52 [i_17] |= (arr_40 [i_11 + 2] [i_11 + 2] [i_11] [i_11] [i_11]);
                arr_53 [i_11] [i_11 - 1] [i_11] [i_11 + 1] = arr_37 [i_11] [i_11 + 2] [1];
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        {
                            var_31 ^= ((1 ? 192 : 15901700363963040175));
                            var_32 = ((~((~(arr_37 [i_17] [i_17] [i_17])))));
                            var_33 *= (~var_8);
                            var_34 = ((~(arr_40 [11] [i_11] [i_11 + 3] [i_11 + 3] [i_17 + 1])));
                            arr_58 [i_11] [i_11] [i_15] = ((!(((var_1 ? var_3 : var_9)))));
                        }
                    }
                }
            }
            arr_59 [i_15] [i_15] [i_15] = (arr_39 [i_11] [i_11] [i_11 + 1] [i_11 - 2] [i_11 + 2]);
        }
    }
    for (int i_20 = 2; i_20 < 18;i_20 += 1) /* same iter space */
    {
        arr_62 [i_20] [i_20] = arr_44 [i_20];
        var_35 &= (-32767 - 1);
        var_36 = ((-852465845 ? 130 : -1));
    }
    var_37 = var_9;
    #pragma endscop
}
