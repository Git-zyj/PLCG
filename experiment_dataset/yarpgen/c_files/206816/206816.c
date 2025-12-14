/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (min((arr_2 [i_0]), (((min((arr_6 [i_0]), 1)) << (((((arr_1 [5] [5]) ? var_0 : (arr_1 [i_0] [i_1]))) + 7509149719598758652))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((((arr_8 [3] [i_3 - 1] [i_3 - 1]) && (arr_8 [i_0] [i_0] [i_3]))))));
                            var_12 = arr_0 [5] [i_3];
                        }
                    }
                }
                arr_12 [i_1] = (arr_7 [i_0] [i_1]);
            }
        }
    }
    var_13 &= (min((((min(1, var_5)))), (min(((min(var_4, var_7))), ((var_4 ? var_4 : 19))))));

    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        var_14 = (min(((min((-127 - 1), (arr_14 [i_4 + 1] [i_4 - 2])))), (arr_13 [i_4])));
        var_15 = ((+(((((arr_14 [i_4 + 1] [i_4]) ? (arr_14 [i_4 - 1] [17]) : var_6)) - (((var_5 ? 1 : var_3)))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        var_16 = min((((-var_4 != (var_5 - var_5)))), ((((min(1, 43238))) ? ((((-127 - 1) - 1))) : 2010763030)));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_17 = var_6;
                            var_18 |= var_2;
                            var_19 = ((((arr_17 [i_5] [i_5]) * (arr_21 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 2]))));
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_20 = ((((arr_25 [i_4] [i_5] [i_6] [i_7] [i_9]) ? 29825 : (((arr_18 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1]) ? (arr_15 [i_6] [16] [i_6]) : var_7)))));
                            var_21 = (((((~(~1)))) & (min((min((arr_23 [i_4] [i_5] [i_4] [i_7] [i_9]), 13714)), ((min(4671320121587239571, 1)))))));
                        }
                        arr_26 [i_4] [i_4] [i_4] [i_4] |= ((-(min((min((arr_23 [i_7] [i_7] [14] [i_7] [i_7]), var_4)), 857152085038393146))));
                        arr_27 [i_4] [i_4] [i_4] [i_4] = var_1;
                    }
                }
            }
        }
        var_22 = (min(((((min(var_4, 184))) ^ var_8)), ((-(-127 - 1)))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        var_23 = (arr_31 [i_10] [i_10]);
        var_24 = var_2;
        var_25 *= ((~((var_1 ? var_1 : (((-(arr_29 [1]))))))));
    }
    for (int i_11 = 2; i_11 < 14;i_11 += 1)
    {
        var_26 = (min(var_26, (((((!((((arr_24 [i_11] [6] [i_11] [6] [i_11]) & var_5))))) && 6481680723345153741)))));
        arr_34 [i_11] = ((-53047 & (arr_20 [i_11 + 1] [i_11 - 2] [i_11 + 1] [16])));
        var_27 |= 14466;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_42 [i_14] [i_14] = ((var_6 / ((+((var_1 ? (arr_18 [i_11] [i_12] [i_13] [i_11]) : 2010763030))))));

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_28 = ((var_1 ? (min(((min(var_7, var_7))), 8137030552510613568)) : (((var_2 ? var_4 : var_3)))));
                            arr_46 [i_11] [i_14] [11] [i_15] = ((42516 ? (((-(-14463 || 223)))) : (min((((7404381722022076773 / (-127 - 1)))), (min((arr_24 [i_11] [i_12] [16] [i_14] [17]), (arr_23 [16] [16] [i_13 + 1] [i_14] [i_15])))))));
                        }
                        var_29 = (max(var_29, ((((((((var_0 ? 25718 : var_7)) * ((min(22, -14467)))))) - (min((var_8 < var_2), ((-73 ? (arr_17 [i_11 - 2] [12]) : 0)))))))));
                    }
                }
            }
        }
        arr_47 [i_11 - 1] [i_11 - 1] = ((1460674624 ? -7155784091958142814 : -121));
    }
    #pragma endscop
}
