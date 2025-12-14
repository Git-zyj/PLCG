/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] = ((((3549734196 ? var_5 : 67)) + 0));
                    var_15 += (((31 + (arr_0 [i_2]))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = ((((var_5 <= ((-5234 ? var_13 : var_14)))) ? 225 : 31));
        var_16 = 31;
        var_17 = ((min(var_14, ((var_1 ? var_7 : var_8)))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        var_18 = (9916 != 31);
                        var_19 = ((1 ? ((var_7 ? 121 : var_6)) : var_6));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        arr_24 [i_6] [i_5] [i_5 + 2] = (((~var_13) ? (~var_9) : (((max(1, (arr_13 [i_4 + 1] [i_4 - 1])))))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            var_20 ^= (max(((3734385588572132989 ? 1616029740 : (arr_25 [i_4] [i_4] [i_9] [i_4] [i_6]))), ((max(var_7, var_7)))));
                            var_21 = ((min(255, (~-1))));
                        }
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        var_22 = ((((min(1, 92218238)))) ? var_12 : (((!(arr_20 [i_4] [i_5 - 1] [i_6] [i_6] [5] [i_10])))));
                        var_23 = ((((((1709897355 - var_11) ? 3050447061661941672 : 93))) ? var_1 : 1));

                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            arr_33 [i_6] = (((((~(4177676227866317494 ^ 90)))) ? var_8 : (((min(var_14, 65535))))));
                            var_24 -= ((((var_1 ? 8975477092222091117 : 12951377062008785367)) * (((((((192 ? var_12 : -38))) || ((min(var_9, 1)))))))));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            arr_37 [i_4] [i_12] [i_6] = (min((1 / 8975477092222091117), var_12));
                            arr_38 [i_5] [i_5 + 1] [i_5] [i_5] [i_6] [i_5] = (!-8975477092222091117);
                            var_25 = ((0 ? var_0 : ((((min(163, 15122857164804131222)))))));
                            arr_39 [i_6] [i_10] = (min(0, 1985625079));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_26 = (var_4 > var_2);
                            arr_42 [i_5] [i_13] [i_13] [i_6] [i_13] = (~-83);
                            var_27 = (((arr_8 [i_4 + 1] [i_5 + 2]) + 1));
                        }
                    }
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_47 [i_6] = min((~79), (min(26, var_8)));
                        var_28 = (min((min(var_10, var_11)), (~22)));
                    }
                    arr_48 [i_6] [i_5] [i_6] = -var_9;
                    arr_49 [i_4] [i_5] [0] |= (~170397894);
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            {
                                var_29 *= (((var_3 ? var_4 : (arr_41 [i_4 + 1] [i_5 - 1]))));
                                arr_55 [i_6] [i_5] [1] = ((!((((var_1 && var_6) ? var_14 : 49991)))));
                            }
                        }
                    }
                }
                var_30 = (min(((((var_11 ? 536870910 : var_11)) + (max(536870915, 253)))), (((1 ? (arr_26 [0] [10]) : var_0)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 0;i_17 += 1)
    {
        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            {
                var_31 = ((var_7 ? var_3 : ((((((2 ? -48 : var_2))) <= (min(var_6, var_5)))))));
                var_32 = var_14;
                var_33 = ((max((-2147483647 - 1), 7424)));
            }
        }
    }
    #pragma endscop
}
