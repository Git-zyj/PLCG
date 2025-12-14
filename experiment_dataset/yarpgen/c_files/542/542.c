/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 ^= 1890076153;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = -224;
        arr_2 [i_0] = (((((arr_1 [i_0] [i_0]) ^ (arr_1 [17] [i_0]))) + 22327));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_21 -= (((((18 ? ((92 ? 104 : 43220)) : ((((arr_0 [i_0]) && 17621514094712737357)))))) ? (((arr_5 [i_1] [i_1] [i_1]) | (arr_5 [7] [13] [i_0]))) : 18));
            var_22 = (arr_4 [i_1] [i_0] [i_0]);

            /* vectorizable */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_23 = (min(var_23, (((105 ? 108 : (((18 >= (arr_0 [i_0])))))))));
                var_24 += (43209 ^ 5449);
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_25 = ((237 ? (arr_4 [i_3 + 1] [i_3 + 1] [i_2 + 1]) : (((arr_10 [1] [i_3 + 1] [i_2] [i_1] [i_0]) ? 116 : 65529))));
                            var_26 = (((arr_10 [i_3 - 1] [i_2] [i_3 + 1] [23] [i_2]) ? (arr_10 [i_3 - 1] [i_3] [i_3 - 2] [i_2] [i_2]) : (arr_10 [i_3 - 1] [i_3] [i_3] [i_3] [i_3])));
                        }
                    }
                }
                var_27 -= (53409 / var_5);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] [i_5] [i_0] [i_0] = (((arr_8 [i_6] [i_2] [i_2 - 1] [i_2] [i_2]) ? ((((arr_16 [i_0] [5] [i_2] [6] [6]) && (arr_16 [i_6] [19] [i_2] [i_1] [i_0])))) : var_9));
                            var_28 ^= (arr_18 [i_2 + 4] [i_2 + 3] [i_2 + 4]);
                            var_29 = (((arr_6 [i_2 + 2] [i_2 + 3] [i_2 + 3]) ? ((47 ? -64 : 12930)) : (((arr_7 [i_5]) ? 215 : -1121771610))));
                        }
                    }
                }
            }
        }
    }
    var_30 = ((30 ? var_4 : 43208));

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_31 = (max(63, (-117 / -10)));
        arr_24 [i_7] = (arr_12 [i_7] [i_7] [23] [i_7] [i_7]);
        arr_25 [i_7] [i_7] = ((((min(-1121771616, -1))) + ((~((-123 ? 4294967295 : 43209))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_32 = (min(var_32, var_0));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    {
                        arr_39 [i_9] [i_10] = (((arr_14 [1] [23] [i_10] [i_11] [1]) ? 1121771628 : 4294967295));
                        var_33 *= (arr_34 [2]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        {
                            var_34 = ((+((63 ? (arr_32 [0] [i_13] [0]) : -27899))));
                            var_35 = (((arr_9 [i_14 + 3] [i_12 - 2]) ? 0 : 24));
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_36 *= var_11;
            var_37 = (~-1121771616);
        }
        var_38 += var_6;
        arr_50 [11] = 1;
        arr_51 [i_8] = (arr_36 [1] [1] [i_8] [i_8]);
        var_39 += (((arr_4 [i_8] [i_8] [i_8]) | 10));
    }
    #pragma endscop
}
