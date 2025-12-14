/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = var_3;
                var_16 = 5529144276311922603;
            }
        }
    }

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_8 [i_2 - 1] [i_2 - 1] = min((var_8 % 5529144276311922603), (((arr_1 [i_2 - 1]) + var_10)));
        arr_9 [i_2] = ((min(var_3, (arr_7 [i_2]))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_17 = (((arr_10 [i_3 - 1] [i_3 - 4]) ? var_2 : (!var_1)));
        var_18 += ((((4294967292 != (arr_12 [i_3 - 4]))) ? 4294967280 : (arr_3 [i_3])));
    }
    for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_19 = ((((((min((arr_16 [i_4]), var_13))) || var_4)) ? (((arr_14 [i_4 + 1] [i_4 + 2]) ? (arr_14 [i_4 - 3] [i_4 - 3]) : var_3)) : (((!(arr_1 [i_4]))))));

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_20 = ((arr_20 [i_4] [i_4]) != 429266962);
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_26 [i_4] [i_5] [i_8] [i_5] [i_8] = var_9;
                            var_22 += (((-118 & 3865700333) ? (((!(arr_3 [i_8])))) : (arr_0 [i_4 - 4])));
                            arr_27 [i_8] [i_8] [i_5] [i_8] [i_4] = arr_17 [i_4 - 2] [i_4 - 3];
                        }
                    }
                }
                arr_28 [i_5] [i_6] = (~(var_2 | 4294967286));
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_36 [i_4] [i_5] [i_5] [i_10 + 2] = var_3;
                        var_23 = (max(var_23, (((~(arr_34 [i_4] [i_4] [i_4] [i_4]))))));
                        var_24 += (((arr_19 [i_4 - 2] [i_10 - 2] [i_10 - 2] [i_10]) % 4294967292));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 14;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_25 -= 2147483136;
                            arr_47 [i_14] [i_14] [i_12] [i_14] [i_4 + 1] = (arr_39 [i_4 - 2]);
                            var_26 ^= (arr_21 [i_14]);
                        }
                    }
                }
            }
            var_27 = (((2147484142 || var_5) % var_12));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
        {

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_53 [i_16] [i_16] [i_16] = ((var_9 ? 5529144276311922603 : var_14));
                var_28 = (!(arr_15 [i_15 - 1]));
            }
            var_29 = (~var_10);
            arr_54 [i_15] |= (((4294967292 > var_8) ? 2147450880 : (arr_49 [i_15])));
        }
        var_30 = (((((172 ? 78 : (arr_52 [i_4 - 4] [i_4 + 2] [i_4 + 2] [i_4])))) ? 1 : var_10));
        var_31 += (max(((((arr_42 [i_4 - 4]) % 429266962))), (((13 - 22) + (min(6507478482583998410, 3865700309))))));
    }
    #pragma endscop
}
