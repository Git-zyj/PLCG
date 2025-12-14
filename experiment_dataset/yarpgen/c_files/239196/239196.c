/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((54233 ? -448142433 : 1))) ? ((var_6 ? (~-6) : ((1 ? var_5 : 54233)))) : -6);
                var_13 = (min(var_13, var_5));
            }
        }
    }
    var_14 = (max(var_14, ((((((var_5 ? ((1 ? 1 : var_11)) : ((1065973223 ? 2147483647 : var_0))))) ? (((var_7 ? ((var_5 ? 124 : 1)) : 1))) : ((1 ? var_11 : (((var_9 ? var_1 : 1))))))))));
    var_15 = (max(var_15, 0));
    #pragma endscop
}
