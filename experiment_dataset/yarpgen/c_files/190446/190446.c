/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_18 |= (min((((var_3 ? ((min(1, 0))) : 222))), var_13));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] = ((64 ? ((max(222, (-32767 - 1)))) : (-32767 - 1)));
                                var_19 -= var_5;
                                var_20 = (arr_8 [i_4] [i_0] [i_0] [i_0]);
                                var_21 = var_7;
                            }
                        }
                    }
                    var_22 = ((-((245 ? -32746 : 16128))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_23 = (min(22633, ((16128 ? 18446744073709551603 : (((min(-32746, 32767))))))));
                                var_24 = (min(var_24, ((((((var_2 ? (min(var_13, var_10)) : (((max(var_7, var_4))))))) ? (((min(var_13, var_1)) / (((~(arr_6 [i_0] [i_0])))))) : var_0)))));
                                arr_20 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_2 : ((min(234, 1)))))), var_10));
                                var_25 = var_13;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    arr_23 [12] [21] [i_7] [15] = (var_17 ? ((max((arr_8 [i_0] [i_0] [i_1] [i_7]), (var_2 ^ var_9)))) : (min((max((arr_11 [i_7] [i_7] [i_1] [i_0]), var_14)), var_8)));
                    arr_24 [8] [8] [i_1 - 3] [1] = var_16;
                    arr_25 [i_1] [4] = (arr_2 [i_0]);
                    var_26 *= var_0;
                    var_27 = ((((((((var_1 ? var_17 : (arr_10 [i_7] [i_7] [i_1] [13])))) ? ((var_12 ? var_6 : var_4)) : var_15))) ? (((max(49407, -6)))) : var_12));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    var_28 = var_4;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_37 [i_0] [i_1] [i_8] [i_9] [i_8] [i_10] = (arr_34 [1] [i_1] [i_1] [16] [i_8] [i_9] [i_10]);
                                var_29 |= (((((var_4 ? var_15 : var_7))) ? (var_3 * var_16) : var_16));
                            }
                        }
                    }
                }
                var_30 = var_10;
            }
        }
    }
    var_31 = ((~(max(((var_1 ? var_14 : var_0)), (min(var_4, var_6))))));
    #pragma endscop
}
