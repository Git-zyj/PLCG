/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_12 >= 8191);
    var_19 = var_4;
    var_20 = (min(var_1, (0 * var_11)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_21 = (min(var_21, (((!((max(65535, ((max((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1]))))))))))));
        var_22 -= (max((arr_0 [1]), (~0)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_23 -= arr_0 [i_1];

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_24 *= (((1 << 1) ^ (arr_6 [i_0 - 2])));
                        arr_9 [i_0] [14] [i_2] [i_3] [i_3] = ((((184 || 1) ? (arr_0 [i_0 - 2]) : (1 || 43582))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_25 |= (arr_2 [i_0 + 2] [i_4 - 2] [i_1 - 2]);
                            var_26 += (((~(arr_3 [i_0 - 3] [i_1] [i_4 - 1]))));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        arr_14 [7] [i_1] [i_1] [i_2] [i_1] [i_5] = arr_7 [1] [i_2];
                        var_27 = (arr_2 [i_5] [i_0] [i_0]);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_17 [i_0] [i_0] [20] [i_5] [19] [i_6] = (!0);
                            var_28 = (max(var_28, (((1 ? (arr_13 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_6] [i_0]) : ((248 ? (arr_13 [i_0 + 1] [i_0 + 1] [3] [16] [8] [i_6]) : (arr_7 [i_6] [13]))))))));
                            arr_18 [i_0] [i_0] = 1;
                        }
                        arr_19 [i_2] [i_2] [i_2] [i_2] = (((arr_16 [i_0] [2] [i_2] [i_0 - 3] [8] [i_1 + 1]) || 29397));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            var_29 = ((((arr_21 [i_0 - 1] [i_7] [4]) ? (arr_21 [i_8 + 1] [i_1] [i_0]) : 73)) == (arr_22 [i_0] [17] [1] [11] [0] [i_2] [1]));
                            var_30 -= 45955;
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_31 += ((~(arr_2 [i_0 + 2] [i_1 - 1] [i_7])));
                            var_32 = (((0 && 65535) ? -27 : 248));
                        }
                        arr_27 [i_0] [14] [i_2] [i_7] = (arr_22 [1] [i_1 + 2] [i_0 - 1] [i_7] [i_1 + 2] [i_1] [i_0]);
                    }
                    var_33 = (min(-2, -249));
                }
            }
        }

        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
        {
            arr_30 [i_0] [i_10] = (((arr_8 [1] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0]) ? ((min(((1 <= (arr_25 [i_10]))), (0 == 0)))) : (!9)));
            var_34 = (max(var_34, (((((arr_3 [i_0 + 1] [1] [i_0]) ? (arr_20 [i_0 + 1] [i_10] [i_0] [i_10]) : (arr_20 [i_0 - 2] [i_10] [i_10] [i_0])))))));
            arr_31 [i_10] [i_10] = ((!(65535 % 65535)));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_43 [i_11] [i_12] &= (min((arr_38 [4] [i_11] [i_0 - 1]), (((arr_25 [i_12]) << (10653 - 10622)))));

                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            var_35 = (((((-8095 >= 1) ? (arr_13 [i_14] [i_11] [i_0 - 1] [i_14 - 1] [i_14 - 1] [13]) : 1)) * (arr_29 [i_0])));
                            var_36 = (min(((max(1, 0))), (((~(arr_7 [i_0] [i_0 - 3]))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_37 ^= 3522;
                        arr_51 [i_11] [16] [16] [i_11] = ((!(((((0 * (arr_44 [i_0 + 2] [i_11] [i_11] [i_15] [i_15] [0])))) || 1))));
                        arr_52 [15] [i_11] [i_11] [i_11] [i_11] = 18431;
                    }
                }
            }
        }
    }
    #pragma endscop
}
