/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_17 = ((-(arr_1 [i_0] [i_0 - 2])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 += (((min((arr_5 [i_0]), (arr_5 [i_0])))) ? ((var_8 ? (arr_5 [i_2]) : (arr_5 [i_2]))) : (!var_9));
                                var_19 ^= (max(-1888402056, 2096640));
                            }
                        }
                    }
                    var_20 = var_14;
                    var_21 ^= (min((arr_3 [i_1] [i_1 - 3] [i_1 + 1]), (max(var_5, 1))));
                    var_22 = var_0;
                    var_23 = var_2;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_24 = (arr_7 [i_5] [i_5]);
        var_25 = (max(var_25, var_9));
        var_26 = (((((57296 ? 2001836832 : 101))) ? (!1) : (((arr_1 [i_5] [i_5]) ? 1 : 1))));
        arr_18 [i_5] = var_4;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_24 [i_6] = ((!(((((max(1, (arr_5 [i_6])))) ? var_8 : (max(var_0, var_1)))))));
            var_27 = (min(1, 34359738367));
            var_28 = (arr_15 [i_7]);
        }

        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            var_29 = var_16;
            var_30 = (+-791105395079371145);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_31 = (!91);
                            var_32 = var_11;
                        }
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 9;i_12 += 1)
        {
            arr_36 [i_12] = (max(-791105395079371120, ((236 ? (arr_2 [i_6]) : ((max(2147483643, var_6)))))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_33 = arr_1 [i_12 + 1] [i_12 - 1];
                        var_34 = var_15;
                        arr_45 [i_6] [i_12] [i_13] = 0;
                    }
                }
            }
            var_35 |= -1308078740;
            var_36 = (arr_1 [i_6] [i_12]);
        }
        var_37 = (max(66, (((arr_10 [i_6] [i_6] [i_6]) ? var_7 : (max(var_2, (arr_21 [i_6] [i_6] [i_6])))))));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        arr_49 [i_15] = ((var_7 ? ((15718639136989413180 ? 8388607 : 1)) : var_15));
        var_38 = (((arr_33 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) ? (arr_35 [i_15]) : ((var_1 ? var_5 : var_13))));
    }
    var_39 |= (var_11 ? var_12 : var_13);
    var_40 = -var_6;
    #pragma endscop
}
