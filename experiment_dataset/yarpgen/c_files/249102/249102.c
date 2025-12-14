/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (min(var_3, ((var_7 ? var_3 : var_5))))));
        arr_4 [i_0] = (min((min(var_7, var_9)), ((var_3 ? var_2 : var_2))));
        arr_5 [i_0] = ((((max(var_0, var_0))) ? ((var_5 ? var_9 : var_1)) : (max(var_4, var_2))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_12 -= (((min(var_10, var_10))) ? (min(var_2, var_1)) : (min(var_8, var_0)));
        var_13 = min(-2078876193, var_7);
        var_14 = ((((var_6 ? var_4 : var_5))) ? ((var_7 ? var_7 : var_4)) : (min(var_9, var_9)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_15 = (((min(var_9, var_3))) ? var_10 : var_6);
                    arr_14 [i_1 + 1] = (((((var_5 ? var_5 : var_9))) ? (max(var_6, var_3)) : (min(var_6, var_0))));
                }
            }
        }
        var_16 = (((((var_4 ? var_6 : var_8))) ? ((var_2 ? var_7 : var_6)) : (((var_7 ? var_2 : var_7)))));
    }
    var_17 = var_0;
    var_18 = var_9;
    #pragma endscop
}
