/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!var_12) ? (max(var_1, 4049)) : var_1)), ((var_9 ? ((var_1 ? 18446744073709551594 : var_4)) : (!-20859)))));
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [17] = (((!var_13) || (((var_4 ? (arr_2 [i_0] [i_0]) : 78)))));
                var_16 = -87;
            }
        }
    }
    var_17 = (!var_8);
    #pragma endscop
}
