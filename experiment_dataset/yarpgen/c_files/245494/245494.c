/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((~(max(var_9, 0))))) ? (var_4 / 61) : (var_9 < 18446744073709551609))))));
    var_16 += (max((((var_5 >= (~65535)))), var_6));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = 100;
        var_18 = var_8;
        arr_2 [i_0] &= (arr_1 [9] [9]);
        arr_3 [i_0] [i_0] = var_4;
        arr_4 [i_0] = (var_6 == 65535);
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_16 [i_3] [i_1] = (((var_11 ? (arr_10 [i_1 + 1]) : (arr_10 [i_1 - 1]))));
                    arr_17 [3] |= ((18446744073709551610 >= ((min(-1, (arr_7 [i_1 + 1]))))));
                    var_19 = (((var_8 >= 18446744073709551614) >= var_5));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    {
                        var_20 = var_11;
                        var_21 = (min(((min(124, (((6 != (arr_5 [i_1] [6]))))))), (min(3151957624439779996, 18446744073709551615))));
                    }
                }
            }
        }
        var_22 = (min(-10, 1065353216));
        var_23 = ((-(arr_1 [i_1 + 1] [i_1 + 3])));
        var_24 += ((max((arr_19 [i_1 + 2]), (!8693674296135911375))));
    }
    var_25 = (((((-((var_9 ? var_8 : var_12))))) ? ((max(var_2, var_0))) : ((-102881110789291558 ? var_0 : (min(0, 31))))));
    #pragma endscop
}
