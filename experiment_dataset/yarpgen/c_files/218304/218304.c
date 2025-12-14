/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_16 = (((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : var_6));
            arr_5 [i_1] = (arr_2 [i_0]);
            var_17 = (((arr_1 [i_0]) == (var_0 | 1)));
            arr_6 [i_1] [4] = 1163321576;
            var_18 = var_4;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                arr_11 [i_2] = var_14;
                var_19 = (max(var_19, (233 + 31757)));
                var_20 = ((+(((arr_7 [i_0]) / var_14))));
                arr_12 [i_0] = (var_3 | 143);
            }
            arr_13 [i_0] = ((1 ? (-127 - 1) : 1378014121));

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_21 = (((((1163321588 ? 2 : 16))) ? -3 : 1));

                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    arr_22 [i_0] [i_4] = ((-(arr_16 [i_2])));
                    arr_23 [i_4] = -31789;
                    arr_24 [i_0] [i_0] [i_2] [i_0] &= ((16 ? 0 : -15));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_22 = (((arr_8 [i_0]) == (arr_8 [i_0])));
                        var_23 = (1163321565 | 16);
                    }
                    var_24 = var_6;
                    arr_29 [i_4] [i_2] [i_4] [15] = ((2834938789741633420 ? 9124390178586639167 : (arr_1 [i_0])));
                }
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_25 = var_15;
                arr_32 [i_0] [i_2] [i_8] = var_3;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_35 [i_0] [i_2] = var_15;

                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    arr_39 [i_0] [13] [i_9] [i_10] = var_4;
                    var_26 = (max(var_26, -0));
                    var_27 = (!63);
                }
                arr_40 [6] [i_2] [i_2] [i_9] = (((19 > 1) ? -4334558793090291156 : (arr_7 [i_2])));
                var_28 = (~(arr_34 [i_9] [i_9] [i_9] [i_9]));
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                var_29 = (min(var_29, (~-8298117559482236992)));
                var_30 -= (((arr_26 [i_0] [i_2] [i_11] [i_11]) && (((116 ? 2147483647 : -26)))));
            }

            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                var_31 = 9720546655916595455;
                var_32 = (min(var_32, ((((arr_2 [i_0]) ? (arr_2 [i_2]) : var_1)))));
            }
        }
        for (int i_13 = 2; i_13 < 16;i_13 += 1)
        {
            arr_49 [i_0] [i_13] = (((arr_46 [i_0] [i_13] [i_13]) / (arr_14 [i_13 + 2] [i_13] [i_0] [i_13])));
            var_33 = (((arr_3 [i_0] [i_13] [i_0]) || 53727));
            var_34 = ((63073 << (((((arr_15 [17] [i_13] [i_13 - 2] [i_13 - 1]) + 669225998)) - 15))));
            arr_50 [i_13] = var_11;
        }

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            arr_53 [i_0] = (arr_19 [i_0] [i_14] [10] [9] [7] [i_14]);
            var_35 *= (((arr_25 [i_0] [i_14] [7] [i_0]) == var_15));
            var_36 = var_4;
        }
        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            var_37 = (-(arr_26 [i_0] [i_15] [i_15] [i_15]));

            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                arr_59 [i_15] [1] [i_15] [i_15] = -1946845584;
                arr_60 [9] [i_15] = var_9;
            }
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                arr_63 [6] [i_15] [i_15 - 2] [1] = (((-686 & 1678309801) >= (~var_10)));
                arr_64 [i_15] [i_17] = (((arr_58 [0] [i_15] [i_15] [i_17]) ? 2834938789741633420 : 3545));
            }
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                arr_69 [i_15] [i_15 + 1] [i_18] = 0;
                arr_70 [i_15] = (arr_19 [i_15 - 1] [i_0] [i_15] [1] [i_15] [i_18]);
                arr_71 [i_15] = -1563143037;
                var_38 ^= ((!(arr_56 [i_15 - 1] [i_15 + 1] [i_18])));
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        var_39 &= var_11;
        var_40 &= (arr_67 [i_19] [i_19] [i_19]);
        arr_76 [i_19] = (arr_68 [i_19] [i_19] [i_19] [i_19]);
    }
    var_41 -= ((-(min((1 - -2834938789741633410), 45582))));
    #pragma endscop
}
