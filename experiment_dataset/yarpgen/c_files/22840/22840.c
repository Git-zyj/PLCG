/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((max(((var_0 ? (arr_2 [i_0]) : (arr_5 [i_0]))), (var_7 / var_7)))) ? ((var_9 >> ((((max(var_4, 122))) - 113)))) : (((min(var_15, var_9)) ? ((var_6 ? var_15 : var_0)) : var_15))));
                var_17 = ((-((min(-70, (arr_5 [i_0]))))));
                var_18 *= max((min(var_4, var_10)), (max(var_12, var_7)));
            }
        }
    }
    var_19 -= ((((min((min(var_11, var_14)), 63))) + (((((max(1, 0))) == 49)))));
    var_20 |= var_8;
    #pragma endscop
}
