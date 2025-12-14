/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(((((max(var_8, var_6))) ? (min(2751215312, var_9)) : ((var_2 ? var_4 : var_1)))), (max(((2751215312 ? var_6 : var_6)), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = 1543751966;
                var_11 = ((var_2 >= (arr_2 [i_1] [i_1] [i_0])));
            }
        }
    }
    var_12 = (max(var_12, (max((var_0 >= var_0), (max(((min(var_2, 1))), var_8))))));
    var_13 &= 2667544664;
    #pragma endscop
}
