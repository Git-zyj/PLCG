/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 += ((min((arr_4 [i_0]), (arr_4 [i_0]))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_8 [13] [i_1] [i_0] = 8498602287042522311;
                    var_20 ^= (((!2147483647) >= (((arr_0 [i_0] [i_2]) + 2251799813685120))));
                    var_21 = (arr_2 [i_1]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [2] = (((arr_10 [i_3]) >= (arr_10 [i_0])));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            var_22 = ((~((-2147483647 ? 22275 : -68))));
                            var_23 += ((var_8 & (arr_14 [i_4] [i_4 + 1] [9] [12] [8] [i_4 + 1])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_26 [i_5] [i_7] = (min((-2147483647 - 1), -1));
                        arr_27 [i_5] [i_6 - 2] [i_7] = var_16;
                        arr_28 [14] [4] [i_7] [i_7] [i_7] = 0;
                    }
                    var_24 -= (!9);

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_35 [i_5] [i_5] [i_7] [i_9] [i_7] [i_10] [15] = 121;
                            var_25 = (((arr_30 [19] [5] [i_7] [i_7] [i_6] [i_5]) <= 22275));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_26 *= var_4;
                            var_27 = 2147483647;
                            arr_39 [i_5] [i_7] [i_5] [i_5] [10] [16] = ((var_15 ? var_12 : var_14));
                        }
                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            var_28 = -var_0;
                            arr_42 [i_7] [i_7] [3] [i_7] [i_7] [i_12] = -12;
                        }
                        var_29 = (max(var_29, ((((!var_17) && var_18)))));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_30 ^= ((-(arr_30 [i_5] [i_5] [i_5 - 1] [i_13] [i_6 - 1] [i_6 - 3])));
                        arr_45 [i_13] [i_7] [i_7] [i_5 - 3] = ((((min(((min(4909, -29337))), ((~(arr_15 [i_13])))))) ? (((((((~(arr_32 [i_6] [i_7] [i_13])))) || (arr_19 [i_5]))))) : ((min(-28140, 9)))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        var_31 = ((1 >> (2147483647 - 2147483629)));
                        arr_48 [i_5] [i_5] [3] [i_7] = (!536870911);
                        var_32 = (-1643181369 || 31);
                    }
                    arr_49 [i_7] = 16152;
                }
            }
        }
    }
    var_33 = var_15;
    var_34 = var_18;
    #pragma endscop
}
