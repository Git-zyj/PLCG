/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = 63;
        var_19 = (-1 >= ((~((min(1, (arr_0 [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_20 -= (arr_4 [i_0]);
                        var_21 = arr_8 [i_0] [i_2] [i_2];
                        var_22 = 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_23 = 1;
        var_24 += var_5;
        var_25 *= ((var_17 ? (arr_5 [i_4] [i_4] [i_4]) : 13158));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_26 *= (-13146 && 1);
                    var_27 = (max(var_27, (arr_16 [4] [i_5] [i_6])));

                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        var_28 = (arr_7 [i_5]);
                        var_29 -= (((((~(arr_5 [i_4] [i_5] [i_5])))) ? var_10 : (arr_12 [i_4])));
                    }
                    var_30 = (((arr_15 [i_5]) & (arr_15 [i_5])));
                    var_31 = (((arr_8 [i_6] [i_5] [i_4]) >= (arr_8 [i_4] [i_5] [i_6])));
                }
            }
        }
    }
    var_32 = (min(var_32, ((min(var_3, var_10)))));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                var_33 &= (!((min(-11, ((-(arr_25 [i_9] [i_9])))))));
                var_34 = (min((arr_19 [18] [i_9] [1]), ((3814188836145811153 ? (((arr_18 [i_8]) / -3814188836145811160)) : (-2147483647 - 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 10;i_11 += 1)
        {
            {
                var_35 = 50584;
                var_36 = ((-(arr_21 [i_11])));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                var_37 = 13158;
                                var_38 = ((13158 && (((arr_9 [i_13] [i_11] [i_11] [i_13]) && (arr_9 [i_11] [i_11] [i_11 - 1] [i_11])))));
                                var_39 = ((210 >> (((min(9223372036854775807, -124)) + 133))));
                                var_40 = (arr_23 [2]);
                                var_41 = (arr_17 [i_10] [i_11] [i_11] [i_14]);
                            }
                        }
                    }
                }
                var_42 = ((max((~-47), (((-2147483647 - 1) & 23)))));
            }
        }
    }
    #pragma endscop
}
