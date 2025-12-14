/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-(min(var_4, var_9))))) > (((min(var_3, 4767801900998691824)) - 5)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 2] = 41;
                arr_7 [i_0] [i_0] [i_1] = var_13;
            }
        }
    }
    #pragma endscop
}
