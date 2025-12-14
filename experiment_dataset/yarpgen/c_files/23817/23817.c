/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 *= (((arr_0 [i_0]) || ((!(arr_3 [i_0] [i_0])))));
                var_17 = (max(var_17, (arr_0 [i_0])));
                var_18 &= ((min((arr_0 [i_1]), (arr_2 [12]))));
            }
        }
    }
    #pragma endscop
}
