/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (max(var_9, (((((1 ? (arr_1 [i_0]) : (arr_0 [4])))) ? 1 : (max(1, 4124981031247279161))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_11 = (min(var_11, (((~(var_0 >= var_6))))));
                var_12 = (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : var_6));
            }
            var_13 = (((-1506039070 + 2147483647) << ((((1 + (var_6 + var_5))) + 20612))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_14 = 2017390699;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_15 ^= (((9223372036854775794 >= var_0) ? (((((max(1, var_0)))) / (arr_8 [i_0] [i_1 - 2] [i_4]))) : (((((max(10173810446539180974, var_8))) ? var_1 : (!171))))));

                    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((((max((arr_7 [17] [i_0] [i_0] [i_0]), (((1 << (var_3 - 57149))))))) ? 1 : (arr_10 [i_4] [i_0] [i_4] [i_0] [i_0] [i_0])));
                        var_17 = var_0;
                        var_18 = (max((~1), (((arr_15 [3] [i_1 - 1] [i_3] [i_4] [i_5 + 1]) ? (arr_15 [i_5 + 1] [i_4] [i_3] [i_1 - 2] [i_0]) : var_5))));
                        var_19 = (arr_8 [i_5] [0] [i_0]);
                        arr_17 [i_5] [i_0] [i_3] [i_0] [i_0] = (max((max(var_0, (arr_10 [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2] [1]))), 1));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_20 = ((((((arr_7 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1]) ? (arr_3 [i_6 - 2]) : var_0))) ? var_8 : (((max(1, 1))))));
                        var_21 -= (max(1, 20605));
                        arr_21 [i_6] [i_4] [i_0] [3] [i_0] = var_3;
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_22 = ((var_9 << (arr_1 [i_3])));
                        var_23 = (min(var_23, (((var_2 != (arr_14 [i_7] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_1 - 1]))))));
                    }
                }
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    var_24 = max((max((max(var_2, 9223372036854775794)), 1048575)), 1);
                    var_25 = (((((((((arr_14 [i_0] [i_3] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_3] [i_1 - 2] [i_0]) : var_8))) ? (arr_8 [i_0] [i_1 - 2] [i_0]) : (((0 ? (arr_12 [i_0] [7] [i_3] [i_8]) : (arr_26 [i_1] [2] [i_1] [i_1] [17]))))))) ? (((((((arr_7 [i_8 - 1] [i_0] [i_0] [i_0]) ? 4293918720 : (arr_19 [i_0] [1] [i_0] [i_0] [1])))) ? -40 : var_6))) : var_6));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_33 [13] [1] [i_3] [i_0] [1] = var_1;
                        var_26 -= -2503594173736638809;
                        var_27 |= ((arr_26 [i_1] [i_1 + 1] [i_1] [i_9 - 1] [i_1 + 1]) != ((var_8 ? (arr_27 [6] [i_0] [i_1] [i_3] [i_9] [i_0]) : var_5)));
                    }
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        var_28 = 1;
                        var_29 &= (((arr_5 [i_11 + 1]) ? (arr_6 [i_3] [i_3] [i_3] [i_3]) : (arr_5 [i_1 + 1])));
                        arr_37 [i_1] [i_0] = (!var_0);
                        var_30 = var_2;
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        arr_40 [10] [i_0] [i_3] [0] [i_0] [i_0] = (((((var_2 + (arr_31 [1] [i_1 + 1] [i_0] [i_1])))) ? -8664 : ((104 ? 23 : -15020))));
                        arr_41 [i_3] [i_1] [i_1] &= (arr_30 [i_12] [i_3] [12] [12] [i_3] [i_0]);
                        var_31 = -1;
                        arr_42 [i_0] [6] [0] [i_0] = var_7;
                    }
                    var_32 = (arr_32 [i_9 + 3] [i_9 + 2] [i_9 - 1] [i_3] [i_1 + 1]);
                    var_33 += 29574;
                }
                var_34 = (min(var_34, (max(1743637504, (-9223372036854775807 - 1)))));
                var_35 = (max((~var_8), (max((((arr_0 [2]) ? (arr_22 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3] [i_0]) : (arr_22 [11] [i_3] [i_0] [i_1 + 1] [i_0] [15] [12]))), (((1393395514 ? -30 : (arr_34 [i_3] [i_3] [i_1] [i_1] [12] [12]))))))));
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            arr_45 [i_0] [7] [i_0] = (224 * 1);
            var_36 += ((+(((arr_44 [i_0] [i_0]) ? var_2 : (arr_5 [i_13])))));
            var_37 = (min(var_37, (~var_9)));
            var_38 -= (1211237788 < var_5);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_39 = (var_2 ? (arr_2 [i_0]) : (arr_15 [13] [16] [i_14] [i_14] [i_14]));
            var_40 *= (((arr_38 [i_14] [i_14] [i_0] [i_0]) != var_6));
            arr_50 [1] [1] &= ((1 - (((arr_10 [i_14] [8] [i_14] [10] [8] [i_0]) ? (arr_8 [12] [i_14] [12]) : 2041856414))));
            var_41 = (arr_26 [i_14] [8] [i_0] [i_0] [9]);
        }
    }
    var_42 = var_4;
    #pragma endscop
}
