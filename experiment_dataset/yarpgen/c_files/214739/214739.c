/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [16] [i_1] = (((((arr_0 [i_0] [i_1]) < var_0)) && ((min(1, (arr_1 [i_0]))))));
                var_16 = (min(var_16, (min(((~((6 ? 29315 : var_13)))), (((((1 & (arr_4 [i_1] [i_0])))) ? ((51124 ? var_4 : 8184)) : (arr_4 [i_0] [i_0])))))));
                arr_6 [i_1] [i_1] [i_0] = (max((1 == var_7), ((((min(175405115656987800, var_12))) ? var_0 : 41692))));
                arr_7 [i_0] [i_1] [i_0] = 38;
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
