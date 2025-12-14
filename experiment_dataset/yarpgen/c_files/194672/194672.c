/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (arr_0 [1]);
        var_17 = (min(var_17, (arr_0 [i_0])));
        var_18 = (max(var_18, (arr_1 [i_0])));
        var_19 += (((((arr_0 [i_0]) != (min((arr_0 [i_0]), (arr_0 [i_0]))))) && 0));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [5] [1] [i_1] = (arr_2 [i_0] [i_1] [i_1]);
            arr_5 [i_1] [i_1] [i_0] = (arr_1 [i_1]);
            var_20 = ((2 != (arr_2 [i_0] [i_0] [5])));
        }
    }
    var_21 = ((var_4 ? 60 : ((53 ? 512 : 127))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_12 [i_3] [i_3] [i_3] = (((!48) ? (((arr_7 [i_4]) / var_15)) : (((arr_7 [i_4]) % (arr_7 [i_2])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = var_14;
                                var_23 = (arr_15 [i_3] [i_5] [i_4] [i_3] [i_3]);
                                arr_17 [i_5] [i_3] [i_4] [1] [i_6] [0] = (((max((arr_7 [i_6]), (((((arr_7 [i_2]) + 2147483647)) << (((var_8 + 2110148401) - 23)))))) / ((+(min((arr_13 [i_6] [i_3] [i_3] [i_2]), (arr_8 [i_5] [i_4])))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_24 = (min(var_24, (((((((min(21, var_8)) % (arr_21 [1] [4] [4] [i_2] [i_7])))) ? ((((min((arr_11 [i_2] [i_3] [i_2]), (arr_14 [i_7] [i_7] [i_2] [i_7])))))) : (67 && var_1))))));
                        var_25 = (max((arr_11 [i_3] [i_4] [i_3]), (((arr_16 [i_2]) * (min((arr_19 [i_4] [i_4] [i_4] [9]), var_13))))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_3] [i_4] [i_2] = var_2;
                        var_26 = (min(var_3, (((((arr_7 [i_8]) % (arr_9 [i_3])))))));
                        arr_26 [i_2] [i_3] [i_8] = (min(((max(202, (arr_9 [i_3])))), (min((arr_16 [12]), ((22 ? var_14 : 53))))));
                        arr_27 [i_3] [i_3] = ((0 >= (arr_18 [i_2] [i_2] [9] [i_4] [i_4] [i_8])));
                        arr_28 [i_3] = (~var_11);
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_27 ^= ((max((min(2, var_4)), var_0)));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_35 [i_2] [i_2] [i_4] [i_3] [i_10] [i_4] = (4294967290 << 0);
                            var_28 = (min((min((arr_18 [i_10] [i_10] [i_9] [i_4] [i_3] [i_2]), (-2147483647 - 1))), (((!(arr_18 [i_2] [i_3] [i_4] [i_4] [i_9] [12]))))));
                            var_29 -= (min((((arr_6 [i_2]) / (arr_6 [i_2]))), (((arr_32 [i_3] [i_3] [12] [2]) ? (arr_7 [i_2]) : (arr_9 [i_2])))));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            var_30 = (((((arr_20 [i_11] [i_9] [i_4] [i_3] [i_2]) / (arr_20 [i_2] [i_3] [i_4] [i_9] [i_11]))) * 9223372036854775789));
                            var_31 = ((1 | (min(1040187392, 62))));
                            arr_39 [i_3] [i_9] [i_4] [i_3] [i_3] = 480756174;
                            var_32 -= (arr_15 [i_9] [i_9] [i_4] [i_3] [i_9]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_33 = ((48 >> (692 - 661)));
                            arr_42 [i_3] [i_12] [i_9] [9] [7] [7] [i_3] = 233;
                            arr_43 [i_2] [i_3] [i_3] = (arr_6 [i_2]);
                            arr_44 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] [1] = (arr_11 [i_4] [i_3] [i_3]);
                            var_34 = (i_3 % 2 == zero) ? (((1 << (((arr_30 [i_3] [i_9] [i_4] [i_2] [i_2] [i_3]) + 4619604368646025712))))) : (((1 << (((((arr_30 [i_3] [i_9] [i_4] [i_2] [i_2] [i_3]) + 4619604368646025712)) - 2220649281196170153)))));
                        }
                    }
                    var_35 = (max((arr_9 [i_3]), ((((arr_15 [i_3] [i_3] [i_3] [i_2] [i_3]) > (arr_7 [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
