/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 ^ (((var_14 | var_8) ? var_6 : var_8))));
    var_19 = ((-2147483647 - 1) ? 0 : ((max(var_9, 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = (-2232 == 0);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = (((arr_0 [i_1]) == ((((arr_2 [i_1] [18]) == (var_8 + var_16))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            var_22 = var_12;
            arr_9 [i_1] = 1;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_23 = -var_17;
            arr_14 [15] [i_1] = ((var_9 ? var_15 : (arr_7 [i_1] [i_3])));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (((((arr_6 [16]) - (arr_6 [14]))) * (arr_6 [4])));
        var_24 *= ((((32 == var_11) ? (arr_6 [12]) : ((var_6 ? var_3 : 230)))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 = -2225;

        /* vectorizable */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_26 = (arr_19 [11]);
            var_27 = (min(var_27, 3547586015));
            var_28 = (var_0 == var_16);
            var_29 = (min(var_29, ((((1 ? 2220 : 1))))));
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            var_30 ^= var_8;
            arr_26 [i_5] [i_5] &= (((arr_11 [i_5] [i_7] [1]) == (((((972506175631861155 == (arr_13 [14] [i_5] [14]))) ? ((-727121398 ? (arr_20 [i_5]) : var_16)) : var_2)))));
            var_31 = ((~(arr_11 [i_5] [i_5] [i_5])));
            arr_27 [6] [i_7] [i_5] = (-7885138302817097016 == 8440279750682792802);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    {
                        var_32 += var_16;
                        var_33 = (min(var_33, ((min((arr_2 [i_7] [i_9]), (max((arr_32 [i_9 - 1] [i_9 + 2] [i_9] [i_9] [11]), -16384)))))));
                        var_34 = var_3;
                        var_35 = (min(var_35, (((((1 ? 50519 : 3511887369)) == ((((7 ? var_9 : 0)))))))));
                    }
                }
            }
        }
        var_36 &= -238;
    }
    #pragma endscop
}
