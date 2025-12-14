/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (9669228823434199681 && 4294967286);
                var_20 = var_4;
                var_21 = (-1 != 6);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_22 = var_2;
                    var_23 = ((!((min((((arr_5 [i_0] [i_0] [i_0]) ? var_10 : (arr_2 [i_0] [9]))), var_5)))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        var_24 = 1;
                        var_25 = (((max((((var_15 ? (arr_3 [i_1] [i_1]) : var_2))), 9726925913953422736)) % (((-13 ? var_7 : var_14)))));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, (((var_12 % (124 || 127))))));
                            arr_10 [i_0] [i_0] [i_2] [4] [i_4] [i_0] = (min((max(14328278857766892602, (arr_8 [i_0]))), 1));
                            var_27 = (((((-91 ? 1 : 1))) ? (arr_4 [i_0] [i_0] [12] [10]) : ((((((min(var_11, -1)))) > ((119 ? 1 : (arr_9 [i_4] [i_3] [i_2] [i_1] [9] [i_0]))))))));
                            var_28 = (min(var_28, ((((15 / -15) ? ((91 << (2247991634 - 2247991619))) : 119)))));
                            var_29 = ((((((arr_6 [i_0] [i_1] [i_0] [i_3] [i_3]) ? 3952359490 : var_7)) << (var_0 - 703036525))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_30 ^= 65521;
                            var_31 &= var_17;
                        }
                        var_32 &= (arr_0 [2]);
                        arr_15 [i_3] [i_2] [i_2] [3] [i_0] &= -71;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_33 -= (~var_3);
                        var_34 = ((((121 || (arr_3 [i_0] [1]))) ? (arr_9 [5] [6] [2] [i_2] [4] [i_2]) : -65));
                        var_35 *= (arr_4 [i_0] [1] [i_2] [0]);
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_21 [3] [3] [i_2] [i_7] [12] = ((max(var_10, (arr_5 [i_0] [i_0] [i_0]))));
                        var_36 = var_0;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            var_37 = ((16 << ((((((3952359478 ? var_2 : 1)) + 31533)) - 24))));
                            var_38 = ((((8719818159756128880 ? 8191 : var_18)) << (4294967286 - 4294967268)));
                        }
                        var_39 = var_18;
                    }
                    var_40 = (min(1235194113920416363, (arr_11 [12] [4])));
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_41 *= -1035167594;
                    var_42 = var_13;
                    var_43 = var_1;
                    var_44 = 1;
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    var_45 = -64;

                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        var_46 *= (arr_6 [i_11 + 1] [i_1] [i_11 - 2] [i_11 - 2] [i_12 - 1]);
                        arr_37 [i_0] [1] [3] [3] = (((arr_7 [i_0] [i_12 - 1] [i_0] [i_12]) ? -var_9 : var_4));
                        var_47 = (min(var_47, (((var_13 << (((arr_28 [i_0] [i_12 + 3] [5] [i_12] [6]) - 7677217135216493785)))))));
                    }
                    arr_38 [i_1] = 26228;
                    var_48 = (min(var_48, ((((arr_19 [i_11] [i_1] [i_1] [i_0]) ? -1 : (arr_25 [i_11] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 1;i_14 += 1)
        {
            {
                var_49 = ((((~(arr_42 [i_14 - 1] [i_13 - 1]))) != (0 > var_11)));
                arr_44 [i_13] [4] |= ((((var_1 ? var_11 : (arr_43 [10]))) > ((((arr_43 [0]) ? (arr_42 [i_13 + 1] [i_13 + 1]) : (arr_42 [i_13 + 1] [i_13]))))));
                arr_45 [i_13] = var_14;
                var_50 = (((-1 * var_13) / var_0));
            }
        }
    }
    #pragma endscop
}
