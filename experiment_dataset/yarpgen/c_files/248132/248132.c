/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_15;
    var_21 &= 3;
    var_22 = var_1;
    var_23 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_24 |= (((0 & -1542854407) | (((((var_6 ? var_15 : 15358781570890438762)) > (arr_7 [i_2] [i_0] [i_0] [i_0]))))));
                    arr_8 [i_1] [i_2] = (min(2147483647, 36028797018963966));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0] = var_10;
                                arr_14 [i_3] [i_3] [i_0] [i_0] [i_1] &= (((!var_19) ? var_1 : (arr_11 [i_0])));
                            }
                        }
                    }
                    var_25 = (arr_9 [1] [i_0] [i_0] [i_0]);

                    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, ((min(2147483647, 18446744073709551598)))));
                        var_27 = var_10;

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            var_28 = 5026865498228537595;
                            var_29 = ((var_5 ? var_8 : (arr_16 [i_1] [i_1] [4])));
                        }
                    }
                    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] [i_7] = (((((17 ? 12 : 9123550670738977575))) ? (arr_12 [i_0 - 3] [i_2]) : (((var_5 > (max(var_17, var_9)))))));
                        var_30 = 13419878575481014021;
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_1] [i_0] [i_1] = (((arr_21 [i_0 - 2] [i_10 + 1] [i_8]) ? (0 / 36028797018963957) : (((var_12 ? var_14 : (arr_21 [i_0 + 1] [i_10 + 1] [i_8]))))));
                                var_31 = ((12936575605472699413 | (((9223372036854775807 ? (((var_18 < (arr_16 [i_9] [i_1] [2])))) : (127 && -112))))));
                                var_32 = (~8758925062975592594);
                                var_33 = ((~(((var_0 || 240) ? ((var_9 ? (arr_10 [10] [i_9] [6] [i_1] [i_0]) : (arr_4 [i_1]))) : 2))));
                            }
                        }
                    }
                }
                arr_32 [i_1] [i_1] = ((((min((var_0 == 6), (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (max((arr_29 [i_0 + 1] [i_0 - 4]), (arr_3 [i_1]))) : ((var_17 ? ((var_13 ? var_15 : -1542854427)) : 1))));
            }
        }
    }
    #pragma endscop
}
