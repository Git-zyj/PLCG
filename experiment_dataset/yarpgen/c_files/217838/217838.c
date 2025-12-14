/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] = (max((arr_2 [i_0] [5]), ((((min(13, -36))) ^ ((min(var_6, var_12)))))));
        var_15 = (min(var_15, var_3));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = ((68702699520 >= -123) * ((((((-9223372036854775807 - 1) ? -92 : var_8))) ^ ((var_3 & (arr_1 [i_1]))))));
            var_17 -= var_13;
        }

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_18 = 37443;
            var_19 = 5481994991289097567;
            var_20 = (max(var_20, (((1 ? (max((arr_1 [i_0]), var_6)) : (arr_10 [3] [i_2] [i_0]))))));
            var_21 |= ((((((1 ? -3312517381764031932 : var_0)) ? var_10 : (((16 ? 1 : (arr_3 [i_2]))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_22 ^= (arr_2 [i_3] [i_0]);
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_23 = var_0;
                            var_24 ^= ((0 + (arr_21 [i_4] [i_4] [8] [i_4] [i_4])));
                            arr_22 [1] [i_5] [i_3] [i_3] [i_0] = (((((arr_12 [i_3] [i_3]) ? var_7 : (arr_14 [i_6] [i_5] [i_4] [i_3])))) ? (var_7 & -7) : (var_2 || var_12));
                            arr_23 [i_3] [i_5 - 2] [i_4] [i_3] [i_3] [i_3] = 7227;
                        }
                    }
                }
            }
            var_25 -= 1;
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_26 -= ((1082331758592 ? var_13 : 123));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_27 = var_7;
                            arr_38 [i_10] [i_9] [i_9] [i_9] [i_0] = ((-21205 + (!var_12)));
                            var_28 = (max(var_28, (((((max(-68702699520, 268435454)))) | (var_12 < 22)))));
                            arr_39 [i_7] [i_7] [i_9] [i_7] [i_0] = var_3;
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_42 [i_11] [i_11] = (max((arr_40 [i_11]), ((-1 + (68702699520 - var_7)))));
        var_29 = (((((((((-12682 + 2147483647) >> (var_11 - 11903)))) ? var_2 : (arr_40 [i_11])))) ? ((83 >> (1257846376 - 1257846366))) : 12338));
        var_30 = ((-((16775168 ? (arr_40 [i_11]) : (1 - 125)))));
    }
    var_31 = ((-25 ? (var_11 - var_2) : (min(var_12, var_5))));
    #pragma endscop
}
