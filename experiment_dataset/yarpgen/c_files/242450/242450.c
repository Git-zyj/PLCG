/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (1 && ((min((var_4 < var_2), ((var_9 ? 111 : var_6))))));
    var_13 = (max(7680, (min(((var_10 ? var_10 : var_4)), ((var_7 ? var_6 : var_11))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (74819139 != -123);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = (arr_8 [i_3] [i_1] [i_1] [4] [i_0]);
                        arr_11 [i_0] [i_0] [i_3] [i_3] = (i_0 % 2 == zero) ? ((min((((((var_3 ? var_3 : var_4))) ? (arr_7 [i_0] [i_1 + 3] [i_0]) : (((~(arr_3 [i_0] [i_0] [i_0])))))), (((((((arr_1 [i_0]) << (((((arr_5 [i_0] [i_0]) + 630026652)) - 21))))) < (min((arr_4 [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0]))))))))) : ((min((((((var_3 ? var_3 : var_4))) ? (arr_7 [i_0] [i_1 + 3] [i_0]) : (((~(arr_3 [i_0] [i_0] [i_0])))))), (((((((((arr_1 [i_0]) + 2147483647)) << (((((((arr_5 [i_0] [i_0]) + 630026652)) - 21)) - 3))))) < (min((arr_4 [i_0] [i_2]), (arr_7 [i_0] [i_0] [i_0])))))))));
                        arr_12 [i_0] [i_1] = ((-(max((((111 != (arr_3 [i_0] [i_1 + 2] [i_0])))), (arr_5 [i_0] [i_0])))));
                        var_14 = ((((((min((arr_7 [i_0] [i_0] [i_0]), var_9)) << (max(1, -3))))) ? (!-1) : ((-112 ? 9223372036854775807 : 8))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [2] [i_4] [i_4] [i_4] [i_4] = var_0;
                        var_15 += ((((((arr_15 [i_4] [i_4]) % var_7))) ? var_5 : (arr_13 [i_5 - 1])));
                    }
                }
            }
            var_16 = (min(var_16, ((((arr_18 [i_4] [i_4] [i_4]) ? ((((arr_19 [i_4] [i_4] [i_4]) ? -8 : var_3))) : ((18446744073709551615 ? var_0 : (arr_16 [i_4]))))))));
            var_17 = (((var_7 ? 57 : (arr_16 [i_4]))));
        }
        for (int i_8 = 4; i_8 < 24;i_8 += 1)
        {
            var_18 = (min(var_18, ((((var_6 ? var_11 : 14))))));
            var_19 = (arr_17 [i_4] [i_4] [i_4] [i_4]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
            {
                var_20 = 0;
                var_21 += ((arr_29 [i_10 + 1] [i_4]) ? (arr_19 [i_4] [i_4] [1]) : (arr_29 [i_4] [i_10 + 1]));
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
            {
                arr_34 [i_4] [i_9] = ((+(((arr_20 [i_4] [i_9] [i_9]) + (arr_14 [i_9])))));
                arr_35 [i_4] [i_4] [i_11] = (~(((arr_33 [i_11] [i_9]) ? var_8 : (arr_31 [i_4] [i_4] [i_4] [i_4]))));
                var_22 = (((((var_7 ? 13 : var_1))) >= (arr_23 [i_11 + 1] [i_11] [i_11])));
            }
            arr_36 [i_4] [i_9] [i_9] = (((arr_18 [i_9] [i_9] [i_9]) & (arr_14 [i_4])));
        }
        var_23 = var_8;
    }
    var_24 -= (((((var_9 ? var_11 : 1))) != (max(((var_6 ? -1 : var_11)), var_1))));
    #pragma endscop
}
