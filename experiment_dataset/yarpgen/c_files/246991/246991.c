/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 ^= ((((min((min((arr_0 [i_0] [i_0 - 1]), var_9)), (((var_11 ? (arr_0 [i_0] [i_0]) : (arr_0 [1] [i_0]))))))) ? (((109 ? 184 : 121))) : (min((arr_0 [i_0] [i_0]), ((var_14 ? var_19 : var_15))))));
        arr_2 [6] = (min(-520, 141));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_21 = (((min(192, 145))) ? 6 : (((max(140, 520)))));
        var_22 = (min(((-520 ? ((237 ? 21369 : -531)) : ((max(22095, 232))))), ((min((max(0, 8831)), 237)))));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        var_23 = (max(255, (min(255, 255))));
                        var_24 = (min((((((1 ? 0 : 34575))) ? 8388607 : 49795)), ((max(234, 6)))));
                    }
                }
            }
        }
        var_25 += ((41527 ? ((max(67, 188))) : 2));
    }
    var_26 += ((var_3 ? (min((min(var_6, var_1)), var_17)) : var_16));
    #pragma endscop
}
