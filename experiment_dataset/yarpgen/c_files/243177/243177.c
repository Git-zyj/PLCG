/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] [i_1] |= (min((arr_5 [i_0] [12]), (arr_0 [i_0] [1])));
                arr_7 [i_1] [i_1] = (max((arr_0 [i_0] [i_0]), (arr_1 [i_0])));
                arr_8 [i_1] [i_1] [i_1] = (max((max((arr_4 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_1]))), (arr_4 [i_0] [i_0] [i_0])));
                arr_9 [i_1] [i_0] [i_1] = (arr_4 [i_0] [i_0] [i_1]);
                var_20 = (max(var_20, ((max((max(((max((arr_5 [i_0] [12]), (arr_4 [i_0] [i_0] [i_1])))), (arr_0 [i_0] [i_0]))), (arr_0 [i_1] [i_0]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        var_21 = (arr_12 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [1] [i_3] [i_4] [i_3] [1] = (arr_19 [i_5]);
                                arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] [i_2] [i_6 + 1] = (arr_13 [i_2 - 2] [i_4] [i_4]);
                            }
                        }
                    }
                    var_22 = (arr_19 [i_2]);
                    var_23 *= (arr_10 [i_2 - 1] [i_3]);
                    arr_25 [i_2] [i_3] [i_4] = (arr_22 [i_2] [i_3] [i_4] [i_4] [13]);
                }
            }
        }
        arr_26 [i_2] = (arr_17 [i_2]);
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_24 = (arr_28 [i_7]);
            var_25 = (arr_29 [i_7]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            arr_33 [i_7] = arr_27 [i_7] [i_7];
            var_26 = (max(var_26, (arr_30 [i_7] [0] [i_7])));

            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 21;i_12 += 1)
                    {
                        {
                            arr_42 [12] [i_7] [i_7] [i_10] [i_7] [i_7] = (arr_38 [i_7] [i_9] [i_7] [i_9]);
                            arr_43 [i_7] [i_9] [i_7] [i_11] [i_12 - 2] [i_7] [i_7] = (arr_28 [i_9]);
                            var_27 = arr_30 [i_7] [i_7] [i_10];
                        }
                    }
                }
                arr_44 [i_7 + 1] [i_7] [i_10] = (arr_38 [i_9] [i_9] [i_9] [i_7 + 1]);
                arr_45 [i_7] = arr_36 [i_7 - 2] [i_7 - 2] [15];
            }
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            arr_48 [i_7] = (arr_39 [i_7]);
            arr_49 [i_7] = (min((arr_27 [i_7] [i_7]), (arr_29 [i_13])));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    {
                        arr_55 [i_7] [i_13] [i_14] [i_14] = (min((max((arr_31 [i_7]), (arr_41 [i_7] [i_13] [i_7] [i_15] [i_7 + 1] [i_15] [i_13]))), (min((arr_30 [i_7] [i_7] [i_7]), (max((arr_27 [i_7] [i_13]), (arr_32 [i_7 + 1] [i_13] [i_14])))))));
                        arr_56 [i_7 + 1] [i_7] [i_14] [i_14] [4] [i_7] = (arr_52 [i_7] [i_13] [i_13] [i_7]);
                        arr_57 [i_7] [i_13] [i_7] [i_15] = (arr_32 [1] [2] [i_15]);
                        arr_58 [i_7 + 1] [i_13] [i_7] [i_15] = (max((min((max((arr_51 [i_7 - 1]), (arr_46 [i_7]))), (arr_38 [i_15] [i_13] [i_14 + 2] [i_15]))), (max((arr_50 [12] [i_14 + 2] [11]), (min((arr_54 [i_13] [i_13] [i_14 + 2] [i_15]), (arr_54 [i_7] [i_13] [i_14] [i_7])))))));
                    }
                }
            }
        }
        arr_59 [i_7] = (arr_34 [i_7] [10]);
        var_28 = (min(var_28, ((min((arr_35 [i_7 + 1] [i_7 - 1] [i_7 - 1]), (max((max((arr_54 [i_7] [i_7 + 1] [i_7] [i_7]), (arr_31 [14]))), ((max((arr_50 [i_7] [i_7] [i_7]), (arr_29 [i_7])))))))))));
    }
    #pragma endscop
}
