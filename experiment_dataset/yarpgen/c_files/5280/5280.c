/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_14));
                var_18 = (min((((~(arr_4 [i_0] [i_1] [i_1])))), 18446744073709551615));
            }
        }
    }
    var_19 = var_16;
    #pragma endscop
}
