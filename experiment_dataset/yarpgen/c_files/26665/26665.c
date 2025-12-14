/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] = 2472641647017321628;
                var_14 = 220;
                var_15 = (max((((arr_1 [i_0]) / (var_3 + -85))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : ((-(arr_1 [i_0])))))));
            }
        }
    }
    var_16 = var_5;
    var_17 = var_0;
    #pragma endscop
}
