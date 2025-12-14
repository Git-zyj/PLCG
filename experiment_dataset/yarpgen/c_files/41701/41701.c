/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = 268015072;
                    var_19 |= 0;
                    var_20 = (min((arr_2 [i_1 - 3] [i_1 + 1]), (((~((1048575 ? var_7 : -6)))))));
                    var_21 = (arr_5 [i_0]);
                    var_22 = (max(var_22, -1048589));
                }
            }
        }
    }
    var_23 = (var_5 % (max(((var_4 ? var_10 : 1)), var_3)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_4] [i_3] = ((var_13 < (~1)));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (((max((arr_1 [i_5] [i_5]), (arr_1 [i_3] [i_5])))) % (4002973493168310308 && var_0));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = var_12;
                        var_26 += (((((~(((!(arr_7 [i_4] [i_3]))))))) ? (min((-1048589 < -1048591), (min((arr_8 [i_3] [10]), -1048576)))) : ((min((arr_10 [i_3]), ((min(var_17, -82))))))));
                        var_27 &= ((--1048576) - (~var_7));
                        var_28 = max((min(((1048575 ? var_17 : var_2)), -var_11)), ((((max(var_13, -1048588)) % (max(1048571, (arr_14 [0] [i_4] [i_5] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        var_29 += 0;
                        var_30 ^= var_9;
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_31 = var_7;
                        arr_25 [i_3] [i_3] = (((25 ? (arr_19 [i_8] [i_5] [i_4] [i_3]) : (arr_9 [i_3]))));
                        arr_26 [i_3] [i_3] [i_5] = (((arr_12 [i_3]) && ((max((((arr_8 [i_3] [i_3]) ? 2147483634 : var_13)), (!var_17))))));
                    }
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    var_32 = ((0 ? -1 : 0));
                    var_33 = (((!706576946) ? ((var_2 ? var_7 : 7255107239917216453)) : (arr_27 [i_3] [i_4])));
                    var_34 = ((var_4 ? ((-5616431765529735716 ? (arr_5 [i_3]) : var_4)) : (arr_27 [i_3] [i_9 - 1])));
                }
                var_35 = ((min(var_9, var_10)) < ((min(-706576946, var_16))));
                var_36 = (min(((((7255107239917216446 ? var_9 : var_14)) % (arr_3 [i_3]))), (((-(arr_23 [i_3] [i_3] [i_4]))))));
            }
        }
    }
    var_37 = var_4;
    #pragma endscop
}
