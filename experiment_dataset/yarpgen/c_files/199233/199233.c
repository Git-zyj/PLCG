/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_11 = 74;

                    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_1] [i_1] [i_2] = ((4170499218 >= 74) * var_7);
                        var_12 = ((13600 ? 19904 : 0));
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] = (!-100);
                            var_13 = (max(var_13, (arr_10 [16] [i_1] [i_5 + 1])));
                        }
                        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_14 += var_7;
                            arr_22 [4] [i_1] [1] [13] = (((4294967280 != 0) + var_2));
                            var_15 = ((~(arr_19 [i_4] [i_1 - 1] [i_4 + 1] [i_4 + 1] [i_6 - 1])));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_16 = (var_10 | var_4);
                            var_17 = (!var_1);
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_1] [15] [15] [15] = (((((0 ? 64384 : 4095))) % 9378355451364687307));
                            arr_28 [i_8] [i_1] [i_1 - 1] [i_1] [i_0] = ((~(arr_26 [i_0] [i_4 + 2] [i_4 + 2] [i_4] [i_8] [i_4] [i_1 - 1])));
                            var_18 = -31775;
                            arr_29 [i_1] [i_1 - 1] [7] [i_4] [i_1] = ((~(var_8 || -20706)));
                        }
                        arr_30 [i_1] [i_1] [i_2] [i_1] [i_1] = var_10;
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_33 [8] [i_1] = -var_3;
                        var_19 = var_6;
                    }
                }
                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_20 = min(var_0, 1);
                    arr_36 [4] &= var_1;
                }
                var_21 *= var_5;
            }
        }
    }
    var_22 = ((-var_4 ? (112573881 >= var_4) : (((((470980329 ? 1 : -86))) ? var_2 : ((max(var_7, 46286)))))));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                var_23 |= (arr_14 [0] [i_13] [0] [1]);
                                var_24 = (max(var_24, ((((arr_12 [i_12] [i_12] [8] [18] [i_12]) ? var_9 : ((min((max(970856910, var_0)), var_0))))))));
                                arr_50 [i_11] = -var_6;
                                arr_51 [i_13] [12] [6] &= (((((min(var_6, var_8)) == -var_4)) ? (max((arr_12 [1] [i_12] [i_13] [0] [i_12]), var_8)) : (((((((((arr_31 [i_11] [i_11] [i_11] [i_11]) + 2147483647)) >> (var_0 + 29182))) >= 44268))))));
                            }
                        }
                    }
                    var_25 = (min(var_25, -1662727741));
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 13;i_17 += 1)
                        {
                            {
                                arr_60 [i_16 + 1] [i_12] [i_11] [i_16] [i_12] [i_13] = (((max(((((arr_16 [1]) ? 1233626870 : var_4))), (var_5 ^ var_10))) == var_1));
                                var_26 = var_8;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_27 += 1233626884;
                                var_28 ^= (44 + -8);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
