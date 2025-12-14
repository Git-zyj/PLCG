/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((var_7 ? (var_7 || 4095) : (+-8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = ((var_6 || (32756 - 0)));
                arr_5 [i_0] [i_0] [i_1 - 1] = var_6;
            }
        }
    }
    #pragma endscop
}
