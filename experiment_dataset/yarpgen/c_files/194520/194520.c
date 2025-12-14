/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (72 ^ -9205092846424716054)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (arr_3 [i_0] [i_0] [i_1]);
            var_17 = (((arr_3 [i_1] [i_0] [i_0]) ? ((var_4 ? (arr_1 [i_0] [i_0]) : -28)) : -6172637111209012644));
            arr_4 [i_1] [6] = ((arr_0 [i_0]) ? var_12 : 4294967295);
            var_18 -= 40836;

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_19 = ((-28 ? (arr_1 [i_1] [i_2]) : 28));
                arr_8 [6] [6] = -92;
                var_20 = (max(var_20, 15753286689092836255));

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_12 [i_0] [6] [i_0] [i_0] = var_0;
                    var_21 = (arr_2 [i_0] [i_2] [i_3]);
                    var_22 = (min(var_22, ((((arr_0 [i_0]) ? var_8 : 3)))));
                }
                var_23 = (min(var_23, var_12));
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_24 = ((((((~1) ? (arr_15 [i_4]) : ((~(arr_0 [i_0])))))) ? ((max(17, 231))) : (((max(var_7, -112)) >> (((arr_11 [i_4] [i_4] [i_4]) - 12322))))));
            var_25 = ((((~-28) ? (((~(arr_15 [i_0])))) : (((arr_16 [i_0] [i_0] [i_4]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_4]))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_21 [4] = (((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_5] [i_5] [i_5] [i_0]))) ^ ((0 << (var_12 - 155)))));
            arr_22 [7] [i_5] [i_5] = (max((((15753286689092836255 ? 210 : 24))), (arr_13 [i_0] [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 6;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        {
                            arr_31 [i_8] &= (((((((((min(-24452, (-9223372036854775807 - 1))) + 9223372036854775807)) + 9223372036854775807)) << (((arr_16 [i_0] [i_7 - 1] [i_9]) - 15)))) ^ (max(1, ((9223372036854775801 << (var_1 - 13995)))))));
                            arr_32 [i_7] [i_6] [1] [i_7] [i_8] [i_7] [1] = ((var_11 ? (arr_2 [i_7 + 4] [i_6] [i_9 + 1]) : (arr_28 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
            var_26 = (+(((95 ^ var_10) ? (~var_0) : ((3857071845 ? 2968652404 : 3850261341)))));
            arr_33 [i_0] [i_6] [i_0] = arr_20 [i_0];
            var_27 = (((((63964 >> (40836 - 40822)))) ^ (max((arr_2 [i_6] [i_0] [i_0]), (arr_2 [i_0] [i_6] [i_6])))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_28 = (max((((((arr_2 [i_0] [i_0] [i_0]) < var_4)) ? 0 : (min((arr_36 [0]), (arr_29 [i_0] [i_0] [i_10] [i_0] [i_11]))))), ((max((arr_38 [i_0] [1] [i_11]), var_9)))));
                    arr_39 [i_11] = var_3;
                }
            }
        }
        arr_40 [i_0] = (arr_20 [i_0]);
        arr_41 [i_0] [i_0] = (((arr_14 [i_0] [i_0] [i_0]) >> (var_8 - 229779112)));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
    {
        var_29 = (((max(var_7, 63))));
        var_30 = (arr_37 [i_12] [i_12] [i_12] [i_12]);
    }
    var_31 = (((var_4 ? (~var_10) : var_13)));
    #pragma endscop
}
