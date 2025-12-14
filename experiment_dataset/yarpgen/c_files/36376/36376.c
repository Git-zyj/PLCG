/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_11, var_9)))) ? var_2 : ((((min(1, var_1))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_2 [i_0 + 1]) ? (max(9223372036854775807, 6609198810648010914)) : -2440378482309444191);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 -= -9223372036854775806;
            arr_7 [i_0] [i_0] [2] = (var_7 & 28672);
            var_17 = (arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1]);
        }
        arr_8 [i_0] [i_0] = (min((((1 && (arr_2 [i_0 + 2])))), (arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 2])));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 = (min(((-6609198810648010914 - (0 + var_7))), (min((arr_9 [i_2 - 1]), (((-9223372036854775807 - 1) - -6609198810648010902))))));
        var_19 = ((max((arr_3 [i_2] [i_2 - 2] [i_2]), (arr_9 [i_2]))));
        var_20 = ((!((((arr_1 [i_2 - 2]) ? ((((arr_1 [i_2 + 1]) && var_7))) : (arr_5 [i_2 + 1]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_21 |= (((min(var_3, var_7))) ? ((-4742639478788332211 | (arr_12 [i_2 - 1]))) : (((4782120869288105246 ? -164396333 : 109))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_24 [7] [i_3] [2] = (~3);
                            var_22 = (min(var_22, -305576584));
                            arr_25 [i_2 + 1] [i_4] [i_5 + 1] [i_6] = (arr_6 [i_5 + 1] [i_2 - 3]);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_7] [i_5] [i_4] [i_3] [i_3] [i_2] = (arr_6 [i_5 - 1] [9]);
                            var_23 = (19037 ^ 2383620219998031774);
                            var_24 = (max(var_24, var_10));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_3] [i_4] [1] [13] [i_2 + 1] = ((((max(var_9, 27445))) ^ (arr_20 [i_2] [i_3] [i_4] [i_5] [16] [i_2])));
                            var_25 = ((-((((max(4742639478788332230, 1))) ? 2147482624 : (~var_2)))));
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_26 = (arr_11 [i_2 + 1]);
                            var_27 ^= (((-(arr_18 [i_5] [i_5]))) ^ var_10);
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_28 = 1889073954;
                            arr_38 [i_2 + 2] [12] [i_2] [i_2] [i_2] = (max(16384, ((((arr_14 [i_5 - 1]) ? (arr_35 [i_5 - 1] [i_3] [i_2] [1] [i_2] [5] [i_4]) : (((arr_26 [1]) ? 30720 : var_6)))))));
                        }
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            arr_41 [5] [16] [i_4] [i_5 + 1] = ((((var_12 || var_0) ? 18446744073709551611 : (arr_35 [i_11] [7] [i_5] [i_4] [i_4] [i_3] [i_2]))));
                            var_29 = ((~(9 + var_7)));
                            arr_42 [i_4] [i_5 + 1] [i_4] = (arr_1 [i_2]);
                            arr_43 [i_2 - 2] [i_3] [i_4] [i_5 - 1] [i_11] = (((arr_17 [i_5 + 1]) ? ((-((((arr_4 [i_2]) && 9121708225045215041))))) : (arr_3 [i_4] [i_5] [i_11])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
