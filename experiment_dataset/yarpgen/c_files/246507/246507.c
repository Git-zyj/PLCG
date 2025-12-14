/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] = var_0;
                arr_9 [i_0] [i_0] = 4266357602258839150;
            }
        }
    }
    var_17 = ((!59785866) * var_14);
    var_18 = (max((max(-18446744073709551608, (max(var_5, var_0)))), (max((max(18446744073709551608, var_11)), var_14))));
    #pragma endscop
}
