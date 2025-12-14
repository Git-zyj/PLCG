/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_4;

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [4] [i_0 - 2] = (((var_4 & -3) < ((((((arr_1 [i_0]) + 2147483647)) << (((((arr_1 [i_0 - 1]) + 57)) - 29)))))));
        var_16 = ((((((arr_1 [i_0 - 2]) ? 13920313374886005862 : (arr_1 [i_0 - 2])))) ? var_13 : (~var_11)));
        var_17 = var_11;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_1] [i_3] [i_3] = var_12;
                            var_18 = (160 << ((((var_9 ? 9015569043116313795 : var_14)) - 9015569043116313777)));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_19 = (arr_13 [i_4] [i_2] [i_3]);
                            arr_21 [i_2] [i_3] [i_2] [i_6] = ((var_13 ? (~var_0) : (!255)));
                            arr_22 [i_3] [i_3 - 1] [i_3 - 1] [i_6] = ((-(arr_11 [i_1] [i_1] [i_3 - 1])));
                            arr_23 [i_3] [i_3] = (((arr_19 [i_3 - 1] [10] [i_3 - 1] [i_3 - 1] [i_3]) + var_9));
                            var_20 = ((36223 > (arr_1 [2])));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_21 = (max(var_21, (((var_1 - ((var_3 ? (((min(var_14, var_3)))) : var_7)))))));
                            var_22 = (((((((-(arr_1 [i_1])))) - (arr_8 [i_2] [i_3 - 1] [i_3 - 1]))) * (min(-var_13, (((var_5 / (arr_6 [i_1 - 2]))))))));
                        }
                        var_23 = (((169 / (9061 + var_8))));
                    }
                }
            }
        }
        var_24 = ((((110 && -47) ? 3301485646 : (((4054505755926001695 ? 61 : 24181))))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_25 *= 4349976558733983575;
            var_26 ^= ((~(((arr_12 [i_8] [i_9] [i_8] [i_9] [i_9] [i_9]) - (arr_19 [i_8] [i_9] [i_9] [i_9] [0])))));
        }
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            var_27 ^= ((var_13 ? 9805 : ((-1090262336 ? 50435 : 40))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_42 [i_8] [i_8] [i_10] [i_8] [i_8] [i_8] = -var_14;
                            arr_43 [i_10] [i_10] [i_11] [i_10] = (arr_33 [i_10] [i_11] [i_13]);
                            arr_44 [i_8 + 1] [1] [i_10] [i_10] [5] [i_13] = (var_7 ? ((((arr_14 [i_8] [i_12]) ? var_1 : (arr_24 [i_8] [11] [i_10] [i_12] [i_13])))) : (var_8 * var_14));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            arr_47 [i_8] [10] [i_8] = (2631508974 > 7098);
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_28 ^= -90;
                            arr_54 [i_15] = (var_10 == var_10);
                        }
                    }
                }
            }
        }
        arr_55 [13] [i_8] = 24845;
    }
    #pragma endscop
}
