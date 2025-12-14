/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 ^= var_2;
        var_18 = (max(var_18, -121));
        var_19 *= ((var_13 <= ((-17 ? (((arr_0 [i_0]) - 120)) : var_4))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_20 = var_2;
            var_21 = (arr_1 [i_0]);
            arr_4 [i_1] = var_16;
            var_22 = (((180541367 <= var_0) - 77));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_23 = var_11;
            arr_8 [i_0 + 3] = (max(81, (max((arr_3 [i_0 + 1] [i_0 + 1]), var_9))));
            var_24 = var_3;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_25 = max(((var_16 ? 18446744073709551615 : ((max(14680064, 2006770624))))), (((var_7 ? -77 : (max((arr_1 [i_0 + 1]), var_10))))));
                        arr_17 [i_4] [i_2] [i_4] = (((arr_10 [i_2 + 1] [i_0 + 1] [i_3]) ? (((arr_11 [i_0] [i_0] [i_0 + 3]) ? var_4 : (!67))) : ((255 & ((var_15 ? 1 : (arr_16 [i_0] [i_4] [i_3] [i_3])))))));
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_26 = (((((((max((arr_13 [i_0] [i_0] [i_0] [i_5]), var_9))) ? ((var_0 ? var_12 : (arr_11 [i_5] [i_5] [i_0]))) : (((arr_10 [i_0] [i_5 + 1] [i_0]) >> (var_13 - 162)))))) ? ((~((max(6647, 3))))) : ((((max(120, 4333419724973939319))) ? (max((arr_5 [i_0] [i_0] [i_5 + 1]), (arr_14 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_16 [i_0] [i_5] [i_0] [i_0 + 1]), var_14))))));
            arr_20 [i_0] [i_5] [i_5] = (max((((arr_2 [i_0]) % 1)), var_13));
            var_27 = (min(var_27, ((((((-102 | ((max(var_2, (arr_2 [i_0]))))))) ? (max(((max(var_15, 58))), ((var_13 + (arr_6 [i_0] [i_0] [i_0]))))) : ((((arr_13 [i_0] [i_0 - 1] [i_0] [2]) ? var_2 : (arr_18 [i_0 - 1] [i_0] [8])))))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_25 [i_6] [i_6] [i_6] = var_6;
            arr_26 [i_6] [i_6] [i_6] = (max(((~(max((arr_12 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]), var_5)))), var_4));
        }
        var_28 = (max(var_28, (arr_11 [i_0] [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                var_29 = (((arr_27 [i_7] [i_7]) ? (arr_22 [i_7 + 1] [i_7] [i_7 + 1]) : var_9));
                arr_31 [10] = (max((((arr_15 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [15] [i_7 + 1]) | (arr_22 [i_7 - 2] [i_7 - 2] [i_7]))), (((((arr_27 [i_7 - 2] [i_7 - 2]) + 2147483647)) >> 0))));
            }
        }
    }
    #pragma endscop
}
