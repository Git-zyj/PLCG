/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_14 [i_2] &= (arr_0 [3]);
                            var_16 = var_8;
                            arr_15 [i_1] [i_1] [i_1] [1] = var_1;
                        }
                        arr_16 [i_0] [3] [i_1] [i_3] = (max(41958, 41958));
                        arr_17 [i_1] = (arr_12 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1] [i_0]);
                        var_17 -= var_15;
                        var_18 = var_13;
                    }
                }
            }
            var_19 ^= (arr_11 [i_1] [i_1 - 4] [i_0] [i_1] [i_1 - 4]);
            var_20 = max((arr_7 [i_1 - 3]), (arr_7 [i_1 + 1]));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_27 [i_1] [3] [i_1] [i_0] [i_5] [4] [4] = (max(1868198995, (arr_4 [i_5] [i_6 - 1])));
                            var_21 = (arr_12 [i_0] [i_1] [i_1 - 4] [i_5] [i_5] [i_0] [i_7]);
                            arr_28 [i_0] [i_0] [i_1] [i_6] [i_7] [i_5] [i_7] = (arr_19 [i_6] [1] [i_0]);
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            var_22 = (max((arr_12 [i_0] [i_0] [i_0] [i_8 - 3] [i_0] [8] [i_0]), (max((arr_23 [i_8] [i_8] [2]), var_8))));
            arr_31 [i_0] = var_8;
        }
        var_23 += (min(var_6, var_15));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_35 [13] = arr_33 [i_9];
        var_24 = (min((arr_33 [i_9]), (arr_32 [i_9])));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 16;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            {
                                var_25 = (max(var_25, var_1));
                                var_26 = var_15;
                                arr_48 [i_9] [i_9] [i_10] = (min(var_6, var_7));
                                arr_49 [i_9] [i_10] [4] [10] [1] [10] [i_10] = (min((arr_47 [0] [i_13] [9] [i_13 - 1] [i_13 - 1] [i_13] [i_13]), (max((arr_47 [i_13] [5] [i_13 + 2] [i_13 + 3] [i_13 + 1] [13] [i_13]), var_1))));
                            }
                        }
                    }
                    var_27 += (min((min((arr_43 [i_11 + 2] [i_11] [i_11 + 2]), (arr_43 [i_11 - 1] [i_11 - 1] [i_11 - 1]))), (arr_43 [i_11 + 2] [8] [i_11 + 1])));
                }
            }
        }
        var_28 = (min(var_28, ((min(((min((arr_34 [i_9]), var_4))), (max((arr_34 [i_9]), var_5)))))));
    }
    var_29 = var_1;
    var_30 = var_2;
    #pragma endscop
}
