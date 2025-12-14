/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min(var_15, (max(var_2, var_6)))) << (var_15 - 22513)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(((max(-107463205, (arr_5 [i_0] [i_1 + 1])))), (max(4294967295, 8105))));
                var_19 = (min(4294967295, (arr_4 [i_0] [i_1])));
            }
        }
    }
    var_20 += var_3;
    #pragma endscop
}
