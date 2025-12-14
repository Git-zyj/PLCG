/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(((var_0 ? var_1 : 62)), ((max(var_0, var_2)))))) ? (min(106, (min(1246105341, 9747)))) : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = -6946;
                    arr_7 [i_0] [i_0] [i_1] [i_2 + 2] = ((((max(2023, ((max(88, var_1)))))) - ((max(23717, var_9)))));
                }
            }
        }
    }
    var_12 = (min(var_6, (min(3018801826, var_0))));
    var_13 = var_6;
    var_14 = var_8;
    #pragma endscop
}
