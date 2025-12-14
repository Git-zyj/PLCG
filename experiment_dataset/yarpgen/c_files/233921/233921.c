/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (min((((~(arr_1 [i_0] [i_0 - 3])))), ((4294967282 ? -33 : var_11))));
        var_13 = -6015;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_14 ^= 47;

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            var_15 = var_9;
            var_16 = (max(var_16, (!var_4)));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_17 = ((-47 ? -44 : 60));
                            arr_20 [i_1] [i_3] [i_1] = var_4;
                            var_18 = var_10;
                            var_19 = arr_13 [i_1] [i_3] [i_1] [i_1];
                        }
                    }
                }
            }

            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_20 = var_2;
                            var_21 = (min(var_21, (~var_0)));
                            arr_28 [i_1] [i_2] [i_7] [i_7 - 1] [i_2 - 2] = var_2;
                            arr_29 [i_1] [i_7] [i_6] [i_7] [i_8 + 1] = var_4;
                        }
                    }
                }
                var_22 = -47;
            }
            for (int i_9 = 3; i_9 < 24;i_9 += 1)
            {
                var_23 = 4038171781;
                arr_33 [i_9] = ((var_3 ? (arr_12 [i_9 - 1] [1] [i_9]) : var_7));
                arr_34 [i_1] [i_1] [2] [i_9 - 1] = (!var_4);

                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    var_24 *= (((((-127 - 1) + 2147483647)) << (47 - 47)));
                    var_25 = (max(var_25, (((-107 ? 44 : var_9)))));
                    var_26 = (~47);
                    var_27 = ((var_6 != (arr_24 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_10])));
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 23;i_12 += 1)
                {
                    {
                        var_28 ^= (~var_1);
                        var_29 = var_12;
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 21;i_15 += 1)
                {
                    {
                        var_30 = ((47 ? (!30) : ((30 ? var_1 : var_0))));
                        arr_52 [21] [i_13] [4] [i_13] = (~127);
                        var_31 = (max(var_31, (((-127 - 1) | (arr_44 [i_15] [i_1 - 1] [i_14 + 1])))));
                    }
                }
            }
            arr_53 [i_1] [i_13] = (arr_38 [i_1] [i_1 - 1] [i_1 - 1]);
            arr_54 [i_1] [i_13] [i_13] = ((var_12 << (-47 + 59)));
            arr_55 [i_13] = ((var_0 > (var_11 > 1225286897)));
        }
        arr_56 [i_1] = var_11;
        arr_57 [i_1] [6] = ((-((9 ? 1225286897 : 0))));
        arr_58 [i_1] [i_1] = ((82 ? ((((arr_45 [i_1]) ? -9 : var_8))) : (arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
    }
    var_32 = (((((var_7 ? (var_5 % var_0) : var_9))) ? (((min(60, var_8)))) : (((!(!var_11))))));
    #pragma endscop
}
