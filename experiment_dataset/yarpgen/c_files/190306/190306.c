/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_11, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = ((!(~var_11)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 ^= arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] [i_3] [i_2];
                                var_19 -= var_13;
                                arr_12 [i_0] [i_1] [i_1] [i_2] [9] [i_4] = (var_11 + var_1);
                            }
                        }
                    }
                    arr_13 [i_1] = (((((7685762495413844982 ? -7685762495413844997 : 13358))) ? ((var_12 ? 229376 : (arr_9 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) : 1));
                }
            }
        }
        arr_14 [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_0] [i_0]);
        arr_15 [i_0] [i_0] = ((18405 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            var_20 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]) ? 824937877556772938 : 1));
                            var_21 = (arr_20 [i_7] [i_0] [i_7 + 4] [i_7] [i_7] [i_7 + 3]);
                            var_22 = (((arr_20 [i_0] [i_6] [i_8 - 2] [i_7 + 1] [i_6] [i_0]) % (arr_16 [i_7 + 4] [i_0])));
                        }
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_28 [i_0] [i_9] [i_5] [i_7] [i_6] = (!13293835133176396511);
                            arr_29 [i_6] [i_7] [2] [i_5] [i_5] [i_5] [i_6] = (var_8 < var_7);
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_23 = (max(var_23, (arr_17 [i_7 + 3])));
                            arr_34 [i_0] [i_7] [i_0] [i_0] &= (arr_25 [i_7] [i_5] [i_7 + 4] [i_7] [i_10]);
                            var_24 *= var_7;
                            var_25 = (((arr_8 [i_7] [i_7] [i_7] [i_7 + 1]) | (arr_8 [i_7] [i_7] [i_7] [i_7])));
                            arr_35 [i_10] [i_6] [i_6] [i_6] [i_0] = (~var_13);
                        }
                        for (int i_11 = 4; i_11 < 11;i_11 += 1)
                        {
                            var_26 = (arr_5 [i_0]);
                            arr_38 [i_7] [i_7] [i_5] [i_7 + 2] [i_11] [i_5] [i_6] = ((var_2 ? (arr_9 [i_6] [i_7 + 1] [i_7 - 1] [i_11 - 4] [i_11] [i_11]) : (arr_9 [i_6] [i_6] [i_7 + 3] [i_11 + 1] [11] [i_11])));
                        }
                        var_27 = (arr_16 [i_7 + 1] [i_7 + 4]);
                        arr_39 [i_0] [i_5] [i_6] [i_6] = (((arr_33 [i_7 - 1] [i_7] [i_7] [6] [i_7] [i_7]) ? (arr_6 [i_6] [i_6]) : (arr_8 [3] [i_5] [2] [i_5])));
                        var_28 = (min(var_28, ((((arr_30 [i_7] [i_7 - 1] [i_7] [0] [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 2]) : (arr_24 [i_7] [i_7] [i_7] [9]))))));
                        var_29 = -8085812748024213871;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_30 = 1008879145;
        var_31 ^= ((-(((arr_41 [i_12]) ? -9108954667856957663 : (arr_41 [i_12])))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_32 = (max(var_32, 3286088150));
        var_33 = var_9;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    arr_50 [i_13] = (-32756 / 47131);
                    var_34 = var_10;

                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        arr_53 [i_13] [i_15] [i_14] [i_13] = 1874410304;
                        arr_54 [i_13] [5] [i_13] = (((arr_44 [i_15] [i_13]) % var_0));
                    }
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        var_35 = (min(var_35, var_9));
                        var_36 *= (arr_48 [i_14]);
                    }
                    var_37 += (!var_11);
                }
            }
        }
    }
    var_38 = (((var_7 ? ((var_7 ? var_8 : var_10)) : var_15)));
    #pragma endscop
}
