/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_18 -= ((~((var_14 ? 1 : 63))));
            arr_4 [2] &= (!var_16);
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_19 = (arr_2 [i_0] [4] [i_2]);
            var_20 |= (arr_2 [i_0] [i_2] [i_2]);

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_10 [i_0] [i_2] [6] = (min(64, 63));
                var_21 = (max(-1, -1));
                var_22 = (min(var_22, (arr_5 [i_0] [2] [i_3])));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_13 [6] [i_2] [2] [i_4] = ((((((55 % (arr_2 [i_0] [i_2] [7]))) == (arr_2 [i_0] [i_0] [i_4]))) || var_0));
                var_23 = (max(4294967240, 45));
                var_24 = (min((max((max(var_13, var_11)), (var_14 % 600977337))), (arr_2 [i_0] [9] [i_4])));
                arr_14 [i_4] &= ((((!(arr_6 [i_0] [i_2] [i_4]))) || ((!(!var_7)))));
                var_25 *= ((((((arr_7 [i_0] [i_4]) ? 3840 : (arr_8 [i_0] [4] [1])))) && (9223372036854775807 && 6)));
            }
            var_26 &= ((((233 || var_6) * (min(var_13, var_11)))));
            var_27 *= ((((max(var_14, (arr_1 [i_0])))) > ((~(arr_5 [0] [i_2] [i_0])))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_28 = var_12;
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((((((-var_5 % ((var_8 ? var_16 : 0))))) ? 4294967226 : (((~var_13) ? ((274877382656 << (((-15986 + 16039) - 30)))) : (((((arr_20 [9] [i_5] [4] [4]) <= 6232)))))))))));
                            var_30 = min(4294967231, (-71 * var_17));
                        }
                    }
                }
            }
        }
        var_31 = (arr_17 [i_0] [1] [i_0]);
        var_32 = (min(var_32, (((((var_12 != (233 * var_10))) ? var_10 : ((((((var_13 ? var_6 : var_15))) + var_0))))))));
        arr_26 [0] = ((((var_11 ? ((((var_6 && (arr_18 [0] [0] [i_0] [2]))))) : 2614534080)) | 23));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    arr_35 [12] |= (var_1 / var_1);
                    var_33 = (((arr_34 [i_9]) ^ var_9));
                    arr_36 [12] [4] [i_11] &= -11;
                }
                var_34 += (arr_33 [7] [10] [10]);
                var_35 -= (!6583606686295225070);
                /* LoopNest 3 */
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_44 [2] [i_9] [i_12] [i_10] [i_9] [i_9] = (min((((arr_33 [i_9] [i_10] [7]) ? 65533 : (arr_33 [i_9] [i_9] [i_9]))), ((-(arr_33 [5] [i_13] [i_14 - 1])))));
                                var_36 = (max(var_36, ((((225 / 18446744073709551596) <= ((((1 == var_15) & ((112 ? var_6 : var_1))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
