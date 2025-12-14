/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));
    var_14 = min((((!((min(var_7, var_8)))))), -446302549338711270);
    var_15 = var_4;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 ^= ((~(arr_1 [i_0 + 1])));
        var_17 -= (9554 >= 16250785334215536851);
        arr_4 [i_0] = (((arr_3 [i_0 + 1]) + (((-9223372036854775807 - 1) ? (arr_0 [i_0]) : (-2147483647 - 1)))));
        arr_5 [i_0] = (((arr_0 [i_0 + 1]) ? (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : var_8)) : ((var_4 ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        arr_6 [i_0] = 54272;
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_2] [i_2] [7] = (arr_13 [i_1] [i_2] [i_3] [i_1 - 1]);
                        arr_17 [i_4] [i_2] [i_3] [i_2] [i_1] = ((((arr_10 [i_1 + 1]) ? (arr_15 [i_1 + 1] [i_1]) : (arr_15 [i_1 + 1] [i_1 + 1]))));
                        arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((-9585 > ((min((arr_15 [i_1 - 1] [i_1 - 1]), (arr_15 [i_1 - 1] [i_1 + 1]))))));
                    }
                }
            }
        }
        arr_19 [i_1] = (((((var_7 % (arr_9 [1] [i_1 + 1])))) ? (((var_3 ? (arr_9 [i_1] [i_1]) : -9223372036854775802))) : -2147483641));
        arr_20 [i_1] = ((var_10 % (max(89, ((var_6 ? (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) : var_7))))));

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_23 [1] [i_5 + 3] [i_5] = (~9223372036854775807);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        arr_29 [i_1] [i_5] [i_6] [11] [3] [i_1 - 1] = 33488896;
                        var_18 = (max(var_18, ((((arr_26 [i_5 - 1]) > ((((arr_13 [i_1] [i_5 + 1] [i_1 + 1] [i_7]) % (arr_13 [i_1] [i_5 + 3] [i_1 - 1] [i_7])))))))));
                        arr_30 [i_1] [i_5] [i_6] [i_7] [i_7] [3] = 2147483645;
                        var_19 = (max(var_19, (9223372036854775807 + -2921889529746112328)));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 4; i_8 < 15;i_8 += 1)
        {
            arr_34 [i_1] &= -2147483639;
            var_20 = ((~(arr_9 [i_1 - 1] [i_1 - 1])));
        }
    }
    var_21 = var_0;
    #pragma endscop
}
