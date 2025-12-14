/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (min(((+(((arr_0 [i_0]) ? var_14 : var_6)))), (arr_0 [i_0])));
        arr_4 [i_0] [1] = (min(var_3, -447818141));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_20 = (!-30150);
        arr_8 [i_1] = (!(arr_6 [i_1]));
        var_21 *= ((1 ? var_19 : ((var_16 ? 1 : (arr_5 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        var_22 *= (3564 != 1);
                        var_23 = (max(var_23, 1));
                    }
                }
            }
        }
        var_24 = (min(var_24, ((var_8 < (arr_14 [i_1] [i_1] [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 *= (arr_18 [i_5]);
        var_26 = (((((var_11 % (arr_9 [i_5] [i_5] [i_5])))) ? (((arr_6 [i_5]) ? 1 : var_8)) : (arr_12 [i_5] [i_5] [i_5] [16])));
        var_27 = (arr_9 [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_28 = (((~(arr_10 [i_6]))) & 1);
        arr_22 [i_6] = ((1 ? (arr_17 [1]) : (arr_5 [i_6])));

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_29 = (((arr_14 [i_6] [i_6] [i_7] [i_7]) ? var_0 : (arr_16 [i_6] [i_6] [i_6] [i_6] [i_7] [i_7])));
            var_30 *= ((((((arr_11 [2] [i_6]) ? (arr_25 [i_6]) : (arr_10 [1])))) ? (1 || 1825997058) : var_2));
            var_31 = (min(var_31, ((((arr_6 [i_6]) ? 32751 : (arr_6 [i_6]))))));
        }
    }
    var_32 = (~1);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_33 = var_16;
                arr_32 [i_9] [i_9] = (max(63604612, ((((1 >> (((arr_6 [i_8]) - 2009562535))))))));
            }
        }
    }
    #pragma endscop
}
