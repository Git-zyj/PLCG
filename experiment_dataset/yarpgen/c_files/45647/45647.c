/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_12);
    var_17 = 5396;
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [9] [9] [i_0] = ((max(-var_6, -55)));
                arr_6 [7] [7] [i_1] = (((((min(1, 24887)))) * ((12 ? 5524341215126215138 : -5660904831903577257))));
                arr_7 [i_1] [i_0] &= (arr_2 [1]);
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
