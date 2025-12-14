/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_5 ? var_7 : var_7)) ? -22 : (var_11 == var_11))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_14 = var_2;
        arr_2 [i_0] = (var_6 - var_10);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((min(21, 5358439439722795832)));
        var_15 = ((~(((!var_0) << (var_1 - 13)))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = (max((((((max(var_5, var_11))) >= ((var_4 ? var_7 : var_12))))), (min(((var_9 ? var_9 : var_5)), (max(var_11, var_11))))));
        var_17 = (min((var_10 ^ var_3), ((var_10 ? var_2 : var_2))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = (~-var_4);
                    var_19 = (min(var_19, ((min(var_10, ((var_7 ? var_11 : var_8)))))));
                    arr_16 [i_2] [i_3] [i_4] [i_4] = ((((var_6 ? var_3 : var_2))) ? ((var_2 ? var_5 : var_5)) : ((var_11 ? var_0 : var_7)));
                    var_20 = (max(((min(var_1, var_4))), -var_10));
                }
            }
        }
        var_21 = ((-var_5 ? ((var_4 ? var_3 : var_12)) : (!var_0)));
    }
    #pragma endscop
}
