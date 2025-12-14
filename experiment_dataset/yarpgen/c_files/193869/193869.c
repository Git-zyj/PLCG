/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 1;

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_16 &= (2 && var_5);
            arr_8 [i_1] = (((arr_4 [10] [i_1] [i_1 - 2]) + (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2])));
        }
        arr_9 [i_0] = (arr_6 [i_0]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((!(arr_2 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_17 [i_2] [i_2] [i_2] = (min((((arr_0 [i_2]) + var_9)), ((var_8 ? -10 : var_9))));
            var_17 = (((max((arr_4 [i_2] [i_2] [i_2]), var_4))));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_18 = -3;
                var_19 = (((arr_4 [i_2] [i_2] [i_2]) ? 2 : (((max((arr_13 [i_4]), var_8)) << (((((arr_4 [i_2] [i_3] [i_4]) ? 17281931925552803762 : (arr_21 [i_2] [i_3] [i_4] [i_3]))) - 17281931925552803737))))));
                var_20 |= var_11;
                var_21 += 11;
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_22 = ((18446744073709551607 / (arr_5 [14] [i_5])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_23 &= (!-1367872565);
                            arr_34 [i_2] [i_2] [i_2] [i_8] [i_8] = 0;
                            arr_35 [i_2] [i_8] [i_6] [4] [i_8] [i_7] [10] = (((arr_11 [i_5] [i_7]) || (arr_11 [i_2] [i_5])));
                        }
                    }
                }
                var_24 = (7 != (var_10 % 2047));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_41 [0] [i_9] [i_5] [i_2] = ((arr_38 [i_5] [i_5] [i_10 + 1] [i_10] [i_5]) % 18363849360753400341);
                            var_25 &= (arr_1 [i_10 - 1]);
                            arr_42 [i_2] [i_2] [i_5] [i_6] [i_9] [i_10] = (((((arr_0 [i_2]) ^ (arr_6 [i_2]))) % (var_5 + 4294967295)));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                arr_46 [i_2] [13] [i_11] [i_11] = (arr_28 [i_2] [i_2] [i_2]);
                arr_47 [10] [i_5] [i_5] [i_2] = 18446744073709551615;
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 14;i_13 += 1)
                {
                    {
                        var_26 = (max(var_26, 2147483647));
                        var_27 = var_10;
                    }
                }
            }
            var_28 -= 81;
        }
        var_29 = var_14;
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 22;i_15 += 1)
        {
            {
                arr_60 [i_14] [i_15] [i_15] = ((0 - (arr_55 [i_15])));
                arr_61 [i_14] [i_15] = (min((arr_54 [i_14]), var_15));
                var_30 = var_13;
            }
        }
    }
    var_31 = var_9;
    #pragma endscop
}
