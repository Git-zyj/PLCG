/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (min(((((min((arr_1 [i_0]), var_6))) ? var_10 : (~105))), ((min(118, (arr_3 [i_1] [i_0] [i_1]))))));
                var_17 = var_7;
                var_18 = (max(var_18, (((7900359968652491333 ? (arr_2 [6]) : (~var_1))))));
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
