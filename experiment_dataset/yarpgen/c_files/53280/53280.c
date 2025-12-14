/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (--1491415367)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((var_15 ? (!35184372088831) : (arr_0 [i_0] [i_0])));
        var_17 = (min(var_17, (((-736222731 ? ((1 ? (-7726182946985049491 && -1491415367) : 10288)) : ((186 ? (arr_1 [i_0]) : 255)))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1 - 3] = ((((((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1])))) ? ((max((arr_3 [i_1 - 4]), (arr_3 [i_1 - 3])))) : (((!(arr_3 [i_1 - 3]))))));
        var_18 = (max(var_18, (((-1491415350 ? 67043328 : -10)))));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_19 = (max(var_19, (((((max(var_11, (((25 <= (-127 - 1))))))) <= ((var_0 ? 115 : (!0))))))));
            var_20 = (max(var_20, 0));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_21 ^= var_8;
                            var_22 = -var_8;
                            var_23 ^= var_14;
                        }
                    }
                }
            }
            arr_20 [i_1] [10] [i_1] = ((1 << (var_12 - 11448018683533807057)));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_24 = (min(var_24, (((-1491415335 ? var_0 : (arr_27 [i_7] [i_1 - 2] [i_7] [i_8] [i_9] [i_8 - 2]))))));
                            arr_28 [i_1] [i_1 - 4] [i_1] [i_1] [i_1] [i_1] = (126 - (arr_25 [i_8 - 4]));
                            arr_29 [i_3] [i_7] [i_3] = (((arr_13 [i_3] [i_7] [i_7] [i_9]) ? 0 : (arr_3 [0])));
                            arr_30 [i_8] [i_3] = ((((((-2147483647 - 1) ? 0 : 39881))) ? 1 : 1256359700));
                        }
                    }
                }
            }
            var_25 &= ((1 ? 2564638744 : -1557368156));
            var_26 = 1459731251;
        }
        arr_31 [i_1] = ((arr_11 [i_1] [i_1] [i_1 - 4]) ? (max(1, 1744587656)) : ((~((var_1 & (arr_16 [i_1]))))));
    }
    #pragma endscop
}
