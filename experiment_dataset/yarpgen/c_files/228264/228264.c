/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [i_0]) ? (28672 & -29977) : (!var_11)));
        var_21 = arr_1 [i_0];
        var_22 = (((arr_1 [i_0]) ? (((var_7 == (arr_0 [i_0] [i_0])))) : (arr_1 [i_0])));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_23 ^= (((arr_3 [i_0] [i_0] [i_1 + 1]) == (arr_3 [i_1] [i_1] [i_1 + 2])));
            arr_5 [i_0] = (((arr_0 [i_1 - 2] [i_1]) ? (arr_0 [i_1 + 1] [i_1 + 1]) : var_11));
            var_24 -= ((-((var_6 ? (arr_1 [i_1]) : (arr_0 [10] [10])))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_25 = (((arr_3 [i_0] [i_0] [i_0]) ? -var_4 : (arr_1 [i_2])));
                var_26 = ((arr_4 [i_0] [i_0]) ? var_6 : (arr_7 [i_0] [i_2] [i_3]));
                var_27 = (min(var_27, (((var_0 | (arr_6 [i_0] [i_2] [i_3]))))));
                arr_10 [i_2] [9] = (arr_8 [i_3]);
            }
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_19 [i_4] [0] [i_4] [0] [18] [i_2] = var_6;
                            var_28 = (max(var_28, ((((arr_3 [i_4 + 2] [i_4 + 1] [i_4 + 2]) == (arr_3 [i_4 + 2] [i_4 + 1] [i_2]))))));
                        }
                    }
                }
                var_29 = (((arr_9 [i_4] [i_4 - 1] [i_4 + 2]) ? var_1 : (arr_15 [i_4] [i_4] [i_4 - 1] [i_4] [i_4 + 1])));
            }
            var_30 = (min(var_30, (arr_6 [i_2] [i_2] [i_2])));
            var_31 = (25380 | 40);
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_32 += (arr_11 [i_8] [i_8] [i_8 - 1] [i_8 + 1]);
                        var_33 = (min(var_33, (((var_14 ? ((var_11 & (arr_12 [i_7] [i_8]))) : (arr_22 [i_8 - 1]))))));
                    }
                }
            }
            var_34 = (min(var_34, (((~(arr_2 [i_0]))))));

            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                arr_31 [i_0] = (arr_7 [i_10 + 1] [i_10 + 1] [i_10]);
                arr_32 [16] [i_0] [i_0] [i_0] = (!10);
            }
            for (int i_11 = 4; i_11 < 24;i_11 += 1)
            {
                var_35 = (~var_3);
                arr_35 [i_0] [i_0] [i_0] [i_0] = ((!(arr_13 [i_11] [i_7] [i_7] [i_11 - 3])));
                var_36 = (min(var_36, (arr_7 [i_11 - 1] [i_11 - 2] [i_11 - 3])));
            }
        }
    }
    var_37 = (max(var_37, var_15));
    #pragma endscop
}
