/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 ? var_3 : ((var_1 / ((var_2 ? var_14 : var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 ^= 15;
                arr_6 [i_0] [i_0] = ((((arr_2 [i_0 - 1]) | var_8)));
                var_19 ^= var_10;
                arr_7 [7] [i_0] |= var_1;
            }
        }
    }
    #pragma endscop
}
