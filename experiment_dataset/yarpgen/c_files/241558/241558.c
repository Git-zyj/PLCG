/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 ^= (-var_7 ? -var_13 : (((var_1 + -4757528814821792239) ? (((arr_0 [i_0]) + 42)) : ((var_11 ? (arr_0 [i_1]) : 25)))));
            var_17 += (((max((arr_2 [i_1] [i_1]), 0)) >> 0));
            arr_4 [i_0] [i_0] |= ((((((((~(arr_0 [i_0])))) ? (~-6009499082551326159) : ((((arr_1 [i_0]) ^ var_1)))))) ? 0 : ((((((arr_1 [i_1]) == var_4))) | 255))));
            arr_5 [i_1] [i_0] [i_1] = ((-(((!6009499082551326165) * var_7))));
        }
        var_18 -= 0;
        arr_6 [i_0] |= ((~((255 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        var_19 ^= 0;
                        arr_18 [i_3] [i_3] [i_2] [i_4] [0] = min(0, (((511 ? var_7 : 0))));
                        arr_19 [1] [i_2] [1] [i_0] [i_4 - 1] |= (var_9 ? (((arr_15 [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 - 3]) - ((1 ? 255 : 0)))) : (((arr_1 [i_4 + 1]) ? (arr_0 [i_4 - 3]) : (arr_0 [i_4 - 1]))));
                        arr_20 [i_2] [i_0] [i_2] [i_2] [i_2] &= 0;
                    }
                }
            }
            var_20 = (((((16 ? (arr_15 [8] [i_2] [i_2] [i_0]) : ((max((arr_15 [i_2] [i_2] [i_0] [i_0]), var_4)))))) - (max(var_2, var_9))));
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_35 [i_5] [i_6] [i_7 - 1] [i_7 - 1] [i_9] |= var_10;
                            arr_36 [i_9] [i_9] [10] [i_7] [1] [i_6] [i_5] = ((4294967295 && ((((arr_25 [i_7 - 2] [i_7 + 1] [i_7 - 1]) ? (arr_31 [i_6]) : (63 == -1))))));
                            var_21 += (max(var_4, var_7));
                            var_22 += ((~((~((~(arr_30 [i_7 + 1] [i_8] [i_9])))))));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_23 = ((var_9 ? (((arr_23 [i_8]) ? ((min(var_0, var_5))) : (((arr_39 [i_7 + 1] [i_6] [i_7 - 2] [i_8] [i_10]) ^ 18)))) : ((((((max(14, 9))) > ((0 % (arr_38 [i_7])))))))));
                            var_24 = 12;
                            arr_41 [i_10] [i_10] [i_5] [i_7] [i_7] [i_6] [i_5] = ((!(((-(arr_40 [i_8] [i_8] [i_7 - 1]))))));
                        }
                        for (int i_11 = 3; i_11 < 20;i_11 += 1)
                        {
                            var_25 -= var_8;
                            arr_45 [i_6] [i_6] = 6009499082551326158;
                        }
                        arr_46 [i_6] [i_7 + 1] [5] = (arr_26 [i_5] [i_6] [i_6] [i_8]);
                        arr_47 [11] [11] [i_8] [11] [i_7] [i_7] = (((min(var_12, var_12))));
                    }
                }
            }
        }
        var_26 += (((~((var_5 ? 0 : var_7)))));

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_27 = ((244 ? (((arr_38 [i_5]) ? (var_13 ^ var_14) : ((4294967295 ? var_9 : 63)))) : (((268435455 ? var_10 : ((max(1, var_7))))))));
            var_28 = (((((213625219 ? 22 : 12)))) ? (min(var_11, (((var_3 ? -12330 : (arr_40 [i_5] [1] [3])))))) : (arr_27 [i_5]));
        }
        var_29 *= (min(var_2, 4294967295));
    }
    var_30 ^= var_9;
    #pragma endscop
}
