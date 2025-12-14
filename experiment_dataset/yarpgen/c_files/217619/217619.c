/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-(arr_2 [i_0])));
                var_18 = (((((-((130 ? 127 : 130))))) ? (((var_14 ? ((min((arr_0 [i_0]), 68))) : ((-(arr_4 [i_0] [i_0] [i_1])))))) : ((-46 ? (-1472756031057082924 / var_1) : (var_8 / 1)))));
                var_19 = (max(var_19, ((((((-(-127 - 1)))) ? (max(-68, 18124671292150411139)) : var_12)))));
            }
        }
    }
    #pragma endscop
}
