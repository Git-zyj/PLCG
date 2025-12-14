/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [1] [3] = (!-var_7);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_15 [6] [i_1] [i_1] [6] [i_3] [6] |= (arr_7 [i_0] [i_2 + 1] [6]);
                        arr_16 [i_2] [i_1] [i_1] [i_0] = 5498907233627690171;

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            arr_19 [i_1 - 1] [i_1] [1] = (((((-8 ? -8 : 744531812))) ? (((arr_9 [i_1]) ? 5498907233627690171 : var_5)) : (arr_7 [i_1] [i_4 - 1] [i_1])));
                            arr_20 [i_1] [i_1 - 1] [i_1] [i_3] [i_2 - 1] = (((((2325466895 ? (arr_3 [i_4]) : var_9))) ? (arr_14 [7] [2] [i_1] [i_1] [i_1 - 1] [2]) : ((((arr_13 [i_0] [i_1] [3] [i_4]) || 5498185271263152744)))));
                            arr_21 [i_0] [i_1] [3] [i_2] [i_3] [1] = (!((((arr_18 [i_1] [6] [6] [7]) ? (arr_2 [1]) : (arr_17 [i_0] [6] [6] [i_0] [i_0] [i_0] [i_1])))));
                            arr_22 [i_4] |= (arr_0 [0]);
                            arr_23 [i_4] = var_8;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            arr_27 [6] [i_1] [i_2] [i_1] [6] = 8098251662090629137;
                            arr_28 [i_5] [i_1] [6] [i_2 + 1] [i_1] [i_0] = (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : var_9));
                            arr_29 [i_5] [i_1] [i_3] [i_2] [i_1] [i_0] = ((!(((9223372036854775807 ? (arr_24 [5] [i_2]) : 1172383438)))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_33 [7] [i_1] [i_2] [i_1] [i_0] = 0;
                            arr_34 [6] [6] = -105;
                        }
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            arr_37 [4] [4] [i_0] [0] [i_2] [i_1] [i_7 - 2] = 8;
                            arr_38 [7] [7] [i_2 + 1] [i_1] [i_2] [9] [i_2 + 1] = (((-9223372036854775807 - 1) ? -78 : 15));
                            arr_39 [i_2] [i_1] [i_0] = ((((((arr_36 [i_0] [4] [i_2] [i_2 - 1] [i_3] [4] [i_1]) ? (arr_13 [1] [i_1] [i_1] [i_0]) : (arr_12 [i_0] [i_1] [4] [i_3] [i_7 - 3])))) ? (759739808 * var_3) : var_3));
                        }
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_42 [i_1] = (((((1 ? (arr_30 [i_8]) : (arr_30 [i_1 - 1])))) ? -8098251662090629123 : 1));
                        arr_43 [i_0] [6] [i_8] [i_1] [2] [i_8] = (!1293322401);
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_9] [i_9] = (arr_0 [i_1 - 1]);
                        arr_48 [i_1] [i_2] [i_1] [i_1] = (max((arr_30 [i_0]), 67108863));
                    }
                }
            }
        }
    }
    var_18 = 127;
    #pragma endscop
}
