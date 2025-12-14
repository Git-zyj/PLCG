/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_4;
    var_15 = var_6;
    var_16 -= (((1 ? -1845077020 : -1845077012)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 |= (!var_2);
                        var_18 = (((arr_1 [i_0]) || (~var_13)));
                        var_19 = (max(var_19, var_12));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_20 ^= ((124 ? (arr_7 [i_1 + 1] [i_1 - 1] [i_2 - 2] [i_2 + 2] [i_2 - 1]) : (arr_1 [i_1 - 1])));
                            arr_16 [i_0] [i_1 + 1] [i_2] [i_4] [i_1] [i_1] = ((var_3 ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 2] [i_2 - 2])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_21 = -1396141954;
                            var_22 -= (!(((arr_11 [i_0] [i_2] [i_4]) <= 7936)));
                        }

                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_23 = ((((1396141953 ? (arr_1 [i_2]) : (arr_14 [i_7 - 1] [i_2 - 1] [i_2 - 1]))) << (!var_9)));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = 1396141975;
                            arr_24 [i_0] [i_1] [i_2 - 1] = (!(246 ^ 142));
                        }
                        var_24 = (max(var_24, var_7));
                        var_25 -= var_2;
                    }
                    arr_25 [i_1] = (~-1845077020);
                    arr_26 [i_0] [i_1] [i_0] [i_1] = ((((arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_1 + 1] [i_1 + 1]) << (var_10 - 4124831066))));
                }
            }
        }
        var_26 *= ((((((~(arr_4 [i_0] [i_0] [20]))))) > ((((arr_20 [i_0] [i_0] [i_0] [i_0]) + (arr_21 [i_0] [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_34 [i_0] [i_0] [i_0] [9] [i_0] [i_0] = 9;

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_27 = (((arr_2 [i_11]) ? (arr_1 [i_9 - 1]) : (arr_13 [i_0] [i_8] [i_9 - 2] [i_8 - 1] [i_9 - 2])));
                            arr_38 [i_0] [i_8 - 2] = ((0 ? 137 : -1396141960));
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_28 = ((max(8420009472589879222, var_13)));
                            var_29 = (max(var_29, ((max(((max((-2147483647 - 1), -1489268347))), ((-(arr_41 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 3] [i_9]))))))));
                        }
                        var_30 = (max(var_30, (((1396141953 - 14640400708222619914) ? ((((((7 ? 16777216 : 2233785415175766016))) && 1))) : 1))));
                        var_31 = -1845077020;
                    }
                }
            }
        }
        arr_43 [i_0] = (((262143 ? 2579360208340413562 : 16383)) ^ ((((arr_18 [i_0]) << (arr_4 [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
