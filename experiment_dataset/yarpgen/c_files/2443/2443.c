/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_14 ? (min(-9223372036854775807, -var_14)) : var_4));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 &= (max(((((((var_8 ? var_2 : var_11))) ? ((var_10 ? var_2 : var_13)) : var_3))), (max(9223372036854775807, 2249600790429696))));
        arr_3 [4] = var_3;
        var_17 = (max(var_17, ((((((-22762 ? 9223372036854775807 : var_7))) ? var_5 : (min(var_7, var_9)))))));
        var_18 ^= ((~(max(3049, var_11))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_19 = (min(var_19, var_13));
            var_20 *= var_0;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((var_14 ? (~var_7) : var_1));
                    arr_15 [i_4] = (var_9 ? var_2 : -1);
                    arr_16 [i_3] [11] [i_3] = var_6;
                }
            }
        }
        arr_17 [i_1] [i_1] = (((var_7 + 9223372036854775807) << (var_6 - 60552)));
        arr_18 [i_1] = ((((var_14 ? 14945681636439314010 : var_12)) + var_11));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] [i_5] = (((~var_14) ? (!17311556809358754046) : var_9));
        arr_22 [13] = var_10;

        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            arr_25 [10] = ((var_14 ? var_13 : (!var_12)));
            arr_26 [4] [i_6] [4] = ((var_2 ? (!var_10) : ((var_12 ? var_6 : 98))));
            var_21 = (!var_11);
            var_22 -= (var_12 ? (((2249600790429696 ? var_3 : var_13))) : var_9);
        }
        var_23 = ((var_10 ? var_10 : var_11));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_24 = 9223372036854775807;
                        arr_33 [i_5] [i_5] [i_9] [i_9] [5] [5] = var_13;
                    }
                }
            }
        }
    }
    #pragma endscop
}
