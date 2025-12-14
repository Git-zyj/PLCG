/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    var_15 *= (max(-85, (((max(var_13, 30))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 = ((!(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 *= (~-1285324041);

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_12 [i_3] [i_3] [i_3] [13] [14] = (((arr_10 [i_2 + 2] [i_2 - 4] [14] [i_2 - 3] [i_3 + 1]) ? ((((arr_9 [i_0] [9] [i_3 - 1] [i_4]) > (arr_11 [i_0] [5] [i_0] [1] [i_3])))) : 1));
                            var_18 = ((!(arr_2 [i_2 + 3] [i_3 + 1] [i_3 + 1])));
                            arr_13 [i_3] [i_2] [i_3] [i_4] = (arr_0 [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_5] [i_3] [i_3] [i_1] [i_0] = (arr_10 [i_0] [3] [5] [5] [i_5]);
                            arr_17 [7] [7] [i_2] [i_3] [i_5] = (arr_3 [13] [13] [i_3]);
                            var_19 = -43;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_20 = (((arr_19 [i_3] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3]) ? (arr_19 [i_3] [i_3 - 1] [i_3 + 2] [i_2 + 1] [i_3]) : 65528));
                            arr_21 [5] [i_3] [i_2] [i_3] [2] = 7;
                            var_21 = (((arr_8 [i_3 + 2] [i_2 - 2] [i_2] [i_3]) >= (arr_8 [i_3 + 1] [i_2 + 1] [4] [i_3])));
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = (((var_3 ? (arr_9 [0] [0] [i_0] [i_0]) : (arr_4 [i_0] [i_0]))));
        arr_23 [1] [1] = (arr_18 [14] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_28 [i_7] = arr_26 [13];
        arr_29 [i_7] = ((((-((30 ? -4096 : (arr_25 [i_7]))))) >= -2147483645));
        arr_30 [1] [i_7] = -104;
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_22 = ((min((max(var_7, 37)), (arr_31 [1]))));
        arr_33 [i_8] = arr_31 [i_8];
    }
    #pragma endscop
}
