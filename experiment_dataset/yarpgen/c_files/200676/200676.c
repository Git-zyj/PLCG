/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 = ((-((max(19428, -19429)))));
                                var_14 = (min(var_14, var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = (((arr_16 [i_1] [i_2] [i_2] [i_0 - 1] [i_1]) ? var_4 : (max(((max((arr_14 [i_1] [i_1] [i_5]), var_7))), (min(var_9, var_8))))));
                                var_15 -= 45620205;
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0 - 1] = (max((-var_6 || var_11), ((+(max((arr_16 [i_0 + 2] [i_0 + 2] [i_0] [0] [6]), 1))))));
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_16 += var_3;

        for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_17 = ((~(min((arr_7 [11] [17] [i_8]), (arr_7 [i_7 + 2] [i_7 + 2] [i_8])))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_18 -= (min(((min((max((arr_3 [i_9 + 1]), var_9)), (arr_11 [i_7] [i_8] [i_9 + 1] [1])))), (((arr_11 [i_7] [i_8 + 1] [i_7 + 3] [i_9 + 1]) ? (max(0, var_9)) : -551897402))));
                        var_19 = (arr_28 [i_7] [i_8] [i_7] [i_8]);
                        var_20 = (arr_20 [i_8]);
                    }
                }
            }
            var_21 = (max(var_21, ((min(15, (min(-50, 0)))))));
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_22 -= (min(63622, 158));
            var_23 *= (max(2, -117));
            var_24 = var_3;
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_25 ^= (arr_29 [7] [i_7] [i_7] [7] [i_12]);
            var_26 = ((var_10 ? (arr_34 [i_7] [i_12]) : (arr_37 [i_7] [i_7])));
        }
        var_27 = (min(var_27, -2447166569576912376));
        var_28 += -2147483640;
        var_29 = (((((((((arr_38 [i_7] [i_7] [8]) ? (arr_31 [i_7 + 1] [i_7] [i_7] [i_7]) : var_7))) ? ((var_8 ? 13 : var_7)) : (arr_0 [i_7 + 3])))) ? (((((209806323 - 1) < (arr_38 [14] [i_7] [i_7]))))) : (arr_7 [i_7 + 2] [i_7] [1])));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (arr_24 [i_13 - 1] [i_13 + 2] [i_13 - 1])));
        var_31 = ((var_6 || (63622 == 0)));
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            {
                var_32 += -16;
                var_33 = (max((var_0 + -4294967293), ((((arr_43 [i_14] [i_15]) ? ((var_7 ? var_7 : var_5)) : (~var_8))))));
            }
        }
    }
    var_34 -= var_5;
    var_35 = -var_5;
    #pragma endscop
}
