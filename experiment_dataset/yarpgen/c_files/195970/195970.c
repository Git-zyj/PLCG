/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_13;
        arr_3 [i_0] [2] = ((-(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = (((-(arr_5 [i_1]))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_20 += (!(!131));
            var_21 = ((!(!111)));
            var_22 = (~-33);
            var_23 = (~-6709);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            arr_11 [i_3] [11] [i_3] = -var_13;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_24 += ((!(arr_13 [i_3 - 1] [i_3 + 1])));
                var_25 = (!(arr_12 [i_3 + 1] [11] [11] [i_3]));
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_26 = ((~(-2147483647 - 1)));
                var_27 = (~-var_13);
                var_28 = (min(var_28, (((~(arr_15 [i_5 - 1] [i_3 - 1] [i_5 - 1] [i_5 - 1]))))));
            }
            arr_17 [i_3] [i_3] = 124;
        }
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    {
                        var_29 += ((-(!56737)));
                        arr_27 [i_1] [i_1] = -var_16;
                        arr_28 [i_1] [i_6] = (!((!(arr_25 [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1]))));
                        arr_29 [i_8] [i_7] [i_6 + 1] [i_1] [i_1] [i_1] = ((~((~(!-5)))));
                    }
                }
            }
        }
        var_30 += (!1);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 12;i_11 += 1)
            {
                {
                    var_31 = 233;
                    var_32 = -25;
                    var_33 += (!-30);
                    var_34 = 122;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_35 = ((-(arr_9 [i_13] [i_11 - 1] [i_13])));
                                var_36 = ((!(arr_6 [i_9])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    {
                        arr_48 [i_9] [i_14] [i_9] [i_15] = var_12;
                        var_37 = ((~(arr_24 [i_16 + 2] [i_16 + 3] [i_16 - 1])));
                        var_38 = 146;
                        var_39 = (~30163);
                    }
                }
            }
            var_40 = -8792;
        }
    }
    var_41 = var_2;
    var_42 = var_0;
    #pragma endscop
}
