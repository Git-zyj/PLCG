/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] |= ((+((-((var_16 ? (-127 - 1) : var_5))))));
                    var_18 = var_13;
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_19 = (max(var_19, (((((-(arr_3 [i_3]))) >= (((-1 + 2147483647) >> (arr_13 [i_4]))))))));
                            var_20 = (arr_0 [i_4] [14]);
                        }
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            arr_28 [i_4] [i_3] [i_4] = (max((arr_25 [i_3 + 2] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_8 + 1] [i_8 + 2]), ((((arr_20 [i_8] [i_6] [9] [9] [i_3 + 3]) > (arr_15 [i_8 - 2] [i_8 - 2]))))));
                            arr_29 [i_5] [i_6] = (((arr_13 [i_8 + 2]) ? 1 : 1));
                            arr_30 [i_6] [4] [6] = ((-(arr_6 [i_3] [i_4] [i_6])));
                            var_21 = (((((~(arr_8 [i_8] [i_8] [i_8 - 2] [i_3 + 2])))) ? ((-(arr_8 [i_3 - 1] [i_8] [i_8 + 2] [i_3 - 1]))) : (arr_8 [i_8] [i_8] [i_8 + 2] [i_3 - 1])));
                            arr_31 [i_6] [i_5] = (5978402103089195991 % 32767);
                        }
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            var_22 *= (((-(max((arr_11 [i_3]), 2147483647)))));
                            var_23 = (0 + 32620);
                            arr_34 [i_5] [i_4] [i_5] [i_6] [i_9] = ((!(arr_14 [i_5] [i_6])));
                        }
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            arr_37 [9] [i_4] [1] [1] [i_10] = ((!((max((arr_3 [i_3 + 2]), (arr_3 [i_3 + 1]))))));
                            var_24 = (1 == 1);
                        }
                        var_25 = (arr_0 [i_3 + 1] [i_3 - 1]);
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((arr_8 [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 3]) ? (arr_7 [i_3] [i_3] [i_3] [i_3 + 3]) : (min((arr_7 [i_3] [i_3] [i_3] [i_3 + 3]), (arr_8 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2]))))))));
        var_27 = (arr_12 [i_3] [i_3]);
    }
    #pragma endscop
}
