/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 &= ((243 % 246) ? (((((-(arr_3 [12])))) ? var_4 : (((arr_4 [9]) | var_2)))) : (13 >= 40));
                var_14 = (max(var_14, (min((arr_2 [2]), ((var_10 ^ (arr_2 [0])))))));
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
