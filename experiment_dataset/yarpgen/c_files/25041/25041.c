/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= -31009;
        arr_3 [i_0] [i_0] = (arr_1 [i_0] [2]);
        var_18 = (max(var_18, (((((min((arr_1 [i_0] [2]), 16106127360))) ? (min(-var_16, (min((arr_0 [i_0]), 24045)))) : -24051)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_19 = arr_4 [i_1 - 3] [9];
        arr_6 [i_1] = (((arr_5 [i_1 + 2]) && (arr_5 [i_1 + 2])));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 = (((((arr_12 [i_1] [i_1] [i_2 + 1] [i_3] [i_1] [i_1]) ? var_14 : 65531)) < -1297500527));
                        var_21 = ((32766 ? -4094767138948044657 : 65531));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        var_22 = var_1;
        var_23 = var_0;
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        arr_18 [i_6] = ((14058 ? var_6 : (arr_16 [i_6 + 1] [i_6 + 1])));
        arr_19 [i_6] = (arr_16 [i_6 - 1] [i_6 + 1]);
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 24;i_7 += 1)
    {
        arr_22 [i_7] = (~var_2);

        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            var_24 = var_4;
            var_25 *= ((148559368 ? (((0 != (arr_24 [i_7])))) : (arr_23 [i_7 - 1] [i_8 - 1] [i_8 + 2])));
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_26 = (((((var_6 ? (arr_21 [i_7]) : 2543201035))) ? 7168 : (arr_26 [i_7] [i_7] [i_7])));
            arr_28 [i_7 + 1] [i_9] = -14568;
            var_27 = (min(var_27, (((var_8 >> (50944 - 50923))))));
            var_28 = 50619;
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            var_29 = ((4094767138948044629 ? var_5 : ((((32766 == (arr_32 [i_7 + 1] [i_7] [i_7])))))));
            var_30 = (((((-(arr_20 [i_10] [i_7])))) ? var_5 : (var_15 == var_13)));
        }
        arr_33 [i_7] [i_7] = (arr_30 [i_7] [6] [6]);
    }
    #pragma endscop
}
