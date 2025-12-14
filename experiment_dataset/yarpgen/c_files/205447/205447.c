/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 -= ((((((min(var_14, 459076003)) + (((min(var_0, (arr_0 [i_0])))))))) & (max((min(var_12, var_9)), (var_2 ^ var_7)))));
        var_17 ^= (min(-3390832472281558466, (((~(arr_1 [7]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 ^= var_3;
            arr_4 [7] [7] [7] |= (((((~(~1)))) ? var_14 : var_3));
            arr_5 [i_0] &= arr_3 [i_0] [i_1];
            var_19 -= (2007692966 > 853089531835248600);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_20 ^= (min((max(var_5, (arr_3 [i_2 + 1] [i_2 + 1]))), ((((!(arr_1 [i_0])))))));
            arr_8 [i_0] |= var_9;
            var_21 = (min(var_21, ((min(((~(var_6 | 14854832344071263860))), ((min((var_0 & var_7), (~var_4)))))))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [6] |= ((arr_6 [i_3] [i_3] [i_3]) ? (arr_6 [5] [i_3] [i_3]) : 17593654541874303015);
        arr_12 [18] &= (((var_7 ^ var_8) - ((562949953421311 ? var_11 : (arr_0 [i_3])))));
        arr_13 [2] [10] |= ((var_10 == (arr_6 [i_3] [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_22 = (max(var_22, (((-(arr_1 [i_3]))))));
            var_23 ^= (arr_10 [i_4]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_24 &= ((~((-9 ? 1006632960 : 14))));
            var_25 *= var_15;
            var_26 ^= ((((((arr_3 [i_3] [i_5]) || var_14))) + 24));
            var_27 ^= ((var_2 ? (4120108817584207474 || var_2) : (arr_10 [4])));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_28 = (max(var_28, 17593654541874302999));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    {
                        var_29 = (max(var_29, (((-30 && 1) && (!17593654541874302999)))));
                        var_30 &= (arr_7 [i_7] [i_6]);
                        var_31 ^= var_2;
                        var_32 &= (((var_2 + 2147483647) << var_0));
                        var_33 = (min(var_33, (((var_2 + ((1 ? -57 : var_15)))))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_34 &= (((arr_15 [i_3] [i_12 + 4] [i_12]) || var_15));
                            var_35 ^= (var_12 ^ var_12);
                            var_36 *= ((var_3 ? ((-29895 & (arr_15 [i_3] [i_9] [11]))) : (((-57 ? var_5 : var_13)))));
                        }
                    }
                }
            }
            var_37 = (max(var_37, (arr_15 [11] [i_3] [i_3])));
            arr_37 [i_3] [i_9] [0] &= (((arr_25 [16] [16] [i_3]) ? 10 : (arr_25 [1] [i_9] [1])));
        }
    }

    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_38 += (((0 & ((min(1, 0))))));
        var_39 -= ((-(var_14 / 1)));
    }
    #pragma endscop
}
