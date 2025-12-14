/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [6] [7] = ((~((161 >> (var_10 >= -1)))));
                var_14 = (((arr_2 [i_0] [i_1]) / (1017 && 5)));
                var_15 = 640121881;
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
