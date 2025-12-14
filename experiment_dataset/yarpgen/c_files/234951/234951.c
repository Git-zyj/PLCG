/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3 + 1] = (((((-6807718685509119558 & 2985152321) ? (arr_8 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0]) : var_1)) | (arr_3 [i_0])));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = 15650;
                            var_14 = (max(var_14, (arr_1 [i_1])));
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [10] [i_2] = ((arr_7 [i_0] [i_0] [i_0]) ? (var_6 - var_10) : 30053);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_15 ^= (((~(arr_9 [i_1] [i_1] [i_1] [12]))));
                            var_16 *= (var_3 && var_5);
                        }
                        var_17 = (((!30053) && (arr_3 [i_0])));
                        arr_20 [i_2] [i_0] [7] [i_2] = (arr_10 [i_3 - 3] [i_3] [i_3 - 3] [i_3] [i_3 + 3] [i_3 + 3]);

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_2] [i_3] [i_0] = (min(56, 27640));
                            arr_26 [i_0] [i_0] = var_3;
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_6] = var_10;
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_32 [i_0] = ((~((var_7 ? var_1 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
            var_18 = (min((((arr_8 [i_7] [11] [i_7] [i_0] [i_0] [i_0]) ? (arr_22 [10] [i_7] [10] [i_7]) : (arr_22 [10] [i_0] [12] [12]))), ((((arr_9 [i_0] [i_0] [i_0] [i_7]) ? (arr_31 [i_7] [11] [i_7]) : (arr_9 [i_0] [i_0] [i_0] [i_7]))))));
            arr_33 [i_0] [1] [i_0] = (((min((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]), (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [4]))) / (min((arr_21 [i_0] [i_0] [i_7] [4] [8] [i_7]), (arr_21 [i_0] [i_0] [i_0] [i_0] [12] [i_7])))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_19 = (max(var_19, var_4));
            var_20 = (!var_7);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_42 [i_0] [i_8] [i_9] [i_0] = (~var_10);
                        var_21 = ((var_8 != (arr_30 [i_0] [i_0])));
                    }
                }
            }
        }
        var_22 -= (((((-(max(1058965828, var_3))))) || var_1));
        arr_43 [i_0] [i_0] = (((arr_36 [i_0] [i_0] [i_0]) ? 49885 : (arr_15 [i_0] [i_0])));
    }
    var_23 = var_2;
    var_24 = var_12;
    #pragma endscop
}
