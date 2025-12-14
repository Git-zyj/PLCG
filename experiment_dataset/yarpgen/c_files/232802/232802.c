/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((-(((-127 - 1) ? 99 : (arr_0 [i_0])))))) ? (((arr_2 [i_0]) ? -4808813909733707324 : (arr_2 [i_0]))) : 3437014412739492797));
                var_19 -= 469232618;
                var_20 = ((((65070 | 469232634) << ((((1 ? (arr_1 [i_1]) : (arr_2 [i_1]))) - 188)))));
            }
        }
    }
    var_21 -= ((var_5 ? var_2 : (((((var_12 ? 469232623 : 1))) / var_1))));
    var_22 = ((var_12 ? var_15 : ((3825734672 + (min(1, 712332304))))));
    #pragma endscop
}
