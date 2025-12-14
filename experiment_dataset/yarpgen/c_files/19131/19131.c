/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((-(max(-3326679555201705978, 0)))), 1));
    var_12 -= (!3162256807);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            {
                var_13 -= (var_5 ? (((var_3 ? var_3 : 1))) : ((((!((((arr_4 [i_0] [i_0] [i_1 + 4]) ? (arr_1 [i_0]) : (arr_2 [i_1] [i_1])))))))));
                arr_6 [i_1] [i_1] = arr_0 [i_0];
            }
        }
    }
    #pragma endscop
}
