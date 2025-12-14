/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] = (arr_13 [i_1] [i_0] [i_4] [i_4] [i_4]);
                                arr_17 [i_2] = ((((max((min(91682626, 1)), ((-(arr_6 [i_2])))))) ? -14396 : (arr_4 [i_1] [i_2] [i_3 - 4])));
                                arr_18 [i_0] [i_0] [i_0] [9] [i_0] = ((!((min((max(18446744073709551615, (arr_4 [i_1] [i_2] [i_4]))), ((min((arr_14 [i_0] [i_1] [i_1] [i_3 - 1] [i_4]), (arr_6 [i_0])))))))));
                                var_17 = (arr_15 [i_0] [i_0] [0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_18 = 1743755568785994063;
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_19 ^= 87;
                    arr_21 [i_5] [1] [i_1] [i_1] &= ((878272146670471442 >> (1221848361 - 1221848305)));
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    arr_25 [i_6 - 1] [i_0] [i_0] = (((((-var_13 - (arr_0 [i_6] [10])))) ? ((var_10 ? (arr_3 [i_1]) : (min((arr_3 [i_6 - 1]), 1330106491)))) : -127));

                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_20 ^= max(1743755568785994063, (6759302344687369217 / -121));
                        var_21 = (((((min((arr_5 [i_6 - 1] [i_6 - 1]), 4)))) != (~var_13)));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_22 *= (max(((min((arr_3 [i_6 + 1]), (arr_3 [i_0])))), ((((((arr_14 [i_0] [i_0] [i_0] [i_0] [0]) ? var_14 : 2964860805))) ? 65535 : (arr_12 [i_8] [i_8] [i_6 - 1])))));
                        arr_30 [i_0] [6] [i_8] [i_8] [i_8] = ((1 ? -121 : 1221848357));
                        arr_31 [10] [i_6] [i_1] [i_0] = (arr_23 [i_1] [i_6] [i_8]);
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_40 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
                                var_23 = (max((arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_11 + 1]), (((min((arr_36 [i_11] [1] [i_9] [i_9] [i_1] [7]), var_9))))));
                            }
                        }
                    }
                    arr_41 [i_9] [i_9] = (((arr_37 [i_0] [i_0] [i_1] [i_9] [i_9]) ? ((((arr_13 [7] [8] [i_9] [i_9] [i_9]) ? (arr_13 [9] [i_1] [i_1] [i_9] [i_9]) : (arr_13 [8] [i_0] [3] [3] [i_9])))) : 10));
                }
                arr_42 [i_0] [i_1] = (max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_1] [i_1] [i_1])));
                var_24 = ((((((min(1743755568785994063, (arr_23 [i_0] [i_0] [6])))) ? ((var_6 * (arr_27 [i_0] [i_0] [i_0] [0] [i_1] [i_1]))) : (((arr_34 [i_1] [i_1] [i_0]) ? (arr_32 [i_1] [i_1] [i_0] [i_1]) : (arr_10 [11] [i_0] [i_1] [i_1])))))) ? (min(10, 5144968151401654380)) : (arr_11 [i_1]));
                var_25 = (min(var_25, (arr_13 [i_1] [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_26 = ((-(min(var_11, ((var_15 ? var_0 : 18446744073709551615))))));
    #pragma endscop
}
