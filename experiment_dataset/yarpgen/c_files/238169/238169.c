/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = ((~(arr_0 [i_0])));
        var_19 = (min(var_19, (((var_17 ? (arr_1 [i_0]) : var_8)))));
    }

    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_20 = ((+(min((max((arr_3 [i_1]), 1)), ((max(var_17, var_9)))))));
        var_21 = var_13;
        var_22 = (max((arr_3 [i_1 - 1]), var_17));
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1)
    {
        var_23 *= ((((((var_10 ? 10091 : var_3))) ? 27624 : (arr_3 [i_2 - 1]))) ^ ((((0 ? 10067 : var_5)))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_24 = var_4;

                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_25 = ((-(max((arr_3 [i_6]), ((((arr_8 [i_2] [i_6]) % var_9)))))));
                            var_26 = (arr_8 [i_3] [i_3]);
                            var_27 = (~var_5);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_28 = ((!(~var_3)));
                            var_29 &= (((((~(arr_1 [i_2])))) ? (min((max((arr_8 [5] [i_3 - 1]), (arr_4 [i_3]))), -var_11)) : (((((var_14 ? (arr_11 [9] [i_5] [i_4]) : (arr_12 [i_2] [i_4] [i_5])))) ? (arr_2 [i_2 + 3]) : var_11))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_30 = (max((max(((27624 % (-32767 - 1))), 27632)), ((11026 ? (-9223372036854775807 - 1) : -0))));
                            var_31 = ((-(min(32739, (arr_11 [i_2] [i_3 - 1] [i_2 + 1])))));
                        }
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            var_32 += var_8;
                            var_33 = var_6;
                            var_34 = ((max(((~(arr_21 [i_2] [i_3])), ((min((arr_6 [i_3]), (arr_4 [14]))))))));
                        }
                        var_35 = (((min((min(var_5, 16727849907349368180)), (arr_6 [i_2 + 2])))) ? var_8 : (((0 ? 31507 : (((16727849907349368187 && (arr_7 [i_4]))))))));

                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            var_36 = (~(((max(var_11, var_13)) % -var_0)));
                            var_37 = (arr_22 [i_2] [i_3] [i_4] [i_5] [1]);
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_38 *= var_11;
                            var_39 = (max(-795792358, (((max(1, -25595))))));
                            var_40 = ((((var_4 <= (-127 - 1))) ? ((~(var_6 && var_0))) : var_12));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_41 ^= ((!(arr_29 [12])));
        var_42 = ((-(arr_4 [i_12])));
        var_43 = (((arr_4 [i_12]) ^ (arr_29 [i_12])));
    }
    var_44 *= var_11;
    #pragma endscop
}
