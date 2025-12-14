/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_21 = ((var_1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [i_0] [11] [i_1] [i_1] [i_0] = (~var_11);
                            var_22 = ((var_1 ^ (arr_8 [i_2 - 2] [i_2 + 2] [i_0] [i_2 + 2])));
                        }
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = (!var_0);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_17 [4] |= (arr_2 [6] [6]);
        var_23 ^= (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        arr_18 [i_5] = var_4;
    }
    for (int i_6 = 3; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            var_24 ^= var_12;
            var_25 ^= -var_3;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            var_26 ^= (((arr_26 [i_10 + 1] [i_10 + 1] [i_6 + 2]) ? var_15 : (arr_26 [i_10 - 1] [i_10 + 1] [i_6 + 2])));
                            var_27 = (arr_28 [10] [i_9] [10] [10]);
                            var_28 ^= var_19;
                        }
                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            var_29 = (((arr_36 [i_6] [i_6 + 2] [i_10 - 1] [i_12 + 1]) ? var_18 : (arr_25 [i_6 + 1] [i_10 - 1])));
                            var_30 = (arr_27 [i_12]);
                            arr_37 [i_6] [4] [i_9] [i_9] [i_9] [i_6] [i_12] = ((var_18 ? (arr_35 [i_12 - 1] [i_12 - 1] [i_10 - 1] [i_10 - 1] [i_6 - 2] [i_6 - 3]) : (~var_5)));
                            var_31 = (max(var_31, var_7));
                            arr_38 [i_12 - 2] [i_12 - 2] [i_9] [i_12 - 2] [i_12] = var_4;
                        }
                        var_32 = (arr_31 [i_6 - 2] [i_6 - 3] [i_10 + 1]);
                        var_33 ^= (arr_27 [i_6 + 2]);
                        arr_39 [i_6] [i_6] [7] [i_6] = (arr_20 [i_6 - 1] [i_10 + 1]);
                    }
                }
            }
            var_34 = var_17;
        }
        var_35 = ((((((max(var_11, var_12)))) >= var_10)) ? (((arr_24 [1] [i_6] [6]) ? 4049645759317401716 : (arr_29 [i_6] [i_6] [i_6] [i_6 + 2]))) : var_0);
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_42 [i_13] [i_13] = var_5;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_36 ^= (~var_0);
                                arr_54 [i_13] [i_13] |= (((((arr_41 [i_13] [i_13]) * (min(9665767740580516987, var_18)))) >= (arr_43 [i_13] [i_13] [i_13])));
                                var_37 = var_11;
                            }
                        }
                    }
                    var_38 = (~(max(var_16, (arr_23 [1] [i_14] [i_14]))));
                    var_39 ^= (arr_52 [i_13] [i_15]);
                }
            }
        }
        arr_55 [i_13] [9] = ((((((arr_50 [i_13] [i_13] [i_13] [i_13]) ? ((max(-114, (arr_43 [i_13] [i_13] [i_13])))) : (((arr_43 [16] [16] [16]) ? (arr_30 [i_13] [i_13] [11]) : var_14))))) || ((min((max((arr_46 [i_13] [i_13] [i_13]), var_0)), (arr_33 [i_13] [i_13] [14] [14] [i_13] [i_13]))))));
        arr_56 [i_13] = (min(((max(var_11, (arr_20 [15] [i_13])))), (arr_48 [i_13] [i_13] [14] [i_13])));
    }
    #pragma endscop
}
