/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [4] [i_0] = (arr_1 [i_0] [2]);
        arr_3 [i_0] [i_0] = ((((max(((min(898503477, 206))), (max(9223372036854775804, (arr_0 [i_0] [7])))))) ? (arr_1 [i_0] [i_0]) : -136210691));
        arr_4 [i_0] = ((((!((min(2147483520, -9223372036854775803))))) ? ((var_0 ? (!var_1) : (max((arr_1 [i_0] [i_0]), 9223372036854775804)))) : var_2));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = ((9223372036854775798 ? -9223372036854775797 : -386587752));
                        var_18 = (((((min(-2097152, var_13)) ? var_3 : var_10))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_19 = ((!(((-9223372036854775785 ? var_15 : var_2)))));
                            arr_15 [10] [3] [i_2] [3] [i_4] = 237;
                            var_20 |= (!9223372036854775783);
                            var_21 = (min(var_21, var_10));
                            arr_16 [11] [4] [15] [i_3] [11] = ((!(arr_8 [i_4] [i_3] [i_2] [i_0])));
                        }
                        arr_17 [i_0] [9] [i_0] [i_3] = var_12;
                    }
                }
            }
        }
        var_22 = ((-((9223372036854775803 >> (((arr_6 [i_0]) - 15971))))));
    }
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        var_23 = arr_7 [15] [i_5] [3] [i_5];
        arr_21 [2] = ((max(((var_8 > (arr_6 [7]))), (65516 > var_3))));
    }
    for (int i_6 = 4; i_6 < 24;i_6 += 1)
    {
        var_24 += (((((max((arr_24 [i_6] [i_6]), var_13)) <= ((-(arr_22 [6] [18]))))) ? 9223372036854775801 : ((5532196832881967639 * (arr_22 [i_6] [3])))));
        arr_26 [i_6] [i_6] = (arr_24 [i_6] [i_6]);
        arr_27 [i_6] = var_1;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_25 -= 18446744073709551610;
        arr_31 [i_7] = ((!(((var_15 ? 109 : var_8)))));
        var_26 = (min(var_26, -5532196832881967664));
    }
    var_27 ^= ((~((var_6 * (103 & 2097168)))));
    #pragma endscop
}
