/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [11] [i_2] [11] [i_1] [i_0] = var_3;
                        arr_11 [i_0 - 2] [i_1] = (~var_8);
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((!(arr_8 [i_0] [i_0] [i_0 + 2])));
                }
            }
        }
        arr_13 [i_0] |= (!var_3);

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_12 -= ((-(arr_15 [i_0 - 2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_23 [i_6] = -var_4;
                        arr_24 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = ((!(arr_1 [i_0 - 1])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_32 [i_0 + 2] [i_4] [i_7] [i_8] [i_9] = arr_18 [i_0];
                            arr_33 [i_0] [16] [i_0] [i_0 + 3] = arr_14 [i_0 - 2] [i_7];
                            var_13 = (!var_1);
                            var_14 = arr_31 [4] [4] [i_7] [0] [i_0];
                            arr_34 [i_0] [i_0] [i_7] [i_7] [i_9] = (!var_9);
                        }
                    }
                }
            }

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_43 [10] [i_10] [i_11] = (arr_18 [i_11]);
                            arr_44 [0] [2] [i_10] [i_11] [i_11] [i_11] [i_12] = -var_7;
                            arr_45 [i_0 + 3] [i_11] = ((~(arr_17 [i_0 + 3] [i_0 + 2])));
                        }
                    }
                }
                var_15 = ((~(arr_7 [i_0] [i_0 + 2] [16] [i_0 + 2] [i_0] [16])));
                var_16 |= var_9;
                var_17 = (arr_7 [i_0] [14] [i_10] [i_4] [i_0] [14]);
            }
            var_18 = (arr_40 [8] [9] [8] [i_0] [i_0 - 1]);
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            arr_48 [16] [16] = (~var_8);
            var_19 = (arr_6 [i_0] [i_0] [16]);

            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                var_20 -= -var_2;
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 16;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_57 [i_0] [i_0] [i_13] [i_0] [i_0] [0] = var_8;
                            arr_58 [i_0] [i_0] [i_14] [i_0] = (arr_31 [i_0] [i_0] [1] [i_0] [i_0]);
                            var_21 = (max(var_21, var_1));
                        }
                    }
                }
                arr_59 [i_0] [i_13] [i_14] [i_0] = var_6;
            }
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                var_22 = (arr_26 [4] [i_17] [i_0 + 3] [i_0]);
                var_23 = var_0;
                arr_63 [i_13] [i_13] [i_13] [4] |= arr_40 [i_0] [i_13] [i_13] [16] [i_17];

                for (int i_18 = 0; i_18 < 17;i_18 += 1)
                {
                    var_24 ^= arr_18 [i_17];
                    var_25 ^= (arr_8 [i_0] [i_13] [i_17]);
                }
            }
            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                arr_68 [i_13] [i_19] = (arr_20 [i_0] [i_0] [i_13] [0]);
                var_26 = (min(var_26, (((!(arr_6 [6] [i_13] [i_13]))))));
            }
            for (int i_20 = 1; i_20 < 15;i_20 += 1)
            {
                arr_72 [i_0] [i_0] [i_0] [i_0] |= var_6;
                var_27 ^= ((!(arr_50 [i_0] [i_13] [i_13] [i_0])));

                for (int i_21 = 0; i_21 < 17;i_21 += 1) /* same iter space */
                {
                    var_28 = var_7;
                    var_29 ^= var_2;
                }
                for (int i_22 = 0; i_22 < 17;i_22 += 1) /* same iter space */
                {
                    arr_77 [12] [12] [i_13] [12] = (arr_69 [i_0 + 2] [i_0 + 3] [i_0 + 4]);
                    arr_78 [13] [1] [16] [16] = (~var_3);
                    var_30 = (arr_74 [i_0] [i_0] [i_22] [i_20 + 1]);
                }
                for (int i_23 = 3; i_23 < 16;i_23 += 1)
                {
                    var_31 = var_6;
                    arr_81 [i_0] [11] [i_0] [i_23] = (~(!var_8));
                }
            }
        }
    }
    var_32 = (max(var_2, var_5));
    var_33 = (~var_2);
    #pragma endscop
}
