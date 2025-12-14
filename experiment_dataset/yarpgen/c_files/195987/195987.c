/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 -= (((-32763 + 2147483647) << (((var_12 + 12051) - 1))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_21 ^= var_0;
                            arr_15 [i_0] [i_1] [i_1] [i_4] = (((arr_2 [i_4 + 2] [4]) >> (var_13 - 18896)));
                            arr_16 [i_0] [i_1] [1] [i_2] [i_2] [i_3] [i_2] = ((((-26470 ? 47865 : 47879)) + var_13));
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_4] = var_11;
                        }
                    }
                }
            }
            arr_18 [11] [i_0] [11] = var_16;
        }
        var_22 = (min(var_22, ((((((var_5 + -30383) + 2147483647)) >> ((((2536 ? 4080 : -26074)) - 4074)))))));
        arr_19 [3] = (((arr_9 [i_0] [i_0] [i_0] [i_0]) + (arr_9 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = -25792;
        arr_24 [i_5] [i_5] = ((((((arr_22 [i_5]) - var_9))) ? (arr_20 [i_5] [i_5]) : 25064));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((min(6931, ((var_16 ? var_14 : (arr_20 [i_6] [i_6]))))))));
        arr_27 [0] [i_6] = ((((min((arr_21 [i_6] [11]), (arr_21 [i_6] [i_6])))) >> ((((31234 ? 32761 : -26458)) - 32740))));
        var_24 = (arr_20 [i_6] [i_6]);
        arr_28 [i_6] = (min(((((((var_4 ? 39872 : (arr_21 [i_6] [i_6])))) && (!var_14)))), (min(((var_16 ? 4080 : var_11)), -13768))));
    }
    var_25 = var_0;
    var_26 *= (var_0 + var_8);
    #pragma endscop
}
