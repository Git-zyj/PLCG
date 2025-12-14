/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((-(((!(((var_4 ? var_9 : var_3))))))));
                var_12 = var_4;

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((~(((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_10 [i_0] [18])))));
                                var_14 -= var_9;
                                var_15 = ((48 ? 19 : 34));
                                var_16 ^= (((((var_7 ? ((17898 ? (arr_10 [i_0] [i_0]) : (arr_8 [11] [i_1] [i_2]))) : (((47638 ? 47638 : 1)))))) ? (((~18446744073709551584) ? (arr_3 [i_2] [i_2]) : (arr_10 [i_0] [i_0]))) : (((-((18446744073709551577 ? var_0 : (arr_9 [i_4] [i_3] [i_2] [i_1] [i_0]))))))));
                                arr_13 [1] [i_1] [10] [i_2] [10] [i_3] [10] = 18446744073709551563;
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] [i_2] = var_0;
                    arr_15 [i_2] [i_1] [i_2] = (((((max(var_3, 18446744073709551597)) >> (((arr_5 [i_1]) - 12243401307833823147)))) % var_3));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_17 = (min(var_17, var_10));

                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        var_18 = ((19 ? var_2 : ((var_5 ? 6 : ((var_5 / (arr_16 [i_5] [i_0] [i_5] [i_5])))))));
                        var_19 -= (-(arr_5 [i_6 - 1]));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_20 = ((+(min((arr_16 [i_5] [i_5] [i_5] [i_5]), (arr_16 [i_5] [i_5] [i_5] [i_7])))));
                        var_21 = (!9223372036854775805);
                    }
                    var_22 = (!((((arr_8 [i_5] [i_1] [i_0]) ? (arr_8 [i_0] [i_1] [i_5]) : (arr_8 [i_0] [i_1] [i_5])))));
                    arr_24 [i_5] [i_5] [i_0] = -1;
                    var_23 = (min(var_23, ((min((min((max(35184372088832, 9223372036854775792)), (arr_7 [i_0] [i_1] [i_5]))), var_7)))));
                }
            }
        }
    }
    var_24 = ((var_6 ? var_7 : (max((var_8 != 50859), ((1 ? 18446744073709551597 : 12))))));
    #pragma endscop
}
