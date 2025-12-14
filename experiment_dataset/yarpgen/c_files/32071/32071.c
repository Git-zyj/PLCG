/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = var_2;
                arr_6 [i_0] = (((arr_0 [i_1]) || (((0 >> (((arr_0 [i_1]) - 173)))))));
            }
        }
    }
    #pragma endscop
}
