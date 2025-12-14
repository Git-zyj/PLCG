/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= ((!((((arr_4 [i_1]) ? (arr_4 [i_0]) : 0)))));
                arr_7 [11] [i_1] [11] = ((var_14 ? (arr_1 [i_0] [i_1]) : ((1 ? ((var_5 ? 255 : (arr_1 [i_1] [i_0]))) : ((var_8 ? 127 : 1))))));
                arr_8 [i_0] [24] [i_1] = (min((arr_3 [i_1] [i_1] [i_0]), ((max((arr_0 [i_0]), (arr_2 [i_1] [10]))))));
            }
        }
    }
    var_16 = (!-45);
    var_17 |= -var_8;
    var_18 = (min(var_18, (((var_1 >> ((((((var_5 ? var_3 : var_14)) * (1 > 0))) - 650399438938400686)))))));
    var_19 = ((var_3 ? var_9 : var_5));
    #pragma endscop
}
