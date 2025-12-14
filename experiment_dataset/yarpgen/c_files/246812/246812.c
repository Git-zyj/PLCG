/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((-(((!(((-96 ? 338416240 : var_9))))))));
                var_21 -= ((((((var_9 ? var_2 : 15692303766631924060)))) ? (((arr_2 [i_0] [6]) ? 338416211 : var_2)) : ((min(((var_6 ? (arr_3 [i_0] [i_0] [i_0]) : var_0)), (-4096 / var_6))))));
                var_22 = (max(var_13, (((~var_13) ? (arr_2 [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
