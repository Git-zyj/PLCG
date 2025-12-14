/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max(-1, (((((var_8 ? 15 : var_5)) / var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [12] [0] [i_0] = (-4625544802152240819 ? (1010445971848312694 / 1) : (~1));
                var_17 = 27;
            }
        }
    }
    var_18 = ((~(var_2 | var_9)));
    #pragma endscop
}
