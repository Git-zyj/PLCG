/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((var_7 ? ((var_9 ? 103 : var_9)) : (~var_1))), ((((min(152, 113))) ? ((min(40, 115))) : (var_2 % var_5))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = ((!(arr_6 [i_2] [i_1] [i_2])));
                    var_13 ^= (((arr_4 [i_2] [i_2 - 1] [22]) ? (arr_6 [i_1] [i_2 - 1] [i_1]) : (arr_4 [i_2] [i_2 + 1] [i_2 + 1])));
                    var_14 = ((var_2 ? 165 : var_6));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_2] [i_1] [i_2 + 1] = ((143 < (103 != 111)));
                        var_15 = (153 && var_1);

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_16 |= arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4];
                            var_17 = ((-(arr_0 [i_1])));
                            var_18 = (max(var_18, (((((((arr_10 [16] [i_0] [16] [i_3] [i_3] [i_3]) - (arr_5 [i_1])))) ? (arr_5 [i_3]) : var_9)))));
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 = ((72 ? (arr_5 [i_2]) : (arr_5 [i_2])));
                            var_20 = ((var_4 ? (arr_11 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [14] [i_2]) : var_0));
                        }
                    }
                }
            }
        }

        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            var_21 &= ((~(arr_1 [i_0] [i_6 - 3])));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_22 = ((var_2 || (arr_6 [i_6] [i_6 + 1] [i_6])));
                var_23 = ((189 ? var_4 : (113 ^ 153)));
                arr_21 [i_6] [i_7] = (133 / 153);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_24 = var_8;
                            var_25 = (132 / var_8);
                            var_26 = var_4;
                            var_27 = (arr_3 [5] [0] [i_6]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_28 = (((arr_23 [11] [11] [i_6 + 1] [i_7] [i_10] [11]) || 31));
                    var_29 = ((-245 - (~143)));
                    var_30 = (((arr_18 [i_6] [i_6] [i_6 + 1]) > (arr_12 [i_0] [18] [i_6 - 1] [i_6 - 1])));
                }
                for (int i_11 = 2; i_11 < 23;i_11 += 1)
                {
                    var_31 = ((var_9 ? (arr_12 [i_0] [i_6 - 3] [i_11 - 2] [i_11]) : (arr_10 [i_6 + 1] [i_6] [i_7] [i_7] [i_6] [i_11 - 2])));
                    var_32 = (~var_9);
                }
            }
        }
        var_33 = 30;
        var_34 = (var_5 ^ var_2);
    }
    #pragma endscop
}
