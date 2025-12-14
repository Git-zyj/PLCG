/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (~1);
    var_21 = ((2147483647 >= (((!var_4) ? (var_3 - var_13) : (-149792861 == var_17)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [11] [11] = -149792857;
        arr_3 [i_0] [i_0 + 3] = (min(((((var_0 + 2147483647) >> (((arr_1 [i_0] [i_0]) / 8413015795085032062))))), ((1 * (((arr_0 [i_0]) / -149792855))))));
        var_22 = (((((((min(var_0, var_5))) ? var_18 : (173 % 149792844)))) ? var_4 : (((((0 ? var_15 : -149792844))) ? var_7 : 2147483647))));
        var_23 = ((((!((max((arr_0 [i_0]), var_12))))) && ((!(!231)))));
    }
    var_24 = (min((((var_17 ? (min(var_11, -149792871)) : var_3))), ((var_7 ? 8388607 : var_11))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_25 = -1;
                    var_26 |= ((((((var_6 || 1) ? (min(-149792844, 1)) : (!149792844)))) ? (max(8921062901183148128, var_2)) : -var_19));
                }
            }
        }
    }
    #pragma endscop
}
