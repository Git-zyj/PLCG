/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_12 % (min(var_8, var_6)))), (((((var_13 ? var_2 : var_10)) < (min(var_2, var_3)))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [9] = (min(((((((-884899045 ? 11601456395903359191 : 56877))) ? (var_3 - var_9) : (((var_10 + 2147483647) >> (var_9 + 1226093894)))))), (min(8658, (var_10 + var_13)))));
        var_18 = ((((min(var_2, (var_12 < var_16)))) ? (((~var_0) - (var_16 | var_11))) : (((56877 ? ((var_3 ? var_4 : var_10)) : var_3)))));
        var_19 = (min(((-(arr_1 [i_0 - 1]))), ((var_6 ? (arr_1 [i_0 - 1]) : var_2))));
        var_20 = (min(var_20, (min((var_11 - var_16), (((!var_8) << (((var_7 * var_2) + 1282250639))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_21 = var_11;
        var_22 = (min((((255 + ((-1 ? 8660 : -1386807901507969940))))), (((((var_16 ? var_12 : var_10))) ? ((var_8 ? var_9 : var_0)) : (min(var_9, var_13))))));
        var_23 = 514192125;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 = ((~(min((arr_9 [i_3 - 3]), (min(var_3, var_8))))));
                        var_25 *= ((((((var_5 ? var_13 : var_14)))) * (arr_9 [i_2 - 2])));
                        var_26 = ((((~var_16) + 2147483647)) << ((((((-(8659 + 1855248260690940073))) + 1855248260690948743)) - 11)));
                        var_27 = (max(var_27, ((((min((var_14 * var_8), 56875)) * ((((arr_11 [i_3 - 2] [i_3] [i_3 + 1]) ^ (var_5 | var_3)))))))));
                        arr_15 [i_1] [i_2 + 2] [i_3] [i_4] = (((min((arr_1 [i_4]), (arr_1 [i_1])))) | ((~(arr_1 [i_1]))));
                    }
                }
            }
        }
    }
    var_28 = var_0;
    #pragma endscop
}
