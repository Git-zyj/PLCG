/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min((min(var_7, -29585)), ((((arr_1 [i_0]) ? (arr_3 [i_0 - 1]) : ((min((arr_1 [i_0]), 1))))))));
                arr_4 [15] = (min(((((arr_1 [i_0]) + (!var_10)))), (((-371189572682441356 ? var_10 : 11127969319204672094)))));
            }
        }
    }
    var_20 = (((max(22227, 61895))));
    #pragma endscop
}
