/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_11 = (max(var_11, (arr_1 [i_0] [i_0])));
            var_12 = (min(var_12, var_8));
        }
        arr_5 [i_0] = (!65040);
        arr_6 [i_0] [11] = ((-((min(9, 24)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_13 -= ((((min(((~(arr_7 [i_0] [10]))), -79))) ? -105 : 65511));
                    var_14 += ((24 ? 102 : 192));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(var_9, (~73))))));
                                arr_15 [10] [4] [i_3] [2] [i_3] [i_3] |= ((+((~(min((arr_3 [i_2] [i_2]), 8913))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            arr_19 [i_6] [i_6] [6] = var_3;
            arr_20 [i_6] = 212;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 14;i_8 += 1)
                {
                    {
                        var_16 = 1007;
                        var_17 &= arr_4 [i_8] [i_0];
                    }
                }
            }
            var_18 = arr_3 [i_0] [i_0];
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_36 [i_0] [i_0] [2] [i_0] [i_0] [i_10] = (~((+((-19626 ? (arr_1 [i_0] [i_0]) : var_7)))));
                            var_19 &= (arr_0 [i_0]);
                        }
                    }
                }
                arr_37 [i_0] [i_0] [i_0 + 1] [i_10] = ((+(min((((arr_0 [i_10]) ? 9003624810132509285 : (arr_10 [i_9]))), var_5))));
            }
            arr_38 [i_9] [i_9] [i_0] = 65506;
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_45 [i_14] [i_14] [i_9] [i_9] [i_14] = 29691;
                            var_20 = (min(var_20, (arr_29 [i_14])));
                        }
                    }
                }
            }
            arr_46 [i_9] [i_9] [i_0] = 1008;
            var_21 &= (~-6);
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 12;i_18 += 1)
                {
                    {
                        var_22 = (min(var_22, 1));
                        arr_56 [i_16] [i_16] [i_16] = (arr_48 [4]);
                        arr_57 [i_16] [i_16] [i_16] = var_8;
                        var_23 -= 1119006637821079399;
                    }
                }
            }
            var_24 = (min(var_24, var_4));
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_25 = 12498739099692082;
        arr_61 [i_19] = (((1 ? 258737328 : 65512)));
        var_26 = (arr_58 [i_19]);
    }
    var_27 = var_2;
    var_28 = (((~-1932322791948616241) ? ((var_4 ? (min(var_8, 26)) : ((max(-89, 10))))) : 46744));
    #pragma endscop
}
