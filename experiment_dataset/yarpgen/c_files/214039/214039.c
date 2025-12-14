/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((((min(var_16, var_9))) / ((var_10 ? var_14 : var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (((arr_1 [i_0] [i_1]) ? 4 : (min((min(var_14, (arr_1 [i_0] [i_0]))), var_15))));
                var_20 += (min((var_14 / var_9), var_3));
                var_21 = ((((((((var_16 ? (arr_4 [i_0]) : var_9))) | (max(var_7, var_13))))) ? 255 : (!var_16)));
                var_22 = (--32761);
            }
        }
    }
    #pragma endscop
}
