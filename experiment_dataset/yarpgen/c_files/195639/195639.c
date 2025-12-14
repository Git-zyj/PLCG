/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += ((~(((((var_9 ? 231 : var_3))) ? (min(var_8, 18414)) : (((231 ? var_10 : -15109)))))));
                    var_16 = ((((var_0 + 9223372036854775807) << (((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]) - 7193)))));
                    var_17 = ((-(arr_3 [i_0] [5])));
                    arr_8 [i_2] [i_2] [i_2 - 1] = var_1;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_2] [i_1] [i_1] = (-15109 == (min(((min(25, var_4))), ((var_7 ? (arr_2 [i_0] [i_0]) : 25)))));
                        arr_13 [i_0] [11] [i_0] [i_2] = ((var_10 ? (((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) : var_2)) : (!1475413930)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_2] [i_0] = var_4;
                        var_18 = ((var_1 ? var_8 : (arr_11 [i_2 - 1] [i_1] [i_2] [i_2] [i_2])));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 = (((~var_12) ? ((4025841940393226786 ? 24 : -4025841940393226786)) : 1));
                    var_20 = (min(var_20, (((((((var_10 && var_11) ? (min(var_6, (arr_3 [i_5] [i_5]))) : (arr_22 [i_5] [i_6 + 2] [i_7])))) ? ((((arr_17 [i_6 + 1]) / (arr_0 [i_6 - 1] [9])))) : var_6)))));
                }
            }
        }
        var_21 = (max(var_21, (((((((~var_8) ? (-4025841940393226787 > 2569458359723952598) : 1))) || (var_5 % var_10))))));
        arr_24 [i_5] = 16376;
        var_22 = (((((1 ? (((arr_18 [i_5]) ? 4025841940393226786 : var_2)) : -3343244718103755209))) ? var_2 : -1309742172));
    }
    #pragma endscop
}
