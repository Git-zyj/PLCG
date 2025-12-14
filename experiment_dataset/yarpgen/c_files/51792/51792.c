/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [1] = (max((arr_4 [i_0]), 239));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_0] = 520093696;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_19 = (arr_2 [i_1] [i_1]);
                        var_20 = ((~(((arr_7 [0]) ? var_3 : (arr_4 [i_2])))));
                        arr_11 [i_0] [i_0] [i_2] [i_3] = (((var_0 * (arr_0 [i_0]))));
                        arr_12 [i_1] = (arr_4 [i_3]);
                    }
                    var_21 *= (arr_2 [i_1 + 2] [i_1 - 1]);
                }
                arr_13 [i_0] = (((+((520093696 ? (arr_6 [i_0] [i_1] [i_0]) : (arr_3 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_22 = 228;

                            for (int i_8 = 1; i_8 < 18;i_8 += 1)
                            {
                                var_23 = var_18;
                                arr_27 [i_4] [i_5] [i_6] [i_5] [i_8] = ((~((((((arr_25 [i_4] [i_4] [i_4] [1]) << var_12)) != (arr_0 [i_4]))))));
                                arr_28 [i_5] = (max(1, ((((max(var_11, var_1))) > (arr_7 [i_4])))));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                var_24 = ((128 ? ((61440 << (((arr_15 [i_4]) - 157)))) : (((!(arr_15 [i_4]))))));
                                var_25 = (min(var_25, (arr_7 [i_7])));
                                var_26 = ((arr_21 [i_4] [i_5] [i_6] [i_4]) << (((((-2129650575 + var_12) + 2129650603)) - 23)));
                            }
                            for (int i_10 = 2; i_10 < 15;i_10 += 1)
                            {
                                arr_35 [i_5] [i_5] [i_5] [11] [i_7] [i_5] = (max((arr_23 [i_6] [i_6] [i_6] [i_5] [i_4]), var_10));
                                var_27 ^= var_12;
                            }
                            for (int i_11 = 0; i_11 < 19;i_11 += 1)
                            {
                                arr_38 [i_5] [i_5] = 0;
                                arr_39 [i_5] [18] [i_5] [i_6] [i_7] [15] [i_11] = ((((!var_12) ? var_5 : (~var_0))));
                            }
                        }
                    }
                }
                arr_40 [i_5] = (-(((arr_21 [i_4] [i_4] [i_5] [i_5]) ? (arr_21 [i_5] [i_4] [i_4] [i_4]) : var_11)));
            }
        }
    }
    var_28 = (min(((~(~1))), var_15));
    #pragma endscop
}
