/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_4 [i_1 - 1] [i_1 - 1] [15])));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_17 = (max(var_17, var_7));
                    var_18 = (min(var_18, ((min((((!(arr_6 [i_2 - 2] [2] [2] [i_1 + 1])))), (arr_0 [i_1 - 1] [i_1 + 1]))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_19 = (arr_9 [i_1] [i_1] [i_0]);
                    arr_12 [i_0] [i_3] [i_3] [i_1] = arr_5 [15] [i_0];
                    var_20 *= ((-(arr_2 [i_0])));
                    var_21 = ((~(arr_6 [i_0] [i_3] [i_3] [i_0])));
                    var_22 = arr_5 [i_3 - 2] [i_1 + 1];
                }

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_15 [i_4] [5] [i_1] [17] = arr_11 [i_4] [i_4] [i_4];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_23 = min((arr_11 [i_0] [3] [i_4]), (arr_16 [i_0] [i_1] [i_4] [i_0]));
                                var_24 = (max(var_24, ((max(var_9, ((~(arr_0 [i_4] [4]))))))));
                                var_25 = var_6;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_26 &= (arr_6 [i_1 - 1] [i_1 - 1] [i_7] [i_1 + 1]);
                    var_27 = (min(var_27, (arr_1 [i_1 - 1])));
                    arr_23 [i_1] [i_1] [6] [6] = var_13;
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_28 = (arr_6 [i_9] [i_8] [i_8] [i_0]);
                            var_29 = var_13;
                            var_30 = (max(var_30, ((min((arr_6 [i_1] [0] [i_8] [i_9]), (arr_6 [i_1 + 1] [i_1 + 1] [i_8] [i_9 - 3]))))));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_6;
    var_32 = (min(var_32, (!var_3)));
    var_33 = (min(var_33, var_14));
    #pragma endscop
}
