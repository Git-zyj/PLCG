/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_6);
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] = (arr_4 [i_0] [i_0 + 1] [i_0]);

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_18 = 18446744073709551615;
                    arr_8 [i_0] [i_1] [i_0] = (min(var_13, var_3));
                    var_19 = ((0 ^ ((~(max(var_13, var_3))))));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = var_8;
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0 - 1] [i_0 - 1] |= ((arr_2 [i_3 + 2]) ? 17101469935834072818 : 13);
                    var_20 ^= max(9223372036854775807, (((((-(arr_3 [i_0])))) ? var_3 : (arr_1 [i_1] [i_1]))));
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((((((~var_0) ? (arr_4 [i_0 - 1] [i_3] [i_3]) : var_10))) ? (min(var_8, var_8)) : ((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1]))))));
                    var_21 = ((-3926205734596549489 - ((var_0 ? ((max(var_7, var_9))) : (((arr_1 [i_1] [i_1]) - var_10))))));
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_4] [i_4] [i_0] = ((arr_11 [i_1] [i_1 - 2] [i_1]) == var_11);
                    var_22 = (min(var_22, 3926205734596549490));
                    arr_18 [i_0] [i_0] [i_1 + 1] [i_4] = ((!(arr_10 [i_1 - 2] [i_0 + 1])));
                }
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_23 = (((3061128347 == (((min(11157, 1)))))));
                        arr_24 [i_6 - 1] [i_0] [i_0] [i_0] = var_10;
                        var_24 = var_12;
                        var_25 ^= ((min(8176, (-9223372036854775807 - 1))) - var_14);
                    }
                    arr_25 [i_0] [i_1] [i_1] [i_1] = 1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_32 [i_0 - 1] [i_7] [i_0] [i_0] [i_0] = ((max((((!(arr_28 [i_0] [i_0] [i_7])))), ((199 ? 2147483644 : 255)))));
                                var_26 = ((((((arr_30 [i_7] [i_7]) ? var_6 : (arr_30 [i_7] [i_1 - 2])))) ? ((~(arr_30 [i_7] [i_7]))) : ((~(arr_30 [i_7] [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_39 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = (min((min(4, (arr_27 [i_0 + 1]))), (((max(0, (arr_26 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1])))))));
                                var_27 = ((-(~var_13)));
                            }
                        }
                    }
                }
                arr_40 [i_0] [i_0 + 1] [i_0] = ((-(arr_26 [i_1] [i_1 - 2] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_28 = ((((max(var_6, ((var_13 ? var_3 : var_6))))) ? -18446744073709551603 : var_5));
    #pragma endscop
}
