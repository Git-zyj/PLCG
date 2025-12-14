/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_4;
        arr_5 [i_0] [i_0] = 32766;
    }
    var_16 = (max(var_16, (((var_9 ? var_7 : ((var_4 ? var_2 : -32765)))))));
    var_17 = ((!(((169 ? var_0 : ((-122 ? -6871209227137860045 : -6528959807271511554)))))));

    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = (arr_6 [i_1]);
        arr_10 [i_1] = 3746930502;
        var_18 = (((var_8 || (arr_2 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_17 [i_2] = (arr_8 [i_2] [i_2]);
            var_19 = 10;
            var_20 = (6659 ? 2044236105 : -114);
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_24 [i_2] [i_4 - 1] [12] [3] [12] = ((var_11 ? (min(var_3, (arr_1 [i_4 - 1] [i_4 - 1]))) : var_5));
                        var_21 = ((!(arr_11 [i_2])));
                        var_22 ^= (arr_21 [4] [i_6]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_29 [1] [i_2] [i_2] [12] = ((((((var_9 - var_7) ? var_4 : (((arr_22 [i_2] [i_2] [i_2]) ? -127 : var_8))))) ? ((max((arr_18 [i_2] [i_7 - 1] [i_2]), var_0))) : (arr_11 [i_7])));
                        arr_30 [i_2] [i_4] [i_2] [10] [i_8 + 3] [i_8] = 6885078141411559402;
                        var_23 ^= (!var_0);
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                arr_36 [i_2] [i_9] [i_2] = ((9223372036854775807 == ((((var_9 - var_3) ? (!251) : 169)))));
                var_24 = var_10;
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                var_25 = (((var_7 + 116) ^ ((var_8 ? (arr_33 [i_9 - 1] [i_9 - 1]) : (arr_33 [i_9 - 1] [i_9 - 1])))));
                var_26 *= (~var_5);
                arr_41 [i_2] [i_2] [i_2] = (((((arr_32 [i_9 - 1]) + (arr_32 [i_9 - 1])))) - 3867612060112363080);

                for (int i_12 = 4; i_12 < 10;i_12 += 1) /* same iter space */
                {
                    arr_44 [2] [i_2] [0] = var_4;
                    arr_45 [i_2] [i_9] [i_11] [i_11] [i_11] [i_11] = (min(1533210427, var_7));
                }
                for (int i_13 = 4; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    var_27 = (min(((326780633 ? var_5 : ((234881024 ? 128 : var_13)))), ((-2833 ? 1 : 27))));
                    arr_48 [i_2] [i_2] [i_13] [i_2] [i_2] &= 1769799742;
                }
                for (int i_14 = 4; i_14 < 10;i_14 += 1) /* same iter space */
                {
                    var_28 = ((((arr_6 [i_2]) & (var_12 >= 10))));
                    var_29 -= (((!-17882) ? ((((!(-32767 - 1))))) : ((max(var_4, (arr_2 [i_2] [1]))))));
                    var_30 = (max(var_30, ((min(((((((arr_3 [i_14] [i_14]) | (arr_27 [i_2] [i_2] [i_9] [i_9] [i_14])))) ? var_12 : var_6)), (((-25278 ? var_1 : var_15))))))));
                    var_31 = (((var_3 >= var_13) ? var_11 : var_1));
                }
            }
            arr_53 [i_2] [i_9 - 1] [1] &= 0;
        }
        var_32 = ((((((var_2 ? (arr_1 [i_2] [i_2]) : 31))) && (3048627385 * var_13))));
        var_33 -= (arr_32 [8]);
        arr_54 [i_2] [i_2] = (((var_11 / var_14) ? (!var_8) : ((var_10 % (var_12 & var_14)))));
    }
    #pragma endscop
}
