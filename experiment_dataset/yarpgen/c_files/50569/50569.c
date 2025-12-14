/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 ? (((var_8 ? ((var_7 ? 65 : -1)) : 0))) : ((((min(18, 2698))) ? var_10 : var_9))));
    var_18 = (max(((((var_8 ? var_9 : 191)) >> (var_8 - 135))), ((((~var_6) < 3220180450909289654)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (!1);
                var_19 = (((!1) ? (arr_4 [i_0] [i_0]) : (((-((min(var_5, var_3))))))));
            }
        }
    }
    #pragma endscop
}
