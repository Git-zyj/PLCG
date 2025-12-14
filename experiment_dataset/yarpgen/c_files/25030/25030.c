/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 *= (arr_3 [i_4 - 1] [i_4] [i_4]);
                                var_14 = ((((((arr_10 [i_2] [i_1] [1] [i_2 - 2] [i_4 + 1] [1]) / ((max((arr_5 [i_0] [i_1] [1]), (arr_8 [i_1] [5] [5] [i_3]))))))) ? 1 : (arr_8 [i_1] [11] [i_2] [i_1])));
                            }
                        }
                    }
                    var_15 += ((arr_9 [i_2] [i_0]) ? (((min((arr_7 [13] [11] [13] [i_1]), (arr_6 [i_0] [i_1] [i_2] [i_0]))))) : 1);

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_16 += ((((max((arr_12 [i_2]), (arr_12 [i_0])))) ? (((arr_7 [i_0] [i_2 + 1] [i_2 - 3] [i_2 + 2]) ? (arr_8 [i_0] [i_2 - 2] [i_2 - 2] [i_0]) : (arr_10 [0] [i_0] [i_1] [0] [i_5] [i_1]))) : ((~(((arr_10 [10] [i_0] [i_2 - 2] [i_2] [0] [i_2 - 1]) + (arr_15 [i_0] [i_1] [i_0])))))));
                        var_17 = (max(var_17, ((max(((((max(var_10, (arr_9 [i_5] [i_1])))) ? (~1) : var_3)), (((((max(1, 1))) < (arr_3 [i_2 + 2] [i_2 + 1] [i_2 - 2])))))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_18 = (min(var_18, ((max(((-(arr_10 [i_7] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_5 [2] [8] [i_7]))))));
                            var_19 = max(((min((var_3 << var_5), 1))), (min((arr_16 [i_2] [i_1] [i_2] [i_2 + 1] [8] [i_0]), (arr_16 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_7]))));
                        }
                        var_20 *= ((min((arr_4 [i_0] [i_1] [i_1]), var_10)));
                        var_21 += 1;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_4, (arr_7 [i_2 - 1] [i_8] [i_8 + 1] [i_8 - 1])));
                                arr_29 [i_9] [i_0] [i_9] [i_9] [i_9] |= -29092;
                                var_23 = (min(var_23, (arr_16 [i_0] [i_0] [i_9] [i_1] [i_9] [i_2 - 3])));
                            }
                        }
                    }

                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        var_24 -= (((((max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_26 [1]))))) ? var_3 : (max((((arr_31 [1] [i_1] [i_2] [i_10] [i_1] [i_10 - 2]) ^ var_11)), (arr_6 [i_10 + 1] [i_10 + 1] [i_10 - 2] [i_0])))));
                        var_25 = (((((max((arr_16 [i_10] [i_1] [i_0] [i_2] [i_1] [i_0]), (arr_32 [i_0] [i_0] [4] [i_0])))) && 268435455)));
                        arr_33 [i_0] [i_0] [1] [11] [9] [i_1] = ((((min(var_7, var_5))) != (arr_24 [i_0] [i_10 + 1] [i_10 + 2] [i_10] [i_10] [i_1])));
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_26 = var_4;
                        var_27 = (arr_19 [i_11] [1] [i_0]);
                        arr_36 [i_11] [i_1] [i_2] [i_1] [i_0] = var_7;
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        var_28 = ((+((var_10 ? (arr_22 [i_13] [i_14] [i_13] [i_13] [i_13]) : (arr_8 [i_13] [i_13] [i_14] [i_15])))));
                        arr_47 [i_13] [i_13] [11] [i_13] = (arr_15 [i_13] [i_14] [i_13]);
                    }
                }
            }
        }
        arr_48 [i_12] = (max(var_2, (1 == 17)));
    }
    var_29 = ((min(var_0, ((var_0 ? var_7 : 1)))));
    #pragma endscop
}
