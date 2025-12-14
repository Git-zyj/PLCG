/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_3;
    var_19 = 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 -= ((!(((3753185709 ? (arr_1 [i_0]) : var_16)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = (((arr_2 [i_0] [7]) > (arr_12 [i_2 + 2] [i_2 + 3] [i_2] [i_2])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_2] = (255 ? (arr_12 [i_2] [i_2 + 1] [i_2 + 3] [i_2]) : (((((arr_8 [i_0] [i_1] [i_3] [1]) || var_15)))));
                            arr_17 [i_0] [i_2] [i_0] [i_0] [i_2] [i_0] = (((arr_8 [i_0] [i_2 - 1] [i_4] [i_0]) >= -11854));
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, var_3));
                            var_23 ^= ((!(arr_9 [i_2 + 2] [14] [i_5 + 3] [14])));
                            arr_22 [i_2] [i_1] [i_1] [i_3] [i_5] = ((1674935175 ^ -1) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_2]) : var_17);
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_6] [i_2] [i_3] [i_2 + 4] [i_2] [i_0] = (arr_23 [i_2 - 1] [i_6 + 4] [i_2 - 1] [i_6] [i_2]);
                            var_24 = (min(var_24, ((((arr_9 [17] [i_1] [17] [i_6]) & var_1)))));
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_7 - 2] [i_2] [i_2 + 1] [i_2] [22] = (((arr_26 [i_2 + 2] [i_2] [i_2 - 1]) << (((arr_26 [i_2] [i_2] [i_2 + 4]) - 11884))));
                            arr_29 [i_0] [i_2] [i_2 + 2] [5] [i_3] [i_3] [i_7 + 2] = ((-(arr_24 [i_7] [i_3] [i_2] [i_1] [i_0])));
                            arr_30 [i_2] [i_7] [8] [i_3] [i_7] = ((~(((arr_24 [i_0] [i_1] [i_1] [i_3] [i_7 + 4]) >> (var_6 + 585519078)))));
                            var_25 = (arr_7 [i_7] [13] [13]);
                            arr_31 [i_0] [i_0] [21] [21] [i_2] [i_0] = ((var_8 || (arr_27 [i_2] [i_2] [i_2 - 1] [i_7 + 3] [i_7])));
                        }
                        var_26 *= (((arr_18 [i_3] [i_2] [i_2 - 1] [i_2] [i_2 + 4]) != var_5));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        var_27 -= (min((((arr_32 [i_8 + 3]) ? var_10 : var_7)), ((max((arr_32 [i_8 - 1]), (arr_32 [i_8 + 1]))))));
        var_28 += (arr_21 [i_8] [i_8] [16] [18] [12] [i_8 - 1] [2]);
        arr_35 [i_8 + 2] = ((((((min((arr_32 [i_8]), (arr_34 [15] [15])))) ? ((min(255, var_6))) : (max((arr_5 [22] [i_8 - 1]), (arr_3 [i_8] [i_8] [1]))))) * (((2825885130660944439 / (arr_27 [i_8] [0] [20] [i_8] [i_8]))))));
        var_29 = (((arr_2 [12] [i_8 + 3]) != (arr_6 [i_8] [i_8 - 1] [i_8])));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            {
                arr_42 [i_9] [i_10] [i_10] = ((-(min(var_10, (((arr_18 [i_9] [i_9] [i_9 - 2] [i_9] [i_9 - 2]) ? 0 : var_4))))));
                var_30 -= (223 ? 5 : 252);
            }
        }
    }
    #pragma endscop
}
