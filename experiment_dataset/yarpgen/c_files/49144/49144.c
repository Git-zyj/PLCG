/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 *= (((((!(arr_2 [i_0] [i_0])))) >> ((((min((arr_2 [i_0] [i_0]), -32753))) + 32774))));
        arr_3 [i_0] = (((65530 / 3071211832542116297) ? var_8 : (((max((arr_0 [i_0]), (arr_0 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_17 ^= (max((min(var_14, (arr_5 [i_1] [i_1]))), ((((!var_2) << ((((var_2 ? -31709 : var_4)) - 18446744073709519884)))))));

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_18 = ((-((15 ? (arr_7 [i_2 + 1] [i_2] [i_1 - 1]) : -22))));
            var_19 ^= (min((((((var_11 + -1) + 2147483647)) >> (-10 + 24))), ((((arr_5 [i_2 - 1] [i_1 - 1]) == (arr_5 [i_2 - 1] [i_1 + 1]))))));
            arr_9 [i_1] [i_1] = (arr_2 [i_1 - 1] [i_1 - 1]);
            arr_10 [i_2 + 1] [i_1] = ((15 ? ((min((var_15 && 266287972352), (max(28722, -95))))) : -25289));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_3] [i_3 + 1] = 22;
            arr_14 [i_1 + 1] [i_3] = ((6 ? 6537923749914605808 : -21170));
            var_20 ^= 56722;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_1] [i_4] = (max((max(((min(127, (arr_5 [i_1] [i_1])))), 3)), ((-((17715 ? 34883 : 15584))))));
            arr_19 [16] [i_1] [i_4] = 207;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_22 [i_1 - 1] [i_1 - 1] = ((((~(arr_8 [i_1]))) ^ 21182));
            arr_23 [i_5] [i_1] = ((((-15578 && -22) ? (((arr_1 [i_1 + 1]) ? 25835 : -9223372036854775799)) : 20912)));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_21 |= (arr_2 [10] [i_6]);

        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                arr_30 [i_8 - 1] [i_8 - 1] [8] [i_6] = ((~(32760 - var_11)));
                arr_31 [i_7] [i_7] [i_7] = -1;
                var_22 = (min(var_22, ((((-7626943376318727506 ? (arr_29 [i_6] [i_6] [i_8]) : 236))))));
            }
            var_23 = (arr_28 [i_6] [i_6] [i_7] [i_6]);
            var_24 = 124;
            var_25 -= -22;
        }
        for (int i_9 = 2; i_9 < 19;i_9 += 1)
        {
            arr_35 [i_6] [i_6] = (((((var_15 ? 32755 : var_14))) ? (~1) : 32785));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_26 = -var_8;
                            var_27 = (min(var_27, 65526));
                        }
                    }
                }
            }
        }
        var_28 = ((~(arr_38 [i_6] [i_6])));
        var_29 ^= ((~((26635 ? 2469449790 : 21144))));
    }
    for (int i_13 = 1; i_13 < 9;i_13 += 1)
    {
        arr_47 [2] &= (--5762965470904619533);
        arr_48 [i_13] [i_13] = (!232);
        var_30 = (max((((arr_24 [i_13 - 1] [i_13 + 1]) + (arr_15 [i_13 - 1]))), -32746));
        arr_49 [i_13] = var_11;
    }
    var_31 += 70368744177663;
    #pragma endscop
}
