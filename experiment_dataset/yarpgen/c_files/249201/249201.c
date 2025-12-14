/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!(((~(~var_3))))));
        var_20 = ((~(var_12 >= 31746)));
        arr_4 [i_0] = ((var_5 ? (max(17911, 1)) : -1));
        var_21 ^= var_6;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= (!var_7);
        arr_8 [i_1] = ((-var_13 & (min(-2412095842898355965, var_15))));
        var_22 = (min(var_22, (((-var_17 + 2147483647) >> (((((~var_13) ? -var_18 : -623)) - 13937))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_23 = (max(var_23, ((min(((-(~var_5))), (((((min(var_9, var_11))) >= -var_6))))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_2] [i_3] [17] = var_10;
                        arr_21 [i_2] [i_5] = ((((!((max(var_16, 17911)))))));
                    }
                }
            }
        }
        arr_22 [i_2] = -var_17;
        var_24 ^= 3788247737;
        arr_23 [i_2] [i_2] = -9;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    arr_29 [i_2] [i_6] [i_7] = (((var_3 <= var_16) - (~3788247741)));
                    var_25 = (max(var_25, var_9));
                    var_26 ^= 1;
                    arr_30 [i_2] [i_2] [i_7] = (((((var_4 ? 3788247737 : 17889))) ? (~506719558) : (((~1504) | -var_4))));
                }
            }
        }
    }
    var_27 |= 1365504509;
    var_28 = (~129);

    for (int i_8 = 2; i_8 < 13;i_8 += 1)
    {
        arr_34 [i_8] = max(((2004647390 ? var_19 : (!var_2))), (var_8 && var_1));
        arr_35 [i_8] = 506719558;
    }
    #pragma endscop
}
