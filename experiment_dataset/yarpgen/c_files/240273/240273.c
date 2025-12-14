/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((3874444233820156345 ? var_1 : (max(125, 0))));
    var_11 = (min(((((min(var_8, var_6))) ? (-2147483647 - 1) : var_6)), ((min((max(var_7, var_1)), 35)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_1] = (((((((min(var_3, -24627))) > (arr_3 [i_1 - 2] [i_1 - 2] [5])))) > ((((((arr_2 [i_0] [i_0] [i_0]) ? var_9 : 8))) ? (-32767 - 1) : -119))));
                var_12 -= max((((((min(4238677485, 2103438745))) && 240))), (max(4250034121, 0)));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 = (min(var_3, ((var_2 ? var_2 : (arr_5 [i_2] [i_2] [i_1 - 1] [6])))));
                    arr_8 [i_0] [i_1] [i_2] = ((var_8 << ((((max(3828991083, var_5)) < (var_7 == -1853624381))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_14 += ((~(min(var_2, (~var_3)))));
                        var_15 = (min(var_15, ((((((var_9 ? (((var_9 + 2147483647) >> (var_9 + 22952))) : ((min(var_1, var_0)))))) ? (min((arr_2 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_9 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))) : (((var_2 << (((-1927657507 - -9223372036854775798) - 9223372034927118278))))))))));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_16 [11] [i_1] |= arr_3 [1] [1] [i_4];
                    var_16 = ((~((var_1 ? var_8 : var_6))));
                    var_17 ^= ((-73053677 < (5876482760961233698 > 0)));
                    var_18 = (min(var_18, ((max(var_4, (((((min(-987363271, var_8))) && -55))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = ((min((arr_5 [i_1 - 2] [i_1 - 2] [3] [i_6 + 2]), ((max(var_2, (arr_6 [i_1 + 1] [i_1 + 1])))))) >> ((((((var_6 ? var_5 : var_8))) <= var_8))));
                                var_20 = (((3 ? 130 : ((var_4 ? (arr_7 [i_1] [i_4] [i_5] [i_6]) : 3202611976)))));
                                var_21 = var_7;
                                var_22 ^= 3963192244;
                                arr_22 [i_6] = (((((arr_1 [i_1 - 1]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 2]))) % 64));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_23 |= (1 + 1800224317);
                    var_24 = ((((-(arr_14 [i_7] [3] [i_0] [i_0]))) | -9223372036854775796));
                }
                var_25 = ((((((((var_4 ? var_0 : (arr_6 [i_1 - 2] [9])))) ? ((2949254184 ? (arr_15 [i_1 - 2] [i_0] [i_0]) : var_7)) : ((var_3 ? 2730897600 : -22))))) ? (arr_20 [i_1] [i_1] [i_1]) : ((((arr_13 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) < (arr_2 [i_0] [i_1] [i_1 - 2]))))));
                var_26 = (arr_14 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            {
                var_27 = (max(var_27, ((min(-48, 0)))));
                arr_34 [i_9] |= ((4201170604 ? var_2 : (!3)));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_39 [i_11] = ((((((~var_3) ? ((-(arr_31 [i_9] [i_10]))) : ((max(var_2, (arr_31 [i_9 - 2] [i_9 - 2]))))))) ? ((~((var_3 ? (arr_6 [i_9] [i_10]) : var_1)))) : ((((max((arr_7 [i_8] [11] [10] [i_8]), (arr_27 [i_8])))) ? ((0 ? (arr_0 [0] [i_9]) : 73)) : ((var_6 ? var_0 : -8895))))));
                            var_28 += (arr_19 [i_10] [i_10]);
                            arr_40 [i_11] = (!((min(((max(var_0, (arr_23 [i_8] [i_9] [i_10] [i_11])))), (1 & 1)))));
                            var_29 = ((~(min((max(var_1, var_4)), (~var_4)))));
                            arr_41 [i_11] [i_9] [i_10] [i_11] = 0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
