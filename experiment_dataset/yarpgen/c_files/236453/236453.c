/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = max(98, var_0);
                arr_7 [i_0] = var_15;
                var_16 = 17701401510571579113;
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
