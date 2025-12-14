/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((+((~(((arr_1 [i_0 - 1]) | (arr_2 [i_1])))))));
                var_11 = (max(var_11, (((((max(-24087, (arr_2 [i_0 + 1])))) ? (min(((min(41461, 24075))), 538172800825255523)) : (arr_2 [i_0 + 1]))))));

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_12 = 24087;
                        var_13 = (min(var_13, ((((arr_8 [i_3] [i_1] [i_1] [i_0 - 2]) ? var_9 : (arr_6 [i_3] [i_3 - 2] [i_0]))))));
                        var_14 = (min(var_14, ((((arr_2 [i_0 - 2]) != var_3)))));
                    }
                    var_15 = (max((((arr_9 [i_1] [i_1] [i_1] [i_1]) ? (arr_9 [i_0 + 1] [i_1] [i_1] [i_1]) : -335175382)), (((arr_9 [i_0 - 1] [11] [i_1] [i_2 - 1]) ^ 1))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (min(var_16, ((((arr_7 [i_2 - 1] [i_2 - 2] [i_0 - 1]) ? (arr_7 [i_2 - 2] [i_2 - 2] [i_0 - 1]) : (arr_7 [i_2 - 2] [i_2 - 2] [i_0 - 1]))))));
                        var_17 = (min(var_17, ((((arr_5 [i_0 - 2] [i_4]) ? (arr_5 [i_4] [i_1]) : var_2)))));
                        var_18 -= (arr_10 [i_0] [i_1] [i_0] [i_4]);
                        var_19 = (((var_9 ? var_5 : 18446744073709551615)));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_15 [i_0 - 1] [i_2] [i_2] [i_2] = (max(18446744073709551607, (max((arr_12 [i_2] [i_0] [i_2 - 1] [i_5]), 0))));
                        arr_16 [i_2] = (arr_11 [i_5]);
                        var_20 = (max(var_20, (arr_6 [1] [i_1] [i_0])));
                        var_21 = ((((((((41454 || (arr_14 [i_0] [i_2] [i_2] [9] [i_0] [i_0])))) % -32))) && (((~(arr_10 [i_2 + 2] [i_2] [i_2] [i_0 - 2]))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_19 [i_0] [10] [i_2 - 3] [i_2] = (((0 / (arr_18 [i_0]))));
                        arr_20 [i_1] [i_2] [i_2 + 1] [i_6] = 4998;

                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            var_22 = -95196204;
                            var_23 &= ((24 != (arr_3 [i_0] [i_2 - 1] [i_2])));
                            var_24 = ((((1 ? (arr_1 [i_0 - 2]) : var_5)) * var_4));
                            var_25 = (~1);
                        }
                        arr_24 [i_0] [i_2] [i_2] [i_6] [i_6] = -var_1;

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_26 -= ((-var_8 ? (arr_11 [i_6]) : var_4));
                            var_27 *= ((-1700274527 ? (-1700274528 || 1879048192) : -10378));
                            arr_28 [i_2] = ((((-2098541020447874572 ? (arr_9 [i_8] [i_2 - 1] [i_0] [i_0]) : var_5)) * (arr_17 [i_0 + 1] [i_0 - 2] [i_2 - 1] [i_2 + 1])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 = ((-5865422631005243050 ? ((((13178136526848785701 / (arr_1 [i_0]))) << (((((arr_25 [i_2] [i_2]) ? (arr_8 [i_1] [i_1] [i_2 - 3] [i_9]) : (arr_12 [i_2] [i_2] [i_2 + 1] [i_2 + 1]))) + 30979)))) : -42));
                        var_29 = 1;
                        var_30 = ((~(var_1 || var_1)));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            {
                arr_37 [i_10] [i_10] [i_11] = (max((((var_1 && var_3) ^ (max(var_0, (arr_12 [i_10] [i_11] [i_11] [i_10 - 1]))))), var_7));
                var_31 = (max(var_31, ((((arr_1 [i_10 + 1]) ? (1427134571 / 41444) : (-43 ^ 2979155742))))));
            }
        }
    }
    var_32 = var_9;
    #pragma endscop
}
