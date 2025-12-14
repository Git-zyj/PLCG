/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (max(var_16, (arr_2 [i_0] [i_0] [i_1])));
            var_17 *= (((((arr_4 [i_0] [14]) ^ var_6)) % var_5));
            var_18 = ((arr_4 [i_0] [i_0]) * (arr_4 [2] [i_0]));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_19 &= var_12;
            arr_10 [i_0] = (((arr_0 [i_2 + 2]) == (arr_8 [i_2 + 2] [i_2 + 1])));
            var_20 = (((((((arr_0 [i_0]) >= var_9)))) == (((arr_2 [i_0] [14] [i_2 - 1]) & (arr_2 [6] [i_0] [i_0])))));
            var_21 = (((arr_3 [i_2] [i_2] [i_2 + 3]) > (arr_8 [i_2 - 1] [i_2])));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [15] [i_0] [10] = var_3;
            var_22 = (arr_2 [0] [i_3] [i_0]);
            arr_15 [i_0] [i_3] = (1 || 7523);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_21 [i_0] [i_3] [i_0] [14] = (arr_7 [i_0]);
                        var_23 = var_10;
                        var_24 |= (((arr_9 [i_4]) && (arr_9 [i_4])));
                    }
                }
            }
        }
        arr_22 [i_0] = (var_7 + var_5);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_33 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_8] [i_7] [i_9 + 3]) == (arr_26 [i_9 + 4] [i_0] [i_9 + 3] [i_9])));
                            arr_35 [i_0] [i_6] [14] [i_0] [i_9] = (((((var_2 > (arr_29 [i_8] [i_0] [i_0] [i_0])))) ^ (arr_7 [i_0])));
                        }
                        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_6] [i_0] [i_7] [i_7] [i_10] = (arr_24 [i_0] [i_10 - 1] [i_10 + 4]);
                            arr_41 [i_6] [i_0] [i_10] = (((arr_38 [16] [i_10] [i_10 + 4] [i_10 + 2] [3]) + (1 || 15678305118621886366)));
                        }
                        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_25 &= (arr_44 [i_11] [i_11] [i_11 - 1] [i_11] [i_11 - 1]);
                            arr_45 [i_0] = (((arr_37 [i_11 - 1] [16] [i_11 - 1] [11] [i_11] [i_11 + 4]) && (arr_37 [i_11 - 2] [i_11] [i_11 + 4] [i_11] [i_11] [i_11 + 3])));
                        }
                        var_26 = (((arr_23 [i_0]) / (arr_23 [i_7])));
                        arr_46 [i_8] [13] [i_0] = (((arr_27 [i_0] [i_0]) / (arr_27 [i_0] [i_0])));
                        var_27 = (((arr_42 [17] [17] [17] [17] [17] [17] [17]) & (arr_42 [i_0] [i_6] [i_6] [i_7] [i_7] [i_8] [i_8])));
                    }
                }
            }
        }
        arr_47 [i_0] = (((((arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_2 [i_0] [i_0] [14]))) ^ (arr_27 [i_0] [i_0])));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
    {
        var_28 += (min((((arr_3 [i_12] [i_12] [i_12]) / (arr_3 [i_12] [i_12] [i_12]))), (arr_26 [i_12] [1] [i_12] [i_12])));
        var_29 = ((var_7 || ((((((var_9 == (arr_27 [14] [14])))) >> ((((arr_4 [i_12] [4]) || (arr_33 [i_12] [18] [i_12] [i_12] [i_12] [i_12])))))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_56 [i_12] [i_13] = (arr_1 [i_14 - 1]);
                    arr_57 [i_14 - 1] [i_13] [i_14] [i_13] = (min((arr_36 [i_12] [i_13] [i_14]), ((min((arr_17 [i_12] [i_13] [i_14 - 1]), (var_3 * 0))))));
                    var_30 *= ((((((((((arr_44 [i_12] [i_12] [i_14] [i_13] [i_14 - 1]) > (arr_8 [i_12] [i_14]))))) / (arr_54 [2])))) == (((arr_11 [0]) << (((arr_32 [i_12] [i_12] [8] [16] [i_14 - 1]) - 14926))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_31 = (max(var_31, (arr_42 [i_12] [i_12] [i_12] [i_15] [i_15] [i_15] [i_16])));
                    var_32 -= ((((((arr_25 [18]) && (arr_9 [0])))) & (((arr_26 [i_16] [6] [6] [i_12]) >> (((arr_26 [i_12] [10] [i_16] [i_16]) - 18786))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_33 = (arr_59 [i_15] [i_15]);
                                arr_68 [i_15] [i_15] [i_15] [5] [i_18] [i_18] = var_14;
                                arr_69 [i_15] [i_17] [i_17] [i_17] [i_17] = (min((((3461068009 >> (52436 - 52421)))), (((arr_50 [i_15] [i_17] [i_18]) ^ 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
    {
        var_34 = (arr_0 [i_19]);
        arr_72 [i_19] = (arr_63 [i_19] [i_19] [i_19] [i_19] [9] [i_19]);
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        arr_75 [i_20] = (min((arr_74 [i_20] [i_20]), (arr_74 [i_20] [i_20])));
        arr_76 [2] = var_9;
    }
    #pragma endscop
}
