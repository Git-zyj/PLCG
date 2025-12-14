/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 > (((((min(1, var_0)))) ^ (var_1 + var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = var_13;
                    var_17 = ((min((min(1, var_2), (((1 ? 8673617292916305973 : 1)))))));
                    arr_7 [i_1] [i_1] = ((((!var_13) ? (max((arr_2 [i_0] [i_1]), 511)) : var_0)));
                }
            }
        }
    }
    var_18 ^= var_0;
    #pragma endscop
}
