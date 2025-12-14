/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (max(-3274, (((((max(132, -2)))) % ((0 ? (arr_2 [i_1]) : 65535))))));
                var_16 = arr_4 [14];
            }
        }
    }
    var_17 = (((max(((var_9 ? -417243904 : var_9)), var_4)) - var_3));
    #pragma endscop
}
