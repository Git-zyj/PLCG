/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((arr_3 [i_0] [i_0]) / (arr_3 [i_0 - 1] [i_0]))));
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        var_17 = -23166;
    }
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = 1;
                arr_10 [i_1] [i_2] = (min(((max(var_4, (arr_6 [i_2])))), (+-23148)));
            }
        }
    }
    #pragma endscop
}
