/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_1 ? (max(var_3, var_2)) : ((min(var_11, var_10))))), (((var_0 ? var_5 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((1 ? 238 : 17));
                var_15 = (min(var_3, (max(((var_0 ? var_3 : var_11)), var_7))));
                arr_4 [i_1] = max(var_8, (max((~var_1), var_5)));
                arr_5 [i_0] [i_0] = (((~var_4) ? ((max(var_1, var_10))) : (((var_12 ? ((18 ? 17 : 1573018521)) : ((var_7 ? var_8 : var_8)))))));
            }
        }
    }
    var_16 = (min(((~((var_10 ? var_9 : var_6)))), (min(var_4, ((max(var_7, var_8)))))));
    var_17 = (min((min(var_5, ((min(var_1, var_0))))), ((max(var_6, var_11)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_18 = ((var_5 ? var_8 : var_12));
        arr_10 [i_2] = var_7;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] = (((min(var_6, var_10))) ? ((((((var_2 ? var_10 : var_10))) ? var_4 : var_4))) : ((var_3 ? ((var_4 ? var_6 : var_2)) : var_4)));
        arr_14 [i_3] [i_3] = (((((((min(var_6, var_4))) ? (max(var_9, var_6)) : var_6))) ? (max(var_4, (~var_4))) : ((((var_3 ? var_6 : var_11))))));
    }
    #pragma endscop
}
