/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (max((((((23675 ? var_6 : var_0))) * ((2147483647 ? var_9 : var_6)))), 3200931158));
        var_16 = (max(var_16, ((((2943742209996234034 & 4862781432262669579) ? ((-1 ? ((-9 ? var_6 : var_7)) : (arr_2 [i_0 - 1] [i_0 - 1]))) : (8514083614083182232 && var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] |= ((!(var_1 != var_0)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [1] [i_2] [5] = (((var_7 - (arr_4 [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_17 = (((!176) ? (arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_5 - 3] [1] [i_5 + 1]) : ((var_0 ? var_4 : 64))));
                                var_18 = (min(var_18, -var_6));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [6] [i_1 - 3] = ((!(arr_4 [i_3 - 1] [i_1 + 2])));
                }
            }
        }
        var_19 = (max(var_19, (((var_3 / (arr_9 [i_1 - 1]))))));
    }
    var_20 |= var_13;
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_21 = (((((var_6 ? (var_8 + var_6) : -162900894289456754))) + (~var_9)));
                                var_22 = (((~(arr_31 [i_6] [1] [i_6] [i_6 + 1] [i_6] [i_10]))));
                                arr_33 [i_10] = (!32760);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_23 = ((((((min((arr_41 [22] [i_7] [22] [22]), (arr_26 [13] [13] [13])))) ? var_11 : (arr_29 [i_6] [i_7] [i_12] [i_6]))) | (arr_25 [i_12] [6] [i_12])));
                                arr_42 [i_6] [i_7] [i_11 + 3] [i_12] [i_13] [i_6] [i_13] = (min((arr_32 [i_6] [23] [23] [23] [i_13]), ((var_5 ? (arr_39 [i_11 + 2] [18] [i_13]) : var_12))));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, ((((119 / (max(12846014316091111973, (-9223372036854775807 - 1)))))))));
                arr_43 [i_6] = ((-13 ? 4294967295 : -385066447));
                var_25 = var_7;
            }
        }
    }
    #pragma endscop
}
