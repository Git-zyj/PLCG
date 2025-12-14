/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_8));
    var_11 = ((!((max(var_7, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(33581, 63713));
                var_13 = 65;
                arr_7 [i_1] [i_0] [2] = ((-121 ? ((min(255, ((((arr_1 [i_0] [6]) != 33581)))))) : var_4));
                arr_8 [i_0] = ((!((max(var_1, (arr_0 [i_0]))))));
                arr_9 [i_0] = (((-127 - 1) ? 73 : 116));
            }
        }
    }
    #pragma endscop
}
