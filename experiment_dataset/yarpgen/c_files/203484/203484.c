/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 -= 2147483647;
    var_20 = (127 - var_16);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_2 [i_0]);
        arr_4 [i_0] = ((((((arr_3 [i_0]) + 2147483647)) >> (((max(var_13, (-127 - 1))) - 259466825)))));
        var_22 += (max((-127 - 1), (max(((var_12 | (-32767 - 1))), (arr_1 [16] [i_0])))));
        var_23 = ((!((((!var_15) ? ((-109 ? 0 : (arr_2 [i_0]))) : ((max((arr_3 [i_0]), (arr_3 [i_0])))))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_24 = (max(((max((arr_5 [i_0]), (arr_5 [i_0])))), (min(((var_1 ? 0 : 1)), (arr_0 [i_1] [i_0])))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_25 = ((min((((var_3 ? (arr_8 [i_0] [i_0] [6]) : var_15))), (min((arr_9 [1] [i_2]), 2147483647)))));
                var_26 = (arr_8 [i_0] [0] [i_2]);
                arr_10 [i_0] [i_2] = ((((min((arr_7 [i_0] [i_0] [i_0]), (arr_3 [i_0])))) ? 4294967270 : (((2147483647 ? var_13 : -345133729)))));
            }
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_27 &= (max((arr_16 [i_1] [i_3] [i_3] [i_3 + 3] [i_3]), ((((arr_8 [15] [15] [14]) ? var_4 : 8388604)))));
                            var_28 = (((arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1]) ? (arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1]) : (arr_7 [i_3 + 3] [i_3 + 1] [i_3 + 1])));
                            var_29 = ((var_4 ? (arr_9 [i_3] [i_3 + 3]) : (-32767 - 1)));
                        }
                    }
                }
                var_30 -= var_10;
            }
            var_31 = (((max(var_9, var_14)) <= ((((!(((16 ? (arr_1 [i_0] [i_0]) : var_13)))))))));
        }
    }
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_24 [i_8] = 562949953421311;
                    arr_25 [i_8] [i_8] [i_7] [i_8] = (((((4611685743549480960 ? 4294967269 : (arr_8 [2] [i_8] [i_8])))) ? (((((min(-6620, var_9))) || 0))) : 2147483644));
                }
            }
        }
        var_32 = ((65533 / (arr_22 [i_6 - 1] [i_6 - 1])));
        var_33 ^= ((+(max((-2147483647 - 1), ((var_7 ? (arr_21 [i_6] [i_6] [i_6]) : (arr_18 [i_6])))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_34 -= var_11;
        arr_30 [i_9] [i_9] = (min((min(var_5, (arr_14 [i_9] [i_9]))), ((((arr_14 [i_9] [i_9]) ? (arr_29 [i_9]) : (arr_0 [i_9] [i_9]))))));
        var_35 = (max(var_35, (((((~(arr_29 [i_9]))) | (arr_5 [i_9]))))));
    }
    for (int i_10 = 2; i_10 < 10;i_10 += 1)
    {
        var_36 = var_12;
        var_37 -= (((arr_17 [i_10] [i_10] [i_10] [i_10] [2]) + 2147483647));
        arr_33 [i_10] = (min((arr_13 [i_10 - 1]), ((((127 && 9223372036854775807) == var_15)))));
        arr_34 [i_10] [i_10] = ((((max((arr_14 [i_10] [i_10]), 0))) ? (((min(-32744, (arr_14 [i_10] [i_10]))))) : (min((arr_14 [i_10] [i_10]), var_4))));
        var_38 = (-32767 & (min(((max(106, (arr_16 [i_10] [i_10] [i_10] [i_10] [i_10])))), (max((arr_26 [i_10 - 2] [i_10]), var_16)))));
    }
    #pragma endscop
}
