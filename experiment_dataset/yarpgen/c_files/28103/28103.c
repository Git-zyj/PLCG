/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 ? (var_2 | 1) : var_4))) ? var_2 : (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 -= 1;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [1] [i_1] [i_1] [i_1] = (arr_2 [i_1]);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_13 [1] [i_1] [7] [i_3] = (((arr_6 [i_0 + 1]) < (arr_6 [i_0 - 1])));
                        var_12 = (arr_4 [i_0 - 3] [i_0 - 1] [i_0 + 2]);
                        var_13 = (var_7 == var_2);
                        arr_14 [i_0] [1] = (((arr_7 [i_0 + 2]) ^ (arr_7 [i_0 - 3])));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_14 = (((arr_8 [i_0 + 1]) ? ((((var_3 <= (arr_15 [i_0 - 2] [2] [i_0 - 2]))))) : (arr_11 [i_0] [i_0] [i_0] [19] [i_0] [i_0 - 2])));
                    arr_17 [i_0] [20] &= var_6;
                    var_15 = (((arr_0 [i_0 + 1]) == (arr_16 [i_4] [21] [i_0 + 1])));
                }
                for (int i_5 = 4; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_21 [6] [1] [16] = (~var_8);
                    var_16 = (((((-((-(arr_11 [10] [i_5 + 3] [19] [i_1] [i_1] [i_0 + 1])))))) ? 1 : ((((max(var_1, (arr_18 [1])))) ? (arr_3 [i_5 - 4] [i_5 - 4] [i_0 + 1]) : (arr_11 [i_0] [i_0 - 1] [i_5 - 4] [i_5 + 1] [i_5 + 1] [12])))));
                    var_17 = (min(var_17, (((((min((arr_6 [i_0 - 2]), (arr_4 [i_5 + 2] [i_5 + 2] [20])))) ? (((((var_5 ? (arr_2 [i_0 - 3]) : (arr_5 [17] [4]))) < (arr_8 [i_0 - 2])))) : ((((arr_7 [i_1]) < (arr_16 [i_5 - 2] [i_0 - 1] [i_5 + 1])))))))));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [2] [18] = ((~(var_3 | var_8)));
                    arr_27 [i_0 - 1] [i_0 - 1] [i_0 - 1] = 26290;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_18 = (min(var_18, (((var_5 / (arr_0 [i_6 + 1]))))));
                        arr_30 [18] [i_1] [i_1] = (arr_11 [0] [i_7] [i_0 - 1] [9] [i_0 + 2] [i_0 - 1]);
                        arr_31 [9] = (arr_3 [i_6 - 1] [i_6 - 1] [18]);
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_19 += (8 ? (((var_1 || (arr_20 [i_0] [i_1] [21] [i_8])))) : (arr_12 [i_6] [i_6 - 4] [i_6 - 4] [i_6 + 1] [i_6 - 4]));

                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            arr_36 [12] [i_0 - 1] [i_6 - 3] [i_1] [i_0 - 1] [i_0 - 1] = (arr_35 [i_0 - 2] [i_9 - 1]);
                            var_20 = ((var_7 ? (arr_24 [i_0] [i_1] [i_0] [6]) : (arr_0 [i_0 - 2])));
                            arr_37 [i_0] [i_1] [i_6 + 3] [i_0] [i_9 - 1] [2] = (((arr_9 [i_6 - 3] [i_6 + 1] [i_6 + 3]) >= (arr_2 [i_0 - 1])));
                        }

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_10] [i_8] [i_0 - 2] [i_0 - 2] [i_0 - 2] = (arr_6 [1]);
                            arr_41 [i_6] [i_6 + 1] = var_3;
                            arr_42 [7] = ((arr_23 [i_0] [i_8]) ? (arr_18 [i_6 - 2]) : (arr_39 [1] [i_10] [1] [i_8] [i_1] [15] [1]));
                            arr_43 [i_0 - 2] [2] [1] [i_6 - 3] [i_0 - 2] [i_8] [i_10] = arr_0 [i_0 - 3];
                        }
                    }
                }
            }
        }
    }
    var_21 = var_9;
    #pragma endscop
}
