/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, var_5));
        var_14 = (max(var_14, (((((max(var_0, (var_7 == var_9)))) ? -var_7 : (-8446 >= 10))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_7 [7] = ((~(~-28116)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_15 = (min(((~((484081712 ? var_8 : -1382928225567120860)))), (((1 ? (min(var_10, var_5)) : (arr_8 [i_2]))))));
                        var_16 = (min(var_16, var_9));
                        arr_16 [6] [8] |= -468535440;
                        arr_17 [8] [6] [10] [i_2] [i_1] = (((~0) ? (((arr_11 [i_1] [5] [i_3]) ? (~var_0) : ((1382928225567120843 ? var_4 : 13901)))) : (!-468535437)));
                    }
                }
            }
        }
        arr_18 [i_1] = (max((arr_4 [5]), ((0 ? (var_11 * 0) : var_5))));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_17 = var_8;
        var_18 = (((((-var_10 + (max(var_0, var_5))))) ? (min(var_2, (468535440 - var_10))) : ((min((arr_6 [i_5]), ((var_7 ? 84 : 1)))))));
        arr_22 [i_5] = (((max(76, 1))));
        var_19 *= (arr_12 [i_5] [i_5] [i_5]);
    }
    var_20 = (max(var_20, (~var_8)));
    var_21 &= (((min((!var_9), (var_2 && var_3))) ? ((183 ? 1910834699 : 3992563212069802631)) : (((var_5 ? var_6 : var_7)))));
    #pragma endscop
}
