/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((((var_1 ? var_9 : var_4))) ? var_8 : 1)), var_0));
    var_11 |= (((max(((var_8 ? var_6 : var_9)), ((max(var_7, var_6))))) << (var_1 - 4177925358)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_12 = (((arr_3 [i_0] [i_0] [i_0]) ? (~0) : 9502863468598460984));
            arr_6 [i_0] [i_0] = (((((((var_0 ? 8943880605111090631 : var_8)) % ((min(var_9, (arr_3 [i_0] [i_1] [i_1]))))))) ? ((var_0 ? (max(var_4, (arr_5 [i_1]))) : var_2)) : (arr_5 [i_0])));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_13 = ((((min((arr_1 [i_0]), ((-7588 * (arr_9 [i_0] [i_1])))))) ? ((9223372036854775807 ? ((max((arr_7 [i_2] [i_2] [i_2] [i_2]), var_7))) : var_7)) : (arr_2 [i_0] [i_0])));
                var_14 = (max((69 * var_3), (arr_9 [i_2] [i_1])));
                arr_10 [i_0] [i_1] [i_2] = ((var_9 ? (((-var_6 ? (((arr_4 [i_0] [i_1] [i_2]) ? var_7 : (arr_8 [i_2] [i_1] [i_0]))) : ((min(var_2, (arr_3 [i_0] [i_0] [i_2]))))))) : (((arr_3 [i_0] [i_0] [i_0]) ? (min(-309242487, 1032192)) : 115))));
                var_15 = (((~var_8) ? (!var_6) : (max((((-9211 ? 1 : 21211))), 1179620134))));
            }
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_16 = ((var_5 ? var_4 : (arr_5 [i_0])));

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_17 &= ((-(arr_8 [i_4] [i_3] [i_1])));
                    var_18 = (max(((-((((arr_7 [i_0] [i_1] [i_1] [i_0]) <= (arr_0 [i_4])))))), ((((-2147483647 - 1) != var_9)))));
                    arr_16 [i_1] [i_3] [i_0] [i_1] [i_3] [i_0] = ((((min((arr_14 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_3] [i_4 + 1]), (arr_14 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_3] [i_4 + 1])))) && (arr_14 [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_3] [i_4])));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_23 [i_0] [i_3] [i_3] [i_5] [i_6] = var_7;
                        arr_24 [i_1] [i_1] [i_3] = (arr_9 [i_3 + 1] [i_3 + 1]);
                        var_19 |= (((((arr_7 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_5 + 1]) + 2147483647)) >> (((arr_7 [i_3 + 2] [i_3] [i_5 + 3] [i_5 + 1]) + 12676))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] &= var_4;
                    }
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_20 = var_6;
                        var_21 = (max(var_21, (arr_21 [i_1] [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_5 + 1] [i_5])));
                        var_22 = ((var_5 ^ (arr_2 [i_3] [i_7 - 1])));
                        arr_28 [i_0] [i_7] [i_7] [i_3] [i_7] [i_0] = (arr_14 [i_5] [i_3] [i_5 - 1] [i_3 + 2] [i_3] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_23 = (arr_17 [i_0] [i_5]);
                        var_24 = (arr_7 [i_0] [i_0] [i_0] [i_5]);
                        var_25 = (!var_3);
                        var_26 ^= (((arr_15 [i_5 + 2] [i_3] [i_3 + 2] [i_1]) ? -13 : (arr_15 [i_5 + 1] [i_3 - 1] [i_3 - 1] [i_3])));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_27 = (min(var_27, (arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1])));
                        arr_34 [i_3] [i_1] [i_3] [i_1] [i_3] = (((arr_0 [i_3 + 3]) ? var_2 : var_7));
                        var_28 = ((-309242496 == (arr_20 [i_3] [i_5] [i_5 + 3] [i_3])));
                    }
                    arr_35 [i_0] [i_3] = (~var_5);
                    var_29 = ((9502863468598460984 ? -839137111815645886 : 2173794799));
                    var_30 = (min(var_30, ((((var_5 ? var_4 : (arr_9 [i_0] [i_0])))))));

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_31 = (arr_30 [i_3 + 1] [i_10] [i_3 + 1] [i_3 + 2] [i_3]);
                        var_32 ^= 16600;
                        arr_38 [i_0] [i_5] |= -494;
                    }
                }
                var_33 |= (!29002);
                arr_39 [i_3] [i_3] = (max((min(var_1, (arr_19 [i_3 + 3] [i_0] [i_3]))), ((max((arr_27 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3]), -1930293883)))));
            }
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 11;i_11 += 1)
        {
            arr_42 [i_11] [i_11] [i_11] = (-1 ? 8972184685355006603 : -501);
            var_34 = var_0;
        }
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_35 *= max((max((arr_41 [i_0] [i_12] [i_12]), (arr_41 [i_0] [i_12] [i_12]))), ((min((arr_11 [i_0] [i_0] [i_0]), 0))));
            var_36 = (((arr_17 [i_12] [i_0]) != (max(30507, 8411649524438398785))));
        }
        var_37 ^= (((arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((var_5 <= (min(2147483647, var_4))))) : 1));
    }
    #pragma endscop
}
