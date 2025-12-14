/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(((((max(36, 23379))) ? ((max(220, 22974))) : 42157)), (((((6584 ? 1 : 12288))) ? ((6584 ? 1 : 42156)) : 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((var_9 >> ((((var_5 ? ((861555955 ? var_13 : var_14)) : (arr_1 [i_3]))) - 3141366363)))))));
                                arr_13 [i_3 + 1] [i_0] [i_0] [i_0] = (arr_11 [1] [i_0] [i_0] [i_3 + 1]);
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] = ((((((arr_8 [i_0] [i_0 - 1]) && var_13))) >> (((~var_13) - 1153600917))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = (min((((arr_16 [i_5] [i_5]) ? var_5 : (arr_16 [i_5] [i_5]))), ((max(var_3, var_3)))));
        var_21 = (max((((((9160097038073108538 ? 1 : 1))) ? (~-8) : ((var_13 ? 5799556604452819251 : var_10)))), 4));
    }
    var_22 = (((((var_12 ? (4194240 / var_14) : (min(var_3, var_1))))) ? var_0 : var_13));
    #pragma endscop
}
